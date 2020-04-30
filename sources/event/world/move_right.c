/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

void move_right(rpg_t *rpg)
{
	char c = rpg->data.map[rpg->charac.y - 1][rpg->charac.x];
	char d = rpg->data.map[rpg->charac.y][rpg->charac.x];
	if ((sfKeyboard_isKeyPressed(sfKeyD) == 1 ||
	sfKeyboard_isKeyPressed(sfKeyRight) == 1) &&
	(rpg->world.dial != 1 && rpg->world.dial != 2)) {
		rpg->world.charac.r.left = 19;
		c = rpg->data.map[rpg->charac.y][rpg->charac.x + 1];
		if (c != '0' && c != '2' && d != '2' && d != 'D' && c != 'T' &&
		c != 'H' && c != 'G' && c != 'F' && c != 'p') {
			rpg->world.dir = 1;
		}
	}
}
