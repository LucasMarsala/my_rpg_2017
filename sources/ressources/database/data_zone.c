/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** database.c
*/
#include "rpg.h"

char *get_lvl_and_nbpkm_zone(zone_t *zone, char *s)
{
	int i = 0;

	while (s[i] != ':')
		i++;
	s[i] = '\0';
	zone->nb = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	zone->lvl_min = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	zone->lvl_max = my_getnbr(s);
	s += (i + 1);
	return (s);
}

char *get_panel_pkmn_zone(zone_t *zone, char *s)
{
	int i = 0;
	int y = 0;

	while (s[i] != ':') {
		while (s[i] != ',') {
			i++;
		}
		s[i] = '\0';
		zone->pokemon[y] = my_getnbr(s);
		s += (i + 1);
		i = 0;
		y++;
	}
	s++;
	return (s);
}

char *get_position_pkmn_zone(zone_t *zone, char *s)
{
	int i = 0;

	while (s[i] != ':')
		i++;
	s[i] = '\0';
	zone->pos1[0] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	zone->pos1[1] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	zone->pos2[0] = my_getnbr(s);
	s += (i + 1);
	return (s);
}

void get_type_and_name_pkmn_zone(zone_t *zone, char *s)
{
	int i = 0;

	while (s[i] != ':')
		i++;
	s[i] = '\0';
	zone->pos2[1] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	zone->type = my_getnbr(s);
	s += (i + 1);
	zone->name = my_strdup(s);
}

int data_zone(rpg_t *rpg)
{
	char *s;
	int fd = open(DATA_ZONE, O_RDONLY);
	void *ptr;

	if (fd == -1)
		return (84);
	for (int i = 0; (s = get_next_line(fd)) != NULL; i++) {
		ptr = s;
		s = get_lvl_and_nbpkm_zone(&rpg->data.zone[i], s);
		s = get_panel_pkmn_zone(&rpg->data.zone[i], s);
		s = get_position_pkmn_zone(&rpg->data.zone[i], s);
		get_type_and_name_pkmn_zone(&rpg->data.zone[i], s);
		free(ptr);
	}
	rpg->charac.zone = 0;
	close(fd);
	return (0);
}
