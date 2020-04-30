/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** start.c
*/
#include "rpg.h"

void final_update_background(rpg_t *rpg)
{
	if (rpg->start.spt[0].r.left > 11520) {
		rpg->start.spt[0].r.left = 0;
		rpg->start.spt[0].r.top += 720;
		if (rpg->start.spt[0].r.top > 2880)
			rpg->start.spt[0].r.top = 0;
	}
}

void update_pkmn_background(rpg_t *rpg)
{
	rpg->start.chrono += rpg->wdw.elapsed;
	if (rpg->start.chrono > 0.05) {
		rpg->start.spt[0].r.left += 1280;
		rpg->start.spt[2].r.left += 66;
		final_update_background(rpg);
		if (rpg->start.spt[2].r.left > 4488)
			rpg->start.spt[2].r.left = 0;
		sfSprite_setTextureRect(rpg->start.spt[0].s,
			rpg->start.spt[0].r);
		sfSprite_setTextureRect(rpg->start.spt[2].s,
			rpg->start.spt[2].r);
		rpg->start.chrono -= 0.05;
	}
}

void update_key(rpg_t *rpg)
{
	rpg->start.chrono_key += rpg->wdw.elapsed;
	if (rpg->start.chrono_key > 0.1) {
		rpg->start.spt[3].r.top += 51;
		if (rpg->start.spt[3].r.top > 1020)
			rpg->start.spt[3].r.top = 0;
		sfSprite_setTextureRect(rpg->start.spt[3].s,
		rpg->start.spt[3].r);
		rpg->start.chrono_key -= 0.1;
	}
}
