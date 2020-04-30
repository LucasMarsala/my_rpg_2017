/*
** EPITECH PROJECT, 2018
** strdup
** File description:
** commands.c
*/
#include "rpg.h"

char *my_strdup(char *src)
{
	int len = my_strlen(src);
	char *dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return NULL;
	dest[len] = '\0';
	for (int i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
