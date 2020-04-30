/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_intro.c
*/
#include "rpg.h"

int texture_pokemon_77_78(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[78].pkmn, PKMN_77,
		(int [6]){0, 115, 86, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[78].sheet = 59;
	if (new_s(&rpg->data.pokedex[79].pkmn, PKMN_78,
		(int [6]){0, 82, 114, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[79].sheet = 89;
	if (new_s(&rpg->data.pokedex[66].pkmn, PKMN_66,
		(int [6]){0, 75, 76, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[66].sheet = 75;
	return (texture_back_pokemon_1_4(rpg));
}

int texture_pokemon_73_76(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[74].pkmn, PKMN_73,
		(int [6]){0, 124, 116, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[74].sheet = 59;
	if (new_s(&rpg->data.pokedex[75].pkmn, PKMN_74,
		(int [6]){0, 56, 109, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[75].sheet = 74;
	if (new_s(&rpg->data.pokedex[76].pkmn, PKMN_75,
		(int [6]){0, 99, 84, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[76].sheet = 59;
	if (new_s(&rpg->data.pokedex[77].pkmn, PKMN_76,
		(int [6]){0, 76, 97, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[77].sheet = 59;
	return (texture_pokemon_77_78(rpg));
}

int texture_pokemon_69_72(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[70].pkmn, PKMN_69,
		(int [6]){0, 156, 127, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[70].sheet = 70;
	if (new_s(&rpg->data.pokedex[71].pkmn, PKMN_70,
		(int [6]){0, 68, 82, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[71].sheet = 60;
	if (new_s(&rpg->data.pokedex[72].pkmn, PKMN_71,
		(int [6]){0, 79, 87, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[72].sheet = 80;
	if (new_s(&rpg->data.pokedex[73].pkmn, PKMN_72,
		(int [6]){0, 107, 86, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[73].sheet = 60;
	return (texture_pokemon_73_76(rpg));
}

int texture_pokemon_65_68(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[65].pkmn, PKMN_65,
		(int [6]){0, 94, 90, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[65].sheet = 59;
	if (new_s(&rpg->data.pokedex[67].pkmn, PKMN_66,
		(int [6]){0, 65, 56, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[67].sheet = 79;
	if (new_s(&rpg->data.pokedex[68].pkmn, PKMN_67,
		(int [6]){0, 65, 55, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[68].sheet = 39;
	if (new_s(&rpg->data.pokedex[69].pkmn, PKMN_68,
		(int [6]){0, 48, 43, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[69].sheet = 49;
	return (texture_pokemon_69_72(rpg));
}

int texture_pokemon_61_64(rpg_t *rpg)
{
	if (new_s(&rpg->data.pokedex[61].pkmn, PKMN_61,
		(int [6]){0, 43, 77, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[61].sheet = 77;
	if (new_s(&rpg->data.pokedex[62].pkmn, PKMN_62,
		(int [6]){0, 139, 137, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[62].sheet = 79;
	if (new_s(&rpg->data.pokedex[63].pkmn, PKMN_63,
		(int [6]){0, 47, 66, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[63].sheet = 50;
	if (new_s(&rpg->data.pokedex[64].pkmn, PKMN_64,
		(int [6]){0, 60, 77, 0, 0, 0}, (float [2]){2.5, 2.5}) == 84)
		return (84);
	rpg->data.pokedex[64].sheet = 51;
	return (texture_pokemon_65_68(rpg));
}
