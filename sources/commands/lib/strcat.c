/*
** EPITECH PROJECT, 2018
** strcat
** File description:
** commands.c
*/
#include "rpg.h"

char *my_strcat(char *dest, char *src)
{
	char *s = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));
	if (!s)
		return NULL;
	for (int i = 0; dest[i] != '\0'; i++)
		s[i] = dest[i];
	for (int i = 0; src[i] != '\0'; i++)
		s[my_strlen(dest) + i] = src[i];
	s[my_strlen(dest) + my_strlen(src)] = '\0';
	free(dest);
	return (s);
}

char *my_charcat(char *dest, char c)
{
	char *s = malloc(sizeof(char) * (my_strlen(dest) + 2));
	if (!s)
		return NULL;
	for (int i = 0; dest[i] != '\0'; i++)
		s[i] = dest[i];
	s[my_strlen(dest)] = c;
	s[my_strlen(dest) + 1] = '\0';
	free(dest);
	return (s);
}
