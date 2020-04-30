/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** commands.c
*/
#include "rpg.h"

char *get_next_line(int fd)
{
	char *s = malloc(sizeof(char) * 1);
	char *tmp = malloc(sizeof(char) * 2);
	if (!s || !tmp)
		return (NULL);
	s[0] = '\0';
	while (read(fd, tmp, 1) != 0) {
		tmp[1] = '\0';
		if (tmp[0] == '\n') {
			free(tmp);
			return (s);
		}
		s = my_strcat(s, tmp);
	}
	if (s[0] == '\0') {
		free(tmp);
		free(s);
		return (NULL);
	}
	free(tmp);
	return (s);
}
