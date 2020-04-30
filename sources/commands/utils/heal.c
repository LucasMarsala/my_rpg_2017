/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void restaure_pp(rpg_t *rpg, int i)
{
	for (int j = 0; j < 4; j++)
		if (rpg->charac.pkmn[i].skill[j][0] != -1)
			rpg->charac.pkmn[i].skill[j][1] =
			rpg->data.skill[rpg->charac.pkmn[i].skill[j][0]].p_p;
}

void heal_team(rpg_t *rpg)
{
	for (int i = 0; i < 6; i++)
		if (rpg->charac.pkmn[i].id != -1) {
			rpg->charac.pkmn[i].life =
			(int)(rpg->data.pokedex[rpg->charac.pkmn[i].id].life_max
				* ((float)rpg->charac.pkmn[i].lvl / 100.0));
			restaure_pp(rpg, i);
		}
}
