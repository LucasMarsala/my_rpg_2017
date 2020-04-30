/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void algo_capture(rpg_t *rpg)
{
	int id;
	if (((rand() % 10) + (10 * ((float)rpg->wild.life /
	(float)(rpg->data.pokedex[rpg->wild.id].life_max)))) > 6) {
		rpg->wild.state = 4;
		rpg->wild.capt = 0;
		get_dialog(rpg, (char *[2]){"Le Pokemon s'est echappe !\n",
		NULL});
	} else {
		rpg->wild.state = 4;
		get_dialog(rpg, (char *[4]){"Vous avez capture ",
		rpg->data.pokedex[rpg->wild.id].name, " !\n", NULL});
		id = next_free(rpg);
		if (id != -1)
			new_pkmn(rpg, id);
	}
}

void fall_pokeball(rpg_t *rpg)
{
	if (rpg->wild.pkball.p.y < 270)
		rpg->wild.pkball.p.y += 700 * rpg->wdw.elapsed;
	if (rpg->wild.pkball.p.y >= 270) {
		rpg->wild.capt = 2;
		algo_capture(rpg);
	}
	sfSprite_setPosition(rpg->wild.pkball.s, rpg->wild.pkball.p);
}
