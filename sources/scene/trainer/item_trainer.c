/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void set_item_pos_trainer(rpg_t *rpg)
{
	sfSprite_setPosition(rpg->trainers.skill[4].s,
		rpg->trainers.skill[4].p);
	sfSprite_setPosition(rpg->trainers.block[1].s,
		rpg->trainers.block[1].p);
	sfSprite_setPosition(rpg->trainers.block[2].s,
		rpg->trainers.block[2].p);
	sfSprite_setPosition(rpg->trainers.rtrn.s, rpg->trainers.rtrn.p);
	sfText_setPosition(rpg->trainers.btn[4].t, rpg->trainers.btn[4].p);
	sfText_setPosition(rpg->trainers.btn[5].t, rpg->trainers.btn[5].p);
}

void item_trainer(rpg_t *rpg)
{
	if (rpg->trainers.skill[4].p.y > 448)
		rpg->trainers.skill[4].p.y -= 30;
	if (rpg->trainers.block[1].p.y < 847)
		rpg->trainers.block[1].p.y += 10;
	if (rpg->trainers.block[2].p.y < 847)
		rpg->trainers.block[2].p.y += 10;
	if (rpg->trainers.btn[4].p.y > 498)
		rpg->trainers.btn[4].p.y -= 30;
	if (rpg->trainers.btn[5].p.y < 890)
		rpg->trainers.btn[5].p.y += 8;
	if (rpg->trainers.rtrn.p.y < 880)
		rpg->trainers.rtrn.p.y += 10;
	if (rpg->trainers.skill[4].p.y <= 448 &&
		rpg->trainers.block[1].p.y >= 847 &&
	rpg->trainers.block[2].p.y >= 847 && rpg->trainers.rtrn.p.y >= 880 &&
	rpg->trainers.btn[4].p.y < 493 && rpg->trainers.btn[5].p.y >= 890)
		rpg->trainers.state = 0;
	set_item_pos_trainer(rpg);
}
