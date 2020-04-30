/*
** EPITECH PROJECT, 2018
** event
** File description:
** spawn_pokemon.c
*/
#include "rpg.h"

void spawn_done(rpg_t *rpg, int zone)
{
	int id;
	int level = rpg->data.zone[zone].lvl_max - rpg->data.zone[zone].lvl_min;
	int modulo;
	id = rand() % (rpg->data.zone[zone].nb);
	rpg->wild.id = rpg->data.zone[zone].pokemon[id];
	modulo = rand() % (level + 1);
	rpg->wild.level = rpg->data.zone[zone].lvl_max - modulo;
	rpg->wild.type = rpg->data.zone[zone].type;
	rpg->wild.life = rpg->data.pokedex[rpg->wild.id].life_max *
	((float)rpg->wild.level / 100.0);
	rpg->wild.skills = skill(rpg, rpg->wild.id, rpg->wild.level);
	rpg->wild.nb_skills = 0;
}

int spawn_pokemon(rpg_t *rpg, int zone)
{
	if (rpg->data.zone[zone].nb == 0)
		return (0);
	if ((rand() % 10) < 1) {
		spawn_done(rpg, zone);
		for (int i = 0; i < 4; i++) {
			if (rpg->wild.skills[i] != -1)
				rpg->wild.nb_skills++;
		}
		sfMusic_destroy(rpg->wdw.music);
		if (set_music(rpg, MUSIC_WILD) == 84)
			return (84);
		return (1);
	} else
		return (0);
}
