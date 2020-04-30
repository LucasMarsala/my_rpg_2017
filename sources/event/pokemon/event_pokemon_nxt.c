/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** event_world.c
*/
#include "rpg.h"

int next_btn(rpg_t *rpg)
{
	if (rpg->pokemons.i == rpg->charac.pkmeq - 1)
		rpg->pokemons.i = 0;
	else
		rpg->pokemons.i++;
	return (0);
}

int prev_btn(rpg_t *rpg)
{
	if (rpg->pokemons.i == 0)
		rpg->pokemons.i = rpg->charac.pkmeq - 1;
	else
		rpg->pokemons.i--;
	return (0);
}

int drop_btn(rpg_t *rpg)
{
	if (rpg->pokemons.i != 0) {
		rpg->charac.pkmn[rpg->pokemons.i].id = -1;
		rpg->pokemons.i--;
	}
	return (0);
}
