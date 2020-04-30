/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** event_world.c
*/
#include "rpg.h"

void display_menu(rpg_t *rpg)
{
	if (rpg->world.bck_menu.p.y > 0)
		rpg->world.bck_menu.p.y -= 15;
	if (rpg->world.btn[0].p.y > 490)
		rpg->world.btn[0].p.y -= 20;
	if (rpg->world.btn[1].p.y > 410)
		rpg->world.btn[1].p.y -= 20;
	if (rpg->world.btn[2].p.y > 378)
		rpg->world.btn[2].p.y -= 20;
	if (rpg->world.btn[3].p.y > 365)
		rpg->world.btn[3].p.y -= 20;
	if (rpg->world.btn[4].p.y > 360)
		rpg->world.btn[4].p.y -= 20;
	if (rpg->world.btn[5].p.y > 360)
		rpg->world.btn[5].p.y -= 20;
	for (int i = 0; i < 6; i++)
		sfSprite_setPosition(rpg->world.btn[i].s, rpg->world.btn[i].p);
	sfSprite_setPosition(rpg->world.bck_menu.s, rpg->world.bck_menu.p);
	if (rpg->world.btn[0].p.y <= 490)
		rpg->world.menu = 2;
}
