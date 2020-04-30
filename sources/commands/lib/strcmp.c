/*
** EPITECH PROJECT, 2018
** strcmp
** File description:
** commands
*/
#include "rpg.h"

int my_strcmp(char *s1, char *s2)
{
	for (int i = 0; s1[i] || s2[i]; i++) {
		if (s1[i] != s2[i])
			return (1);
	}
	return (0);
}
