/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** start.c
*/
#include "rpg.h"

void transform_time(rpg_t *rpg, int i, int *times)
{
	char *buf;
	buf = my_itoa(times[0]);
	rpg->data.save.stats[i] = my_strcat(rpg->data.save.stats[i], buf);
	free(buf);
	rpg->data.save.stats[i] = my_strcat(rpg->data.save.stats[i], ":");
	if (my_intlen(times[1]) == 1)
		rpg->data.save.stats[i] = my_strcat(rpg->data.save.stats[i],
			"0");
	buf = my_itoa(times[1]);
	rpg->data.save.stats[i] = my_strcat(rpg->data.save.stats[i], buf);
	free(buf);
	rpg->data.save.stats[i] = my_strcat(rpg->data.save.stats[i], ":");
	if (my_intlen(times[2]) == 1)
		rpg->data.save.stats[i] = my_strcat(rpg->data.save.stats[i],
			"0");
	buf = my_itoa(times[2]);
	rpg->data.save.stats[i] = my_strcat(rpg->data.save.stats[i], buf);
	free(buf);
}

void get_info_save(rpg_t *rpg, int fd, int i, int seconds)
{
	int minutes = 0;
	int hours = 0;
	char *s;
	rpg->data.save.empty[i] = 0;
	rpg->data.save.stats[i] = get_next_line(fd);
	free(get_next_line(fd));
	rpg->data.save.stats[i] = my_strcat(rpg->data.save.stats[i],
		" | Pkmn ");
	s = get_next_line(fd);
	rpg->data.save.stats[i] = my_strcat(rpg->data.save.stats[i], s);
	rpg->data.save.stats[i] = my_strcat(rpg->data.save.stats[i],
		"\nTemps ");
	s = get_next_line(fd);
	seconds = my_getnbr(s);
	minutes = seconds / 60;
	seconds = seconds % 60;
	hours = minutes / 60;
	minutes = minutes % 60;
	transform_time(rpg, i, (int [3]){hours, minutes, seconds});
}

void is_save(rpg_t *rpg)
{
	int fd;
	fd = open("./database/save/1.kbt", O_RDONLY);
	if (fd != -1) {
		get_info_save(rpg, fd, 0, 0);
		close(fd);
	} else
		rpg->data.save.empty[0] = 1;
	fd = open("./database/save/2.kbt", O_RDONLY);
	if (fd != -1) {
		get_info_save(rpg, fd, 1, 0);
		close(fd);
	} else
		rpg->data.save.empty[1] = 1;
	fd = open("./database/save/3.kbt", O_RDONLY);
	if (fd != -1) {
		get_info_save(rpg, fd, 2, 0);
		close(fd);
	} else
		rpg->data.save.empty[2] = 1;
}

int save(rpg_t *rpg)
{
	rpg->data.save.stats = malloc(sizeof(char *) * 3);
	is_save(rpg);
	for (int i = 0; i < 3; i++) {
		if (rpg->data.save.empty[i] == 1)
			rpg->data.save.stats[i] = my_strdup("\0");
	}
	return (0);
}
