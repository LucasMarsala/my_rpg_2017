/*
** EPITECH PROJECT, 2018
** getnbr
** File description:
** commands.c
*/
#include "rpg.h"

int my_getnbr(char *s)
{
	int nb = 0;
	int tmp = 1;

	while (s[0] == '-' && s[0]) {
		tmp *= -1;
		s++;
	}
	while (s[0] >= '0' && s[0] <= '9' && s[0]) {
		nb = nb * 10 + (s[0] - '0');
		s++;
	}
	nb *= tmp;
	return (nb);
}
