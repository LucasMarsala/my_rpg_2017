/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int texture_back_pokemon_75_79(rpg_t *rpg)
{
	rpg->data.pokedex[75].back_sheet = 74;
	if (new_s(&rpg->data.pokedex[76].back, BACK_76,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[76].back_sheet = 59;
	if (new_s(&rpg->data.pokedex[77].back, BACK_77,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[77].back_sheet = 59;
	if (new_s(&rpg->data.pokedex[78].back, BACK_78,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[78].back_sheet = 59;
	if (new_s(&rpg->data.pokedex[79].back, BACK_79,
		(int [6]){0, 150, 150, 0, -50, 190}, (float [2]){3, 3}) == 84)
		return (84);
	rpg->data.pokedex[79].back_sheet = 89;
	return (0);
}
