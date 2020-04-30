/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int next_free(rpg_t *rpg)
{
	for (int i = 0; i < 6; i++)
		if (rpg->charac.pkmn[i].id == -1)
			return (i);
	return (-1);
}

void new_pkmn(rpg_t *rpg, int id)
{
	rpg->charac.pkmn[id].id = rpg->wild.id;
	rpg->charac.pkmn[id].lvl = rpg->wild.level;
	rpg->charac.pkmn[id].life = rpg->wild.life;
	rpg->charac.pkmn[id].exp = 0;
	rpg->charac.pkmn[id].state = 0;
	for (int i = 0; i < 4; i++) {
		rpg->charac.pkmn[id].skill[i][0] = rpg->wild.skills[i];
		rpg->charac.pkmn[id].skill[i][1] = 5;
	}
}
