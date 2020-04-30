/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

void update_trainer_iii(rpg_t *rpg)
{
	if (rpg->trainers.state == 4) {
		rpg->dial.chrono += rpg->wdw.elapsed;
		if (flux_text(rpg) == 1)
			rpg->trainers.state = 5;
	}
}

void update_button_state_two(rpg_t *rpg)
{
	for (int i = 0; i < 4; i++)
		if (rpg->charac.pkmn[0].skill[i][0] != -1)
			update_button(rpg, &rpg->trainers.skill[i],
				rpg->evt.pos.x, rpg->evt.pos.y);
	update_button(rpg, &rpg->trainers.rtrn, rpg->evt.pos.x,
		rpg->evt.pos.y);
}

void update_trainer_ii(rpg_t *rpg)
{
	if (rpg->trainers.state == 2) {
		update_button_state_two(rpg);
	} else if (rpg->trainers.state == 3) {
		item_trainer(rpg);
	} else
		update_trainer_iii(rpg);
}

void update_trainer_i(rpg_t *rpg)
{
	if (rpg->trainers.state == 0) {
		for (int i = 0; i < 4; i++)
			update_button(rpg, &rpg->trainers.utils[i],
				rpg->evt.pos.x, rpg->evt.pos.y);
		update_button(rpg, &rpg->trainers.skill[4], rpg->evt.pos.x,
			rpg->evt.pos.y);
	} else if (rpg->trainers.state == 1) {
		fight_trainer(rpg);
	} else
		update_trainer_ii(rpg);
}
