/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/

#include "rpg.h"

void move_left(rpg_t *rpg)
{
	char c = rpg->data.map[rpg->charac.y - 1][rpg->charac.x];
	char d = rpg->data.map[rpg->charac.y][rpg->charac.x];
	if ((sfKeyboard_isKeyPressed(sfKeyQ) == 1 ||
	sfKeyboard_isKeyPressed(sfKeyLeft) == 1) &&
	(rpg->world.dial != 1 && rpg->world.dial != 2)) {
		rpg->world.charac.r.left = 57;
		c = rpg->data.map[rpg->charac.y][rpg->charac.x - 1];
		if (c != '0' && c != '2' && d != '2' && d != 'B' && c != 'T'
		&& c != 'H' && c != 'G' && c != 'F' && c != 'p') {
			rpg->world.dir = 3;
		}
	}
}
