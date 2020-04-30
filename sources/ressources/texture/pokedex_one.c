/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_intro.c
*/
#include "rpg.h"

int texture_pokemon_17_20(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[17].pkmn, PKMN_17,
		(int [6]){0, 72, 68, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[17].sheet = 60;
	if (new_s(&rpg->data.pokedex[18].pkmn, PKMN_18,
		(int [6]){0, 90, 115, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[18].sheet = 61;
	if (new_s(&rpg->data.pokedex[19].pkmn, PKMN_19,
		(int [6]){0, 92, 105, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[19].sheet = 80;
	if (new_s(&rpg->data.pokedex[20].pkmn, PKMN_20,
		(int [6]){0, 58, 60, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[20].sheet = 29;
	return (texture_pokemon_21_24(rpg));
}

int texture_pokemon_13_16(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[13].pkmn, PKMN_13,
		(int [6]){0, 51, 68, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[13].sheet = 99;
	if (new_s(&rpg->data.pokedex[14].pkmn, PKMN_14,
		(int [6]){0, 91, 95, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[14].sheet = 78;
	if (new_s(&rpg->data.pokedex[15].pkmn, PKMN_15,
		(int [6]){0, 40, 56, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[15].sheet = 80;
	if (new_s(&rpg->data.pokedex[16].pkmn, PKMN_16,
		(int [6]){0, 46, 46, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[16].sheet = 49;
	return (texture_pokemon_17_20(rpg));
}

int texture_pokemon_9_12(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[9].pkmn, PKMN_9,
		(int [6]){0, 98, 71, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[9].sheet = 59;
	if (new_s(&rpg->data.pokedex[10].pkmn, PKMN_10,
		(int [6]){0, 51, 52, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[10].sheet = 47;
	if (new_s(&rpg->data.pokedex[11].pkmn, PKMN_11,
		(int [6]){0, 60, 60, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[11].sheet = 33;
	if (new_s(&rpg->data.pokedex[12].pkmn, PKMN_12,
		(int [6]){0, 69, 103, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[12].sheet = 29;
	return (texture_pokemon_13_16(rpg));
}

int texture_pokemon_5_8(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[5].pkmn, PKMN_5,
		(int [6]){0, 78, 81, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[5].sheet = 60;
	if (new_s(&rpg->data.pokedex[6].pkmn, PKMN_6,
		(int [6]){0, 102, 89, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[6].sheet = 59;
	if (new_s(&rpg->data.pokedex[7].pkmn, PKMN_7,
		(int [6]){0, 45, 42, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[7].sheet = 39;
	if (new_s(&rpg->data.pokedex[8].pkmn, PKMN_8,
		(int [6]){0, 79, 50, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[8].sheet = 59;
	return (texture_pokemon_9_12(rpg));
}

int texture_pokemon_1_4(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[1].pkmn, PKMN_1,
		(int [6]){0, 37, 46, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[1].sheet = 29;
	if (new_s(&rpg->data.pokedex[2].pkmn, PKMN_2,
		(int [6]){0, 63, 69, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[2].sheet = 29;
	if (new_s(&rpg->data.pokedex[3].pkmn, PKMN_3,
		(int [6]){0, 156, 78, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[3].sheet = 44;
	if (new_s(&rpg->data.pokedex[4].pkmn, PKMN_4,
		(int [6]){0, 46, 62, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[4].sheet = 32;
	return (texture_pokemon_5_8(rpg));
}
