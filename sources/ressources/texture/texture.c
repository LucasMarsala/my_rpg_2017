/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture.c
*/
#include "rpg.h"

static int texture_two(rpg_t *rpg)
{
	if (texture_setting(rpg) == 84)
		return (84);
	if (texture_pokedex(rpg) == 84)
		return (84);
	if (texture_begin(rpg) == 84)
		return (84);
	return (0);
}

int texture(rpg_t *rpg)
{
	if (texture_intro(rpg) == 84)
		return (84);
	if (texture_start(rpg) == 84)
		return (84);
	if (texture_world(rpg) == 84)
		return (84);
	if (texture_wild(rpg) == 84)
		return (84);
	if (texture_map(rpg) == 84)
		return (84);
	if (texture_pokemon_1_4(rpg) == 84)
		return (84);
	if (texture_pokemon(rpg) == 84)
		return (84);
	if (texture_trainer(rpg) == 84)
		return (84);
	return (texture_two(rpg));
}
