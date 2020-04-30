/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

int count_pkmn(rpg_t *rpg)
{
	int len = 0;
	for (int i = 0; i < 6; i++) {
		if (rpg->charac.pkmn[i].id != -1 &&
			rpg->charac.pkmn[i].life != 0)
			len++;
	}
	return (len);
}

int next_pkmn(rpg_t *rpg)
{
	for (int i = 0; i < 6; i++) {
		if (rpg->charac.pkmn[i].id != -1 &&
			rpg->charac.pkmn[i].life != 0)
			return (i);
	}
	return (-1);
}
