/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_intro.c
*/
#include "rpg.h"

int texture_pokemon_57_60(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[57].pkmn, PKMN_57,
		(int [6]){0, 47, 89, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[57].sheet = 79;
	if (new_s(&rpg->data.pokedex[58].pkmn, PKMN_58,
		(int [6]){0, 55, 58, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[58].sheet = 29;
	if (new_s(&rpg->data.pokedex[59].pkmn, PKMN_59,
		(int [6]){0, 86, 74, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[59].sheet = 39;
	if (new_s(&rpg->data.pokedex[60].pkmn, PKMN_60,
		(int [6]){0, 131, 96, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[60].sheet = 39;
	return (texture_pokemon_61_64(rpg));
}

int texture_pokemon_53_56(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[53].pkmn, PKMN_53,
		(int [6]){0, 47, 59, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[53].sheet = 39;
	if (new_s(&rpg->data.pokedex[54].pkmn, PKMN_54,
		(int [6]){0, 78, 79, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[54].sheet = 49;
	if (new_s(&rpg->data.pokedex[55].pkmn, PKMN_55,
		(int [6]){0, 100, 93, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[55].sheet = 49;
	if (new_s(&rpg->data.pokedex[56].pkmn, PKMN_56,
		(int [6]){0, 32, 75, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[56].sheet = 69;
	return (texture_pokemon_57_60(rpg));
}

int texture_pokemon_49_52(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[49].pkmn, PKMN_49,
		(int [6]){0, 66, 79, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[49].sheet = 69;
	if (new_s(&rpg->data.pokedex[50].pkmn, PKMN_50,
		(int [6]){0, 46, 33, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[50].sheet = 58;
	if (new_s(&rpg->data.pokedex[51].pkmn, PKMN_51,
		(int [6]){0, 105, 69, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[51].sheet = 59;
	if (new_s(&rpg->data.pokedex[52].pkmn, PKMN_52,
		(int [6]){0, 142, 73, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[52].sheet = 79;
	return (texture_pokemon_53_56(rpg));
}

int texture_pokemon_45_48(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[45].pkmn, PKMN_45,
		(int [6]){0, 32, 52, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[45].sheet = 60;
	if (new_s(&rpg->data.pokedex[46].pkmn, PKMN_46,
		(int [6]){0, 44, 68, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[46].sheet = 38;
	if (new_s(&rpg->data.pokedex[47].pkmn, PKMN_47,
		(int [6]){0, 79, 92, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[47].sheet = 61;
	if (new_s(&rpg->data.pokedex[48].pkmn, PKMN_48,
		(int [6]){0, 44, 47, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[48].sheet = 59;
	return (texture_pokemon_49_52(rpg));
}

int texture_pokemon_41_44(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[41].pkmn, PKMN_41,
		(int [6]){0, 107, 59, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[41].sheet = 50;
	if (new_s(&rpg->data.pokedex[42].pkmn, PKMN_42,
		(int [6]){0, 94, 78, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[42].sheet = 60;
	if (new_s(&rpg->data.pokedex[43].pkmn, PKMN_43,
		(int [6]){0, 52, 47, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[43].sheet = 40;
	if (new_s(&rpg->data.pokedex[44].pkmn, PKMN_44,
		(int [6]){0, 79, 77, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[44].sheet = 59;
	return (texture_pokemon_45_48(rpg));
}
