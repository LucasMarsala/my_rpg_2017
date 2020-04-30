/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** event_world.c
*/
#include "rpg.h"

int event_pokemon(rpg_t *rpg)
{
	(void)rpg;
	return (0);
}

int return_btn(rpg_t *rpg)
{
	rpg->scene = rpg->old;
	return (0);
}

int heal_btn(rpg_t *rpg)
{
	int tmp = rpg->charac.pkmn[rpg->pokemons.i].id;
	if (rpg->data.item.potion > 0 && rpg->charac.pkmn[rpg->pokemons.i].life
		!= (int)((float)rpg->data.pokedex[tmp].life_max *
		(float)(rpg->charac.pkmn[rpg->pokemons.i].lvl / 100.0))) {
		rpg->charac.pkmn[rpg->pokemons.i].life =
		(int)((float)rpg->data.pokedex[tmp].life_max *
		(float)(rpg->charac.pkmn[rpg->pokemons.i].lvl / 100.0));
		rpg->data.item.potion--;
	}
	return (0);
}

int order_btn(rpg_t *rpg)
{
	swap_pokemon_equiped(&rpg->charac.pkmn[0],
		&rpg->charac.pkmn[rpg->pokemons.i]);
	return (0);
}
