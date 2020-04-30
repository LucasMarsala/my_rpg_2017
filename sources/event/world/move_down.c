/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

void move_down(rpg_t *rpg)
{
	char c = rpg->data.map[rpg->charac.y - 1][rpg->charac.x];
	char d = rpg->data.map[rpg->charac.y][rpg->charac.x];
	if ((sfKeyboard_isKeyPressed(sfKeyS) == 1 ||
	sfKeyboard_isKeyPressed(sfKeyDown) == 1) &&
	(rpg->world.dial != 1 && rpg->world.dial != 2)) {
		rpg->world.charac.r.left = 0;
		c = rpg->data.map[rpg->charac.y + 1][rpg->charac.x];
		if (c != '0' && d != 'A' && c != 'T' &&
		c != 'H' && c != 'G' && c != 'F' && c != 'p') {
			rpg->world.dir = 0;
		}
	}
}
