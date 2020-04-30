/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

void which_zone(rpg_t *rpg, int x, int y)
{
	char *tmp = my_strdup(rpg->data.zone[rpg->charac.zone].name);

	for (int i = 0; i < 33; i++) {
		if ((x > rpg->data.zone[i].pos1[0] &&
			x < rpg->data.zone[i].pos2[0]) &&
			(y > rpg->data.zone[i].pos1[1] &&
			y < rpg->data.zone[i].pos2[1]))
			rpg->charac.zone = i;
	}
	if (my_strcmp(tmp, rpg->data.zone[rpg->charac.zone].name) != 0) {
		rpg->world.chrono_localisation = 3.0;
		rpg->world.locations.p.y = -75;
		rpg->world.location.p.y = -60;
		change_text(&rpg->world.location,
			rpg->data.zone[rpg->charac.zone].name);
	}
	free(tmp);
}
