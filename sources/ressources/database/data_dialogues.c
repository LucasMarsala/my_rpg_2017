/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** dialogue
*/
#include "rpg.h"

int data_dial(rpg_t *rpg)
{
	int fd = open(DATA_DIAL, O_RDONLY);

	if (fd == -1)
		return (84);
	for (int i = 0; (rpg->data.speech[i] = get_next_line(fd)) != NULL; i++);
	close(fd);
	return (0);
}
