/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void get_resis(rpg_t *rpg, char *s, int i)
{
	rpg->data.resis.resis[i][0] = (float)my_getnbr(s);
	s += my_intlen((int)rpg->data.resis.resis[i][0]) + 1;
	rpg->data.resis.resis[i][1] = (float)my_getnbr(s);
	s += my_intlen((int)rpg->data.resis.resis[i][1]) + 1;
	rpg->data.resis.resis[i][2] = (float)my_getnbr(s);
	if (s[0] == '0' && s[1] != '\0')
		rpg->data.resis.resis[i][2] = 0.5;
}

int data_resistance(rpg_t *rpg)
{
	char *s;
	int i = 0;
	int fd = open(DATA_RESIS, O_RDONLY);
	void *ptr;
	if (fd == -1)
		return (84);
	while ((s = get_next_line(fd)) != NULL) {
		ptr = s;
		get_resis(rpg, s, i);
		i++;
		free(ptr);
	}
	close(fd);
	return (0);
}
