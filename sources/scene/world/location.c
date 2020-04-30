/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

void display_location(rpg_t *rpg)
{
	if (rpg->world.chrono_localisation >= 2.0 &&
		rpg->world.chrono_localisation <= 3.0) {
		rpg->world.locations.p.y += 1;
		rpg->world.location.p.y += 1;
		rpg->world.chrono_localisation -= rpg->wdw.elapsed;
	}
	if (rpg->world.chrono_localisation >= 1.0 &&
		rpg->world.chrono_localisation <= 2.0) {
		rpg->world.chrono_localisation -= rpg->wdw.elapsed;
	}
	if (rpg->world.chrono_localisation > 0.0 &&
		rpg->world.chrono_localisation < 1.0) {
		rpg->world.locations.p.y -= 1;
		rpg->world.location.p.y -= 1;
		rpg->world.chrono_localisation -= rpg->wdw.elapsed;
	}
	sfSprite_setPosition(rpg->world.locations.s, rpg->world.locations.p);
	sfText_setPosition(rpg->world.location.t, rpg->world.location.p);
}
