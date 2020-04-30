/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int texture_back_pokemon_45_49(rpg_t *rpg)
{
	rpg->data.pokedex[45].back_sheet = 63;
	if ((new_s(&rpg->data.pokedex[46].back, BACK_46,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		|| (new_s(&rpg->data.pokedex[47].back, BACK_47,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84))
		return (84);
	rpg->data.pokedex[46].back_sheet = 42;
	rpg->data.pokedex[47].back_sheet = 65;
	if (new_s(&rpg->data.pokedex[48].back, BACK_48,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[48].back_sheet = 63;
	if (new_s(&rpg->data.pokedex[49].back, BACK_49,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[49].back_sheet = 69;
	if (new_s(&rpg->data.pokedex[50].back, BACK_50,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	return (texture_back_pokemon_50_54(rpg));
}

int texture_back_pokemon_40_44(rpg_t *rpg)
{
	rpg->data.pokedex[40].back_sheet = 51;
	if ((new_s(&rpg->data.pokedex[41].back, BACK_41,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		|| (new_s(&rpg->data.pokedex[42].back, BACK_42,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84))
		return (84);
	rpg->data.pokedex[41].back_sheet = 53;
	rpg->data.pokedex[42].back_sheet = 63;
	if (new_s(&rpg->data.pokedex[43].back, BACK_43,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[43].back_sheet = 39;
	if (new_s(&rpg->data.pokedex[44].back, BACK_44,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[44].back_sheet = 63;
	if (new_s(&rpg->data.pokedex[45].back, BACK_45,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	return (texture_back_pokemon_45_49(rpg));
}

int texture_back_pokemon_35_39(rpg_t *rpg)
{
	rpg->data.pokedex[35].back_sheet = 47;
	if ((new_s(&rpg->data.pokedex[36].back, BACK_36,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		|| (new_s(&rpg->data.pokedex[37].back, BACK_37,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84))
		return (84);
	rpg->data.pokedex[36].back_sheet = 63;
	rpg->data.pokedex[37].back_sheet = 123;
	if (new_s(&rpg->data.pokedex[38].back, BACK_38,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[38].back_sheet = 29;
	if (new_s(&rpg->data.pokedex[39].back, BACK_39,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[39].back_sheet = 33;
	if (new_s(&rpg->data.pokedex[40].back, BACK_40,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	return (texture_back_pokemon_40_44(rpg));
}

int texture_back_pokemon_30_34(rpg_t *rpg)
{
	rpg->data.pokedex[30].back_sheet = 53;
	if ((new_s(&rpg->data.pokedex[31].back, BACK_31,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		|| (new_s(&rpg->data.pokedex[32].back, BACK_32,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84))
		return (84);
	rpg->data.pokedex[31].back_sheet = 43;
	rpg->data.pokedex[32].back_sheet = 19;
	if (new_s(&rpg->data.pokedex[33].back, BACK_33,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[33].back_sheet = 51;
	if (new_s(&rpg->data.pokedex[34].back, BACK_34,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[34].back_sheet = 43;
	if (new_s(&rpg->data.pokedex[35].back, BACK_35,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	return (texture_back_pokemon_35_39(rpg));
}

int texture_back_pokemon_25_29(rpg_t *rpg)
{
	rpg->data.pokedex[25].back_sheet = 33;
	if ((new_s(&rpg->data.pokedex[26].back, BACK_26,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		|| (new_s(&rpg->data.pokedex[27].back, BACK_27,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84))
		return (84);
	rpg->data.pokedex[26].back_sheet = 63;
	rpg->data.pokedex[27].back_sheet = 59;
	if (new_s(&rpg->data.pokedex[28].back, BACK_28,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[28].back_sheet = 74;
	if (new_s(&rpg->data.pokedex[29].back, BACK_29,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[29].back_sheet = 43;
	if (new_s(&rpg->data.pokedex[30].back, BACK_30,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	return (texture_back_pokemon_30_34(rpg));
}
