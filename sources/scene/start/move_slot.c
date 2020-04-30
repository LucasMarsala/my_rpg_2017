/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void apply_get_rid_of_slot(rpg_t *rpg)
{
	for (int i = 0; i < 3; i++) {
		if (rpg->data.save.empty[i] == 0)
			sfSprite_setPosition(rpg->start.min[i].s,
				rpg->start.min[i].p);
		sfText_setPosition(rpg->start.empty[i].t,
			rpg->start.empty[i].p);
		sfText_setPosition(rpg->start.desc[i].t, rpg->start.desc[i].p);
	}
	if (rpg->start.slot[0].p.y <= -700 && rpg->start.slot[1].p.y <= -800 &&
	rpg->start.slot[2].p.y <= -900) {
		if (rpg->start.load_or_new == 0) {
			rpg->scene = 9;
		} else if (rpg->start.load_or_new == 1) {
			get_save(rpg);
			rpg->scene = 2;
			sfMusic_destroy(rpg->wdw.music);
			set_music(rpg, MUSIC_ROUTE1);
		}
	}
}

void do_get_rid_of_slot(rpg_t *rpg)
{
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
	for (int i = 0; i < 3; i++)
		sfSprite_setPosition(rpg->start.slot[i].s,
			rpg->start.slot[i].p);
	apply_get_rid_of_slot(rpg);
}

void get_rid_of_slot(rpg_t *rpg)
{
	if (rpg->start.slot[0].p.y >= -700)
		rpg->start.slot[0].p.y -= 20;
	if (rpg->start.slot[1].p.y >= -800)
		rpg->start.slot[1].p.y -= 20;
	if (rpg->start.slot[2].p.y >= -900)
		rpg->start.slot[2].p.y -= 20;
	if (rpg->data.save.empty[0] == 0) {
		if (rpg->start.min[0].p.y >= -690)
			rpg->start.min[0].p.y -= 20;
	}
	if (rpg->data.save.empty[1] == 0) {
		if (rpg->start.min[1].p.y >= -790)
			rpg->start.min[1].p.y -= 20;
	}
	if (rpg->data.save.empty[2] == 0) {
		if (rpg->start.min[2].p.y >= -890)
			rpg->start.min[2].p.y -= 20;
	}
	do_get_rid_of_slot(rpg);
}
