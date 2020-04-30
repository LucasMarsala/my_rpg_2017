/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void file_stats_next_two(rpg_t *rpg, int i, char *life)
{
	char *buf;
	if (rpg->data.pokedex[i].num == rpg->charac.pkmn[rpg->pokemons.i].id) {
		sfText_setString(rpg->pokemons.stats[0].t,
			rpg->data.pokedex[i].name);
		buf = my_itoa(rpg->data.pokedex[i].life_max *
			((float)rpg->charac.pkmn[rpg->pokemons.i].lvl / 100.0));
		life = my_strcat(life, buf);
		sfText_setString(rpg->pokemons.stats[3].t, life);
		free(buf);
	}
}
