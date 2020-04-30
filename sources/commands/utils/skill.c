/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int *skill(rpg_t *rpg, int id, int lvl)
{
	int *skill = malloc(sizeof(int) * 4);
	int tmp = 0;

	for (int i = 0; i < 4; i++)
		skill[i] = -1;
	for (int i = 0; i < 14; i++) {
		if (rpg->data.pokedex[id].capacities[i][0] <= lvl) {
			skill[tmp] = rpg->data.pokedex[id].capacities[i][1];
			tmp++;
		}
		if (tmp > 4)
			tmp = 0;
	}
	return (skill);
}
