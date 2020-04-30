/*
** EPITECH PROJECT, 2018
** pnbr
** File description:
** pack lib
*/
#include "rpg.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}

void my_putstr(char *s)
{
	for (int i = 0; s[i] != '\0'; i++)
		my_putchar(s[i]);
}
