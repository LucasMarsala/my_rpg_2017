/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int texture_back_pokemon_20_24(rpg_t *rpg)
{
	rpg->data.pokedex[20].back_sheet = 33;
	if ((new_s(&rpg->data.pokedex[21].back, BACK_21,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		|| (new_s(&rpg->data.pokedex[22].back, BACK_22,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84))
		return (84);
	rpg->data.pokedex[21].back_sheet = 63;
	rpg->data.pokedex[22].back_sheet = 47;
	if (new_s(&rpg->data.pokedex[23].back, BACK_23,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[23].back_sheet = 63;
	if (new_s(&rpg->data.pokedex[24].back, BACK_24,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[24].back_sheet = 48;
	if (new_s(&rpg->data.pokedex[25].back, BACK_25,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	return (texture_back_pokemon_25_29(rpg));
}

int texture_back_pokemon_14_19(rpg_t *rpg)
{
	rpg->data.pokedex[15].back_sheet = 83;
	if ((new_s(&rpg->data.pokedex[16].back, BACK_16,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		|| (new_s(&rpg->data.pokedex[17].back, BACK_17,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84))
		return (84);
	rpg->data.pokedex[16].back_sheet = 53;
	rpg->data.pokedex[17].back_sheet = 59;
	if (new_s(&rpg->data.pokedex[18].back, BACK_18,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[18].back_sheet = 64;
	if (new_s(&rpg->data.pokedex[19].back, BACK_19,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[19].back_sheet = 83;
	if (new_s(&rpg->data.pokedex[20].back, BACK_20,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	return (texture_back_pokemon_20_24(rpg));
}

int texture_back_pokemon_10_14(rpg_t *rpg)
{
	rpg->data.pokedex[10].back_sheet = 51;
	if ((new_s(&rpg->data.pokedex[11].back, BACK_11,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		|| (new_s(&rpg->data.pokedex[12].back, BACK_12,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84))
		return (84);
	rpg->data.pokedex[11].back_sheet = 35;
	rpg->data.pokedex[12].back_sheet = 33;
	if (new_s(&rpg->data.pokedex[13].back, BACK_13,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[13].back_sheet = 100;
	if (new_s(&rpg->data.pokedex[14].back, BACK_14,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[14].back_sheet = 72;
	if (new_s(&rpg->data.pokedex[15].back, BACK_15,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	return (texture_back_pokemon_14_19(rpg));
}

int texture_back_pokemon_5_9(rpg_t *rpg)
{
	rpg->data.pokedex[5].back_sheet = 123;
	if ((new_s(&rpg->data.pokedex[6].back, BACK_6,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		|| (new_s(&rpg->data.pokedex[7].back, BACK_7,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84))
		return (84);
	rpg->data.pokedex[6].back_sheet = 59;
	rpg->data.pokedex[7].back_sheet = 43;
	if (new_s(&rpg->data.pokedex[8].back, BACK_8,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[8].back_sheet = 59;
	if (new_s(&rpg->data.pokedex[9].back, BACK_9,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[9].back_sheet = 59;
	if (new_s(&rpg->data.pokedex[10].back, BACK_10,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	return (texture_back_pokemon_10_14(rpg));
}

int texture_back_pokemon_1_4(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[1].back, BACK_1,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[1].back_sheet = 29;
	if (new_s(&rpg->data.pokedex[2].back, BACK_2,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[2].back_sheet = 29;
	if (new_s(&rpg->data.pokedex[3].back, BACK_3,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[3].back_sheet = 44;
	if (new_s(&rpg->data.pokedex[4].back, BACK_4,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[4].back_sheet = 31;
	if (new_s(&rpg->data.pokedex[5].back, BACK_5,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	return (texture_back_pokemon_5_9(rpg));
}
