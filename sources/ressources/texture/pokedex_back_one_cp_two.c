/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int texture_back_pokemon_70_74(rpg_t *rpg)
{
	rpg->data.pokedex[70].back_sheet = 70;
	if ((new_s(&rpg->data.pokedex[71].back, BACK_71,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		|| (new_s(&rpg->data.pokedex[72].back, BACK_72,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84))
		return (84);
	rpg->data.pokedex[71].back_sheet = 59;
	rpg->data.pokedex[72].back_sheet = 79;
	if (new_s(&rpg->data.pokedex[73].back, BACK_73,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[73].back_sheet = 59;
	if (new_s(&rpg->data.pokedex[74].back, BACK_74,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[74].back_sheet = 59;
	if (new_s(&rpg->data.pokedex[75].back, BACK_75,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	return (texture_back_pokemon_75_79(rpg));
}

int texture_back_pokemon_65_69(rpg_t *rpg)
{
	rpg->data.pokedex[65].back_sheet = 59;
	if ((new_s(&rpg->data.pokedex[66].back, BACK_66,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		|| (new_s(&rpg->data.pokedex[67].back, BACK_67,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84))
		return (84);
	rpg->data.pokedex[66].back_sheet = 75;
	rpg->data.pokedex[67].back_sheet = 79;
	if (new_s(&rpg->data.pokedex[68].back, BACK_68,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[68].back_sheet = 39;
	if (new_s(&rpg->data.pokedex[69].back, BACK_69,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[69].back_sheet = 59;
	if (new_s(&rpg->data.pokedex[70].back, BACK_70,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	return (texture_back_pokemon_70_74(rpg));
}

int texture_back_pokemon_60_64(rpg_t *rpg)
{
	rpg->data.pokedex[60].back_sheet = 118;
	if ((new_s(&rpg->data.pokedex[61].back, BACK_61,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		|| (new_s(&rpg->data.pokedex[62].back, BACK_62,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84))
		return (84);
	rpg->data.pokedex[61].back_sheet = 81;
	rpg->data.pokedex[62].back_sheet = 83;
	if (new_s(&rpg->data.pokedex[63].back, BACK_63,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[63].back_sheet = 50;
	if (new_s(&rpg->data.pokedex[64].back, BACK_64,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[64].back_sheet = 51;
	if (new_s(&rpg->data.pokedex[65].back, BACK_65,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	return (texture_back_pokemon_65_69(rpg));
}

int texture_back_pokemon_55_59(rpg_t *rpg)
{
	rpg->data.pokedex[55].back_sheet = 49;
	if ((new_s(&rpg->data.pokedex[56].back, BACK_56,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		|| (new_s(&rpg->data.pokedex[57].back, BACK_57,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84))
		return (84);
	rpg->data.pokedex[56].back_sheet = 73;
	rpg->data.pokedex[57].back_sheet = 83;
	if (new_s(&rpg->data.pokedex[58].back, BACK_58,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[58].back_sheet = 29;
	if (new_s(&rpg->data.pokedex[59].back, BACK_59,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[59].back_sheet = 38;
	if (new_s(&rpg->data.pokedex[60].back, BACK_60,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	return (texture_back_pokemon_60_64(rpg));
}

int texture_back_pokemon_50_54(rpg_t *rpg)
{
	rpg->data.pokedex[50].back_sheet = 58;
	if ((new_s(&rpg->data.pokedex[51].back, BACK_51,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		|| (new_s(&rpg->data.pokedex[52].back, BACK_52,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84))
		return (84);
	rpg->data.pokedex[51].back_sheet = 59;
	rpg->data.pokedex[52].back_sheet = 79;
	if (new_s(&rpg->data.pokedex[53].back, BACK_53,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[53].back_sheet = 39;
	if (new_s(&rpg->data.pokedex[54].back, BACK_54,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[54].back_sheet = 49;
	if (new_s(&rpg->data.pokedex[55].back, BACK_55,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	return (texture_back_pokemon_55_59(rpg));
}
