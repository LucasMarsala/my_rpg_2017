/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int xp(int lvloff, int lvldef)
{
	float xp = ((float)lvloff * 100.0) * 0.07;
	for (; lvloff > lvldef; lvldef++)
		xp /= 1.1;
	return ((int)(xp));
}
