/*
** EPITECH PROJECT, 2018
** putnbr
** File description:
** commands.c
*/
#include "rpg.h"

void my_putnbr(int nb)
{
	int tmp;
	int n;

	if (nb < 0) {
		my_putchar('-');
		my_putnbr(-nb);
	} else {
		tmp = nb % 10;
		n = nb / 10;
		if (n != 0)
			my_putnbr(n);
		my_putchar(tmp + '0');
	}
}
