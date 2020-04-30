/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int fight_fight_rtrn(rpg_t *rpg)
{
	rpg->trainers.state = 3;
	return (0);
}

int fight_fight_bag(rpg_t *rpg)
{
	if (rpg->data.item.potion > 0 && rpg->charac.pkmn[0].life !=
		(int)((float)rpg->data.pokedex[rpg->charac.pkmn[0].id].life_max
		* (float)(rpg->charac.pkmn[0].lvl / 100.0))) {
		rpg->charac.pkmn[0].life =
		(int)((float)rpg->data.pokedex[rpg->charac.pkmn[0].id].life_max
		* ((float)rpg->charac.pkmn[0].lvl / 100.0));
		rpg->data.item.potion--;
	}
	return (0);
}

int fight_fight_pkball(rpg_t *rpg)
{
	(void)rpg;
	return (0);
}

int fight_fight_pkmn(rpg_t *rpg)
{
	rpg->old = rpg->scene;
	rpg->scene = 5;
	return (0);
}

int fight_fight_run(rpg_t *rpg)
{
	if (rpg->trainers.pkmn[0].life <= 0 || rpg->charac.pkmn[0].life <= 0) {
		if (rpg->charac.pkmn[0].life == 0)
			heal_team(rpg);
		end_fight(rpg);
		sfMusic_destroy(rpg->wdw.music);
		if (set_music(rpg, MUSIC_ROUTE1) == 84)
			return (84);

	}
	return (0);
}
