/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** modify_text
*/
#include "rpg.h"

void *my_memset(char *tab, int value, int size)
{
	for (int i = 0; tab && i < size; i++)
		tab[i] = value;
	return (tab);
}
