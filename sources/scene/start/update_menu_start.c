/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** start.c
*/
#include "rpg.h"

int active_button_start(rpg_t *rpg)
{
	for (int i = 0; i < 4; i++) {
		if (update_button(rpg, &rpg->start.btn[i],
			rpg->evt.pos.x, rpg->evt.pos.y) == 84)
			return (84);
	}
	return (0);
}

int active_button_slot(rpg_t *rpg)
{
	for (int i = 0; i < 4; i++) {
		if (update_button(rpg, &rpg->start.slot[i],
			rpg->evt.pos.x, rpg->evt.pos.y) == 84)
			return (84);
	}
	return (0);
}

void update_menu_start(rpg_t *rpg)
{
	rpg->start.chrono_mvt += rpg->wdw.elapsed;
	if (rpg->start.chrono_mvt > 0.025) {
		if (rpg->start.menu == 1)
			move_start(rpg);
		if (rpg->start.menu == 2) {
			active_button_start(rpg);
		}
		if (rpg->start.menu == 3)
			move_new_game(rpg);
		if (rpg->start.menu == 5)
			move_load_game(rpg);
		if (rpg->start.menu == 4 || rpg->start.menu == 6) {
			active_button_slot(rpg);
		}
		if (rpg->start.menu == 7)
			get_rid_of_slot(rpg);
		rpg->start.chrono_mvt -= 0.025;
	}
}
