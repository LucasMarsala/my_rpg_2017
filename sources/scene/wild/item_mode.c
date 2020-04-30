/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void final_item_mod(rpg_t *rpg)
{
	sfSprite_setPosition(rpg->wild.skill[4].s, rpg->wild.skill[4].p);
	sfSprite_setPosition(rpg->wild.block[1].s, rpg->wild.block[1].p);
	sfSprite_setPosition(rpg->wild.block[2].s, rpg->wild.block[2].p);
	sfSprite_setPosition(rpg->wild.rtrn.s, rpg->wild.rtrn.p);
	sfText_setPosition(rpg->wild.btn[4].t, rpg->wild.btn[4].p);
	sfText_setPosition(rpg->wild.btn[5].t, rpg->wild.btn[5].p);
}

void item_mode(rpg_t *rpg)
{
	if (rpg->wild.skill[4].p.y > 448)
		rpg->wild.skill[4].p.y -= 30;
	if (rpg->wild.block[1].p.y < 847)
		rpg->wild.block[1].p.y += 10;
	if (rpg->wild.block[2].p.y < 847)
		rpg->wild.block[2].p.y += 10;
	if (rpg->wild.btn[4].p.y > 498)
		rpg->wild.btn[4].p.y -= 30;
	if (rpg->wild.btn[5].p.y < 890)
		rpg->wild.btn[5].p.y += 8;
	if (rpg->wild.rtrn.p.y < 880)
		rpg->wild.rtrn.p.y += 10;
	if (rpg->wild.skill[4].p.y <= 448 && rpg->wild.block[1].p.y >= 847 &&
	rpg->wild.block[2].p.y >= 847 && rpg->wild.rtrn.p.y >= 880 &&
	rpg->wild.btn[4].p.y < 493 && rpg->wild.btn[5].p.y >= 890)
		rpg->wild.state = 0;
	final_item_mod(rpg);
}
