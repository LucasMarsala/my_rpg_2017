/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_teleportation.c
*/
#include "rpg.h"

int data_teleportation(rpg_t *rpg)
{
	int fd = open(DATA_TP, O_RDONLY);
	char *s;
	void *ptr;

	if (fd == -1)
		return (84);
	for (int i = 0; i < 58; i++) {
		s = get_next_line(fd);
		ptr = s;
		get_tp_position(rpg, s, i);
		free(ptr);
	}
	close(fd);
	return (0);
}

void get_tp_position(rpg_t *rpg, char *s, int i)
{
	rpg->world.tp[i][0] = my_getnbr(s);
	s += my_intlen(rpg->world.tp[i][0]) + 1;
	rpg->world.tp[i][1] = my_getnbr(s);
	s += my_intlen(rpg->world.tp[i][1]) + 1;
	rpg->world.tp[i][2] = my_getnbr(s);
	s += my_intlen(rpg->world.tp[i][2]) + 1;
	rpg->world.tp[i][3] = my_getnbr(s);
	s += my_intlen(rpg->world.tp[i][3]) + 1;
	rpg->world.tp[i][4] = my_getnbr(s);
}
