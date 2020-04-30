/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void set_pos_trainer(rpg_t *rpg)
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

void fight_trainer(rpg_t *rpg)
{
	if (rpg->trainers.skill[4].p.y < 800)
		rpg->trainers.skill[4].p.y += 10;
	if (rpg->trainers.block[1].p.y > 447)
		rpg->trainers.block[1].p.y -= 20;
	if (rpg->trainers.block[2].p.y > 447)
		rpg->trainers.block[2].p.y -= 20;
	if (rpg->trainers.rtrn.p.y > 480)
		rpg->trainers.rtrn.p.y -= 20;
	if (rpg->trainers.btn[4].p.y < 893)
		rpg->trainers.btn[4].p.y += 10;
	if (rpg->trainers.btn[5].p.y > 490)
		rpg->trainers.btn[5].p.y -= 20;
	if (rpg->trainers.skill[4].p.y >= 800 &&
		rpg->trainers.block[1].p.y <= 447 &&
	rpg->trainers.block[2].p.y <= 447 && rpg->trainers.rtrn.p.y <= 480 &&
	rpg->trainers.btn[4].p.y >= 893 && rpg->trainers.btn[5].p.y <= 490)
		rpg->trainers.state = 2;
	set_pos_trainer(rpg);
}
