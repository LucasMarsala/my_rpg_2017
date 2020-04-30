/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

float resistance(rpg_t *rpg, int off, int def)
{
	for (int i = 0; i < 324; i++) {
		if (rpg->data.resis.resis[i][0] == (float)off &&
		rpg->data.resis.resis[i][1] == (float)def)
			return (rpg->data.resis.resis[i][2]);
	}
	return (0);
}
