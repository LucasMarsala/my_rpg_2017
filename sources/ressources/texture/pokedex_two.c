/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_intro.c
*/
#include "rpg.h"

int texture_pokemon_37_40(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[37].pkmn, PKMN_37,
		(int [6]){0, 146, 81, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[37].sheet = 89;
	if (new_s(&rpg->data.pokedex[38].pkmn, PKMN_38,
		(int [6]){0, 64, 55, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[38].sheet = 25;
	if (new_s(&rpg->data.pokedex[39].pkmn, PKMN_39,
		(int [6]){0, 59, 93, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[39].sheet = 29;
	if (new_s(&rpg->data.pokedex[40].pkmn, PKMN_40,
		(int [6]){0, 75, 35, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[40].sheet = 50;
	return (texture_pokemon_41_44(rpg));
}

int texture_pokemon_33_36(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[33].pkmn, PKMN_33,
		(int [6]){0, 45, 50, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[33].sheet = 51;
	if (new_s(&rpg->data.pokedex[34].pkmn, PKMN_34,
		(int [6]){0, 47, 31, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[34].sheet = 39;
	if (new_s(&rpg->data.pokedex[35].pkmn, PKMN_35,
		(int [6]){0, 93, 49, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[35].sheet = 47;
	if (new_s(&rpg->data.pokedex[36].pkmn, PKMN_36,
		(int [6]){0, 106, 68, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[36].sheet = 59;
	return (texture_pokemon_37_40(rpg));
}

int texture_pokemon_29_32(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[29].pkmn, PKMN_29,
		(int [6]){0, 57, 30, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[29].sheet = 40;
	if (new_s(&rpg->data.pokedex[30].pkmn, PKMN_30,
		(int [6]){0, 57, 58, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[30].sheet = 50;
	if (new_s(&rpg->data.pokedex[31].pkmn, PKMN_31,
		(int [6]){0, 60, 52, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[31].sheet = 39;
	if (new_s(&rpg->data.pokedex[32].pkmn, PKMN_32,
		(int [6]){0, 92, 81, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[32].sheet = 15;
	return (texture_pokemon_33_36(rpg));
}

int texture_pokemon_25_28(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[25].pkmn, PKMN_25,
		(int [6]){0, 42, 61, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[25].sheet = 30;
	if (new_s(&rpg->data.pokedex[26].pkmn, PKMN_26,
		(int [6]){0, 52, 96, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[26].sheet = 59;
	if (new_s(&rpg->data.pokedex[27].pkmn, PKMN_27,
		(int [6]){0, 47, 59, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[27].sheet = 60;
	if (new_s(&rpg->data.pokedex[28].pkmn, PKMN_28,
		(int [6]){0, 85, 80, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[28].sheet = 75;
	texture_pokemon_29_32(rpg);
	return (0);
}

int texture_pokemon_21_24(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[21].pkmn, PKMN_21,
		(int [6]){0, 115, 99, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[21].sheet = 59;
	if (new_s(&rpg->data.pokedex[22].pkmn, PKMN_22,
		(int [6]){0, 46, 63, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[22].sheet = 48;
	if (new_s(&rpg->data.pokedex[23].pkmn, PKMN_23,
		(int [6]){0, 67, 93, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[23].sheet = 59;
	if (new_s(&rpg->data.pokedex[24].pkmn, PKMN_24,
		(int [6]){0, 85, 98, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[24].sheet = 44;
	texture_pokemon_25_28(rpg);
	return (0);
}
