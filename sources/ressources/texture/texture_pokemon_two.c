/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int texture_pokemon_six(rpg_t *rpg)
{
	if (new_text(&rpg->pokemons.item, FONT_PIXEL, "x 0",
		(int [3]){726, 490, 30}) == 84)
			return (84);
	sfText_setColor(rpg->pokemons.item.t, sfWhite);
	rpg->pokemons.i = 0;
	return (0);
}
