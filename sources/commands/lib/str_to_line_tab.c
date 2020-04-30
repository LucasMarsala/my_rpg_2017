/*
** EPITECH PROJECT, 2018
** linetab
** File description:
** commands
*/
#include "rpg.h"

char **how_many_line(char *s, char **tab)
{
	int i = 0;
	int j = 0;
	int k = 0;
	while (s[i] != '\0') {
		for (k = 0; s[i] != '\n' && s[i] != '\t' && s[i] != '\0'; k++)
			i++;
		if (k != 0)
			j++;
		for (i = i; s[i] != '\0' && (s[i] == '\t' || s[i] == '\n');
		i++);
	}
	tab = malloc(sizeof(char *) * (j + 1));
	return (tab);
}

char **malloc_line(char *s, char **tab)
{
	int i = 0;
	int j = 0;
	int k = 0;
	while (s[i] != '\0') {
		for (k = 0; s[i] != '\n' && s[i] != '\t' && s[i] != '\0'; k++)
			i++;
		if (k != 0) {
			tab[j] = malloc(sizeof(char) * (k + 1));
			j++;
		}
		for (i = i; s[i] != '\0' && (s[i] == '\t' || s[i] == '\n');
		i++);
	}
	return (tab);
}

char **put_line_in_array(char *s, char **tab)
{
	int i = 0;
	int j = 0;
	int k = 0;
	while (s[i] != '\0') {
		while (s[i] != '\n' && s[i] != '\t' && s[i] != '\0') {
			tab[j][k] = s[i];
			k++;
			i++;
		}
		tab[j][k] = '\0';
		if (k != 0)
			j++;
		k = 0;
		while (s[i] != '\0' && (s[i] == '\t' || s[i] == '\n'))
			i++;
	}
	tab[j] = NULL;
	return (tab);
}

char **my_str_to_line_tab(char *s)
{
	char **tab = NULL;
	tab = how_many_line(s, tab);
	tab = malloc_line(s, tab);
	tab = put_line_in_array(s, tab);
	return (tab);
}
