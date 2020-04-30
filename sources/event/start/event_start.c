/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

int event_start(rpg_t *rpg)
{
	if ((rpg->evt.event.type == sfEvtKeyPressed ||
	rpg->evt.mouse_press == 1) && (rpg->start.menu == 0)) {
		sfMusic_destroy(rpg->wdw.music);
		if (set_music(rpg, MUSIC_START) == 84)
			return (84);
		rpg->start.menu = 1;
	}
	return (0);
}
