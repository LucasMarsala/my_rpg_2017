/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void final_fight_mode(rpg_t *rpg)
{
	sfSprite_setPosition(rpg->wild.skill[4].s, rpg->wild.skill[4].p);
	sfSprite_setPosition(rpg->wild.block[1].s, rpg->wild.block[1].p);
	sfSprite_setPosition(rpg->wild.block[2].s, rpg->wild.block[2].p);
	sfSprite_setPosition(rpg->wild.rtrn.s, rpg->wild.rtrn.p);
	sfText_setPosition(rpg->wild.btn[4].t, rpg->wild.btn[4].p);
	sfText_setPosition(rpg->wild.btn[5].t, rpg->wild.btn[5].p);
}

void fight_mode(rpg_t *rpg)
{
	if (rpg->wild.skill[4].p.y < 800)
		rpg->wild.skill[4].p.y += 10;
	if (rpg->wild.block[1].p.y > 447)
		rpg->wild.block[1].p.y -= 20;
	if (rpg->wild.block[2].p.y > 447)
		rpg->wild.block[2].p.y -= 20;
	if (rpg->wild.rtrn.p.y > 480)
		rpg->wild.rtrn.p.y -= 20;
	if (rpg->wild.btn[4].p.y < 893)
		rpg->wild.btn[4].p.y += 10;
	if (rpg->wild.btn[5].p.y > 490)
		rpg->wild.btn[5].p.y -= 20;
	if (rpg->wild.skill[4].p.y >= 800 && rpg->wild.block[1].p.y <= 447 &&
	rpg->wild.block[2].p.y <= 447 && rpg->wild.rtrn.p.y <= 480 &&
	rpg->wild.btn[4].p.y >= 893 && rpg->wild.btn[5].p.y <= 490)
		rpg->wild.state = 2;
	final_fight_mode(rpg);
}
