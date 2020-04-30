/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** database.c
*/
#include "rpg.h"

int database(rpg_t *rpg)
{
	if (data_zone(rpg) == 84)
		return (84);
	if (data_pokedex(rpg) == 84)
		return (84);
	if (data_skill(rpg) == 84)
		return (84);
	if (data_map(rpg) == 84)
		return (84);
	if (data_resistance(rpg) == 84)
		return (84);
	if (data_teleportation(rpg) == 84)
		return (84);
	if (data_trainer(rpg) == 84)
		return (84);
	return (0);
}
