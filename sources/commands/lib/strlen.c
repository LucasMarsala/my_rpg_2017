/*
** EPITECH PROJECT, 2018
** strlen
** File description:
** commands
*/
#include "rpg.h"

int my_strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
