/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** event_world.c
*/
#include "rpg.h"

int intro_launchs(rpg_t *rpg)
{
	if (rpg->world.intro_fight == 1 && rpg->world.fight.p.x < 0
		&& rpg->world.dial == 0) {
		if (launch_intro(rpg) == 84)
			return (84);
	} else if (rpg->world.intro_trainer == 1 && rpg->world.fight.p.x < 0
		&& rpg->world.dial == 0) {
		if (launch_trainer(rpg) == 84)
			return (84);
	}
	return (0);
}

int active_button_menu(rpg_t *rpg)
{
	for (int i = 0; i < 6; i++) {
		if (update_button(rpg, &rpg->world.btn[i],
			rpg->evt.pos.x, rpg->evt.pos.y) == 84)
			return (84);
	}
	return (0);
}

int update_menu_world(rpg_t *rpg)
{
	rpg->world.chrono_mvt += rpg->wdw.elapsed;
	if (rpg->world.chrono_mvt > 0.025) {
		if (rpg->world.menu == 1)
			display_menu(rpg);
		if (rpg->world.menu == 2)
			active_button_menu(rpg);
		if (rpg->world.menu == 3)
			remove_menu(rpg);
		rpg->world.chrono_mvt -= 0.025;
	}
	return (0);
}
