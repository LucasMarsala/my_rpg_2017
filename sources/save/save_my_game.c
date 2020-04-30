/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

char *save_my_team(rpg_t *rpg, char *s, int i)
{
	int skill = 0;
	for (int j = 0; j < 4; j++)
		if (rpg->charac.pkmn[i].skill[j][0] != -1)
			skill++;
	s = my_strcat(s, my_itoa(skill));
	s = my_strcat(s, ":");
	for (int j = 0; j < skill; j++) {
		s = my_strcat(s, my_itoa(rpg->charac.pkmn[i].skill[j][0]));
		s = my_strcat(s, "-");
		s = my_strcat(s, my_itoa(rpg->charac.pkmn[i].skill[j][1]));
		s = my_strcat(s, ":");
	}
	return (my_strcat(s, "\n"));
}

void trainer_andpkmn_save(rpg_t *rpg, char *s, int fd, int pkmn)
{
	for (pkmn = 0; rpg->charac.pkmn[pkmn].id != -1; pkmn++);
	s = my_strcat(s, my_itoa(pkmn));
	s = my_strcat(s, "\n");
	for (int i = 0; i < pkmn; i++) {
		s = my_strcat(s, my_itoa(rpg->charac.pkmn[i].id));
		s = my_strcat(s, ":");
		s = my_strcat(s, my_itoa(rpg->charac.pkmn[i].lvl));
		s = my_strcat(s, ":");
		s = my_strcat(s, my_itoa(rpg->charac.pkmn[i].life));
		s = my_strcat(s, ":");
		s = my_strcat(s, my_itoa(rpg->charac.pkmn[i].exp));
		s = my_strcat(s, ":");
		s = save_my_team(rpg, s, i);
	}
	write(fd, s, my_strlen(s));
	free(s);
	close(fd);
}

void save_my_charac_informations(rpg_t *rpg, char *s, int fd, int pkmn)
{
	int len;
	int tmp = open(DATA_TRAINER, O_RDONLY);
	char *l;
	s = my_strcat(s, my_itoa(rpg->charac.x));
	s = my_strcat(s, ":");
	s = my_strcat(s, my_itoa(rpg->charac.y));
	s = my_strcat(s, "\n");
	s = my_strcat(s, my_itoa(rpg->charac.postmp[0]));
	s = my_strcat(s, ":");
	s = my_strcat(s, my_itoa(rpg->charac.postmp[1]));
	s = my_strcat(s, "\n");
	for (len = 0; (l = get_next_line(tmp)) != NULL; len++)
		free(l);
	close(tmp);
	for (int i = 0; i < len; i++) {
		s = my_strcat(s, my_itoa(rpg->data.trainer[i].done));
		s = my_strcat(s, ":");
	}
	s = my_strcat(s, "E\n");
	trainer_andpkmn_save(rpg, s, fd, pkmn);
}

int get_fd_save(rpg_t *rpg)
{
	int fd = -1;
	if (rpg->data.save.nb == 1) {
		fd = open("./database/save/1.kbt", O_CREAT | O_WRONLY | O_TRUNC,
		0777);
		remove("./database/save/1.png");
		screenshot(rpg, "./database/save/1.png");
	}
	if (rpg->data.save.nb == 2) {
		fd = open("./database/save/2.kbt", O_CREAT | O_WRONLY | O_TRUNC,
		0777);
		remove("./database/save/2.png");
		screenshot(rpg, "./database/save/2.png");
	}
	fd = get_fd_save_two(rpg, fd);
	if (rpg->data.save.nb < 1 || rpg->data.save.nb > 3)
		return (-1);
	return (fd);
}

void save_my_game(rpg_t *rpg)
{
	sfRenderWindow_display(rpg->wdw.wdw);
	char *s = my_strdup("\0");
	int fd = get_fd_save(rpg);
	if (fd == -1)
		return;
	s = my_strcat(s, rpg->charac.name);
	s = my_strcat(s, "\n");
	s = my_strcat(s, my_itoa(rpg->charac.sexe));
	s = my_strcat(s, "\n");
	s = my_strcat(s, my_itoa(rpg->charac.discover_pkmn));
	s = my_strcat(s, "\n");
	s = my_strcat(s, my_ftoa(rpg->charac.time));
	s = my_strcat(s, "\n");
	s = my_strcat(s, my_itoa(rpg->charac.money));
	s = my_strcat(s, "\n");
	s = my_strcat(s, my_itoa(rpg->data.item.potion));
	s = my_strcat(s, ":");
	s = my_strcat(s, my_itoa(rpg->data.item.pokeball));
	s = my_strcat(s, "\n");
	save_my_charac_informations(rpg, s, fd, 0);
}
