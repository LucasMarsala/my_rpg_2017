/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

char *my_itoa(int nb)
{
	int nb_size = my_intlen(nb);
	int prev = 0;
	int i;
	int j;
	char *str;

	str = malloc(sizeof(char) * (nb_size + 1));
	for (i = 0, j = pow(10, nb_size - 1); i < nb_size; i++, j /= 10) {
		str[i] = (nb / j - (prev * 10)) + 48;
		prev = nb / j;
	}
	str[i] = '\0';
	return (str);
}
