/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

int my_intlen(int nb)
{
	int i;
	int count;

	for (i = 10, count = 0; ; i *= 10, count++) {
		if (nb / i == 0)
			break;
	}
	return (count + 1);
}
