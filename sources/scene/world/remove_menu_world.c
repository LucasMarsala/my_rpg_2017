/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** event_world.c
*/
#include "rpg.h"

void remove_menu(rpg_t *rpg)
{
	if (rpg->world.bck_menu.p.y < 300)
		rpg->world.bck_menu.p.y += 15;
	if (rpg->world.btn[0].p.y < 1290)
		rpg->world.btn[0].p.y += 20;
	if (rpg->world.btn[1].p.y < 1110)
		rpg->world.btn[1].p.y += 20;
	if (rpg->world.btn[2].p.y < 1025)
		rpg->world.btn[2].p.y += 20;
	if (rpg->world.btn[3].p.y < 960)
		rpg->world.btn[3].p.y += 20;
	if (rpg->world.btn[4].p.y < 900)
		rpg->world.btn[4].p.y += 20;
	if (rpg->world.btn[5].p.y < 840)
		rpg->world.btn[5].p.y += 20;
	for (int i = 0; i < 6; i++)
		sfSprite_setPosition(rpg->world.btn[i].s, rpg->world.btn[i].p);
	sfSprite_setPosition(rpg->world.bck_menu.s, rpg->world.bck_menu.p);
	if (rpg->world.btn[0].p.y >= 1290)
		rpg->world.menu = 0;
}
