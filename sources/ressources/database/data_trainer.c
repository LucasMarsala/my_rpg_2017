/*
** EPITECH PROJECT, 2018
** event
** File description:
** spawn_pokemon.c
*/
#include "rpg.h"

char *parse_trainer_pkmn(rpg_t *rpg, int i, int j, char *s)
{
	rpg->data.trainer[i].pkmn[j][0] = my_getnbr(s);
	s += my_intlen(rpg->data.trainer[i].pkmn[j][0]) + 1;
	rpg->data.trainer[i].pkmn[j][1] = my_getnbr(s);
	s += my_intlen(rpg->data.trainer[i].pkmn[j][1]) + 1;
	return (s);
}

void parse_trainer_string(rpg_t *rpg, int i, char *s)
{
	char *tmp = my_strdup("\0");
	while (s[0] != ':') {
		tmp = my_charcat(tmp, s[0]);
		s++;
	}
	s++;
	rpg->data.trainer[i].end = my_strdup(tmp);
	free(tmp);
	rpg->data.trainer[i].nb = my_getnbr(s);
	s += my_intlen(rpg->data.trainer[i].nb) + 1;
	for (int j = 0; j < rpg->data.trainer[i].nb; j++)
		s = parse_trainer_pkmn(rpg, i, j, s);
	for (int j = rpg->data.trainer[i].nb; j < 6; j++) {
		rpg->data.trainer[i].pkmn[j][0] = -1;
		rpg->data.trainer[i].pkmn[j][1] = -1;
	}
	rpg->data.trainer[i].money = my_getnbr(s);
}

void parse_trainer(rpg_t *rpg, int i, char *s)
{
	char *tmp = my_strdup("\0");
	while (s[0] != ':') {
		tmp = my_charcat(tmp, s[0]);
		s++;
	}
	s++;
	rpg->data.trainer[i].name = my_strdup(tmp);
	free(tmp);
	tmp = my_strdup("\0");
	while (s[0] != ':') {
		tmp = my_charcat(tmp, s[0]);
		s++;
	}
	s++;
	rpg->data.trainer[i].begin = my_strdup(tmp);
	free(tmp);
	parse_trainer_string(rpg, i, s);
}

int data_trainer(rpg_t *rpg)
{
	int fd = open(DATA_TRAINER, O_RDONLY);
	int len;
	char *str;
	void *ptr;
	char *s;
	if (fd == -1)
		return (84);
	for (len = 0; (s = get_next_line(fd)) != NULL; len++)
		free(s);
	rpg->data.trainer = malloc(sizeof(trainer_t) * len);
	close(fd);
	fd = open(DATA_TRAINER, O_RDONLY);
	for (int i = 0; i < len; i++) {
		str = get_next_line(fd);
		ptr = str;
		parse_trainer(rpg, i, str);
		free(ptr);
	}
	close(fd);
	return (0);
}
