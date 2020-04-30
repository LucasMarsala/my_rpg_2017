/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

void update_wild_iii(rpg_t *rpg)
{
	if (rpg->wild.state == 4) {
		rpg->dial.chrono += rpg->wdw.elapsed;
		if (flux_text(rpg) == 1)
			rpg->wild.state = 5;
	} else if (rpg->wild.state == 6)
		fall_pokeball(rpg);
}

void update_button_wild_two(rpg_t *rpg)
{
	for (int i = 0; i < 4; i++)
		if (rpg->charac.pkmn[0].skill[i][0] != -1)
			update_button(rpg, &rpg->wild.skill[i],
				rpg->evt.pos.x, rpg->evt.pos.y);
	update_button(rpg, &rpg->wild.rtrn, rpg->evt.pos.x,
		rpg->evt.pos.y);
}

void update_wild_ii(rpg_t *rpg)
{
	if (rpg->wild.state == 2) {
		update_button_wild_two(rpg);
	} else if (rpg->wild.state == 3) {
		item_mode(rpg);
	} else
		update_wild_iii(rpg);
}

void update_wild_i(rpg_t *rpg)
{
	if (rpg->wild.state == 0) {
		for (int i = 0; i < 4; i++)
			update_button(rpg, &rpg->wild.utils[i],
				rpg->evt.pos.x, rpg->evt.pos.y);
		update_button(rpg, &rpg->wild.skill[4], rpg->evt.pos.x,
			rpg->evt.pos.y);
	} else if (rpg->wild.state == 1) {
		fight_mode(rpg);
	} else
		update_wild_ii(rpg);
}
