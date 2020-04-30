/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void final_moving_start(rpg_t *rpg)
{
	if (rpg->start.spt[1].p.x <= -840 && rpg->start.spt[4].p.x <= 10 &&
	rpg->start.btn[0].p.x <= 536 && rpg->start.btn[1].p.x <= 486 &&
	rpg->start.btn[2].p.x <= 436 && rpg->start.btn[3].p.x <= 386 &&
	rpg->start.slot[0].p.y <= -700 && rpg->start.slot[1].p.y <= -800 &&
	rpg->start.slot[2].p.y <= -900 && rpg->start.slot[3].p.y >= 980 &&
	rpg->start.txt[0].p.x <= 555 && rpg->start.txt[1].p.x <= 500 &&
	rpg->start.txt[2].p.x <= 470 && rpg->start.txt[3].p.x <= 415)
		rpg->start.menu = 2;
}

void apply_moving_start(rpg_t *rpg)
{
	for (int i = 0; i < 4; i++) {
		sfSprite_setPosition(rpg->start.btn[i].s, rpg->start.btn[i].p);
		sfSprite_setPosition(rpg->start.slot[i].s,
		rpg->start.slot[i].p);
		sfText_setPosition(rpg->start.txt[i].t, rpg->start.txt[i].p);
	}
	sfText_setPosition(rpg->start.txt[4].t, rpg->start.txt[4].p);
	for (int i = 0; i < 3; i++) {
		if (rpg->data.save.empty[i] == 0)
			sfSprite_setPosition(rpg->start.min[i].s,
				rpg->start.min[i].p);
		sfText_setPosition(rpg->start.empty[i].t,
			rpg->start.empty[i].p);
		sfText_setPosition(rpg->start.desc[i].t, rpg->start.desc[i].p);
	}
	sfSprite_setPosition(rpg->start.spt[1].s, rpg->start.spt[1].p);
	sfSprite_setPosition(rpg->start.spt[4].s, rpg->start.spt[4].p);
	final_moving_start(rpg);
}

void do_moving_start_2(rpg_t *rpg)
{
	if (rpg->data.save.empty[2] == 0) {
		if (rpg->start.min[2].p.y >= -890)
			rpg->start.min[2].p.y -= 20;
	}
	if (rpg->start.desc[0].p.y >= -525)
		rpg->start.desc[0].p.y -= 20;
	if (rpg->start.desc[1].p.y >= -625)
		rpg->start.desc[1].p.y -= 20;
	if (rpg->start.desc[2].p.y >= -725)
		rpg->start.desc[2].p.y -= 20;
	if (rpg->start.empty[0].p.y >= -630)
		rpg->start.empty[0].p.y -= 20;
	if (rpg->start.empty[1].p.y >= -730)
		rpg->start.empty[1].p.y -= 20;
	if (rpg->start.empty[2].p.y >= -830)
		rpg->start.empty[2].p.y -= 20;
	apply_moving_start(rpg);
}

void do_moving_start(rpg_t *rpg)
{
	if (rpg->start.slot[3].p.y <= 980)
		rpg->start.slot[3].p.y += 8;
	if (rpg->start.txt[0].p.x > 555)
		rpg->start.txt[0].p.x -= 20;
	if (rpg->start.txt[1].p.x > 500)
		rpg->start.txt[1].p.x -= 20;
	if (rpg->start.txt[2].p.x > 470)
		rpg->start.txt[2].p.x -= 20;
	if (rpg->start.txt[3].p.x > 415)
		rpg->start.txt[3].p.x -= 20;
	if (rpg->start.txt[4].p.y <= 1000)
		rpg->start.txt[4].p.y += 8;
	if (rpg->data.save.empty[0] == 0)
		if (rpg->start.min[0].p.y >= -690)
			rpg->start.min[0].p.y -= 20;
	if (rpg->data.save.empty[1] == 0)
		if (rpg->start.min[1].p.y >= -790)
			rpg->start.min[1].p.y -= 20;
	do_moving_start_2(rpg);
}

void move_start(rpg_t *rpg)
{
	if (rpg->start.spt[1].p.x > -840)
		rpg->start.spt[1].p.x -= 30;
	if (rpg->start.spt[4].p.x > 10)
		rpg->start.spt[4].p.x -= 20;
	if (rpg->start.btn[0].p.x > 536)
		rpg->start.btn[0].p.x -= 20;
	if (rpg->start.btn[1].p.x > 486)
		rpg->start.btn[1].p.x -= 20;
	if (rpg->start.btn[2].p.x > 436)
		rpg->start.btn[2].p.x -= 20;
	if (rpg->start.btn[3].p.x > 386)
		rpg->start.btn[3].p.x -= 20;
	if (rpg->start.slot[0].p.y >= -700)
		rpg->start.slot[0].p.y -= 20;
	if (rpg->start.slot[1].p.y >= -800)
		rpg->start.slot[1].p.y -= 20;
	if (rpg->start.slot[2].p.y >= -900)
		rpg->start.slot[2].p.y -= 20;
	do_moving_start(rpg);
}
