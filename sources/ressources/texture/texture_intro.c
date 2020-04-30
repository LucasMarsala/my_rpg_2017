/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_intro.c
*/
#include "rpg.h"

int texture_intro(rpg_t *rpg)
{
	rpg->intro.chrono = 0;
	if (new_s(&rpg->intro.video, IMG_INTRO,
		(int [6]){0, 600, 338, 0, -150, 0},
		(float [2]){1.9, 1.9}) == 84)
		return (84);
	return (0);
}
