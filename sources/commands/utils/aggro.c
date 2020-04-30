/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

int is_long_trainer(int px, int py, int tx, int ty)
{
	int x = px - tx;
	int y = py - ty;

	if (x < 0)
		x *= -1;
	if (y < 0)
		y *= -1;
	return (x + y);
}

int which_trainer(rpg_t *rpg)
{
	int size = 100000;
	int len;
	int actual_id = -1;
	int tmp;
	int fd = open(DATA_TRAINER, O_RDONLY);
	char *s;

	for (len = 0; (s = get_next_line(fd)) != NULL; len++)
		free(s);
	close(fd);
	for (int i = 0; i < len; i++) {
		tmp = is_long_trainer(rpg->charac.x, rpg->charac.y,
			rpg->data.trainer[i].pos[0],
			rpg->data.trainer[i].pos[1]);
		if (tmp < size) {
			actual_id = i;
			size = tmp;
		}
	}
	return (actual_id);
}

int aggro(rpg_t *rpg)
{
	int trainer = 0;
	int y = rpg->charac.x;
	int x = rpg->charac.y;

	for (int i = 0; i < 7; i++)
		if (rpg->data.map[x][y - i] == 'H')
			trainer = 1;
	for (int i = 0; i < 7; i++)
		if (rpg->data.map[x][y + i] == 'F')
			trainer = 1;
	for (int i = 0; i < 7; i++)
		if (rpg->data.map[x - i][y] == 'T')
			trainer = 1;
	for (int i = 0; i < 7; i++)
		if (rpg->data.map[x + i][y] == 'G')
			trainer = 1;
	if (trainer == 1)
		return (which_trainer(rpg));
	else
		return (-1);
}
