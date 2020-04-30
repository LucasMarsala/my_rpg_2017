/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

int data_map(rpg_t *rpg)
{
	char *s;
	char *tmp = my_strdup("\0");
	int fd = open(DATA_MAP, O_RDONLY);

	if (fd == -1)
		return (84);
	while ((s = get_next_line(fd)) != NULL) {
		tmp = my_strcat(tmp, s);
		tmp = my_strcat(tmp, "\n");
		free(s);
	}
	rpg->data.map = my_str_to_line_tab(tmp);
	free(tmp);
	rpg->charac.x = 21;
	rpg->charac.y = 14;
	close(fd);
	return (0);
}
