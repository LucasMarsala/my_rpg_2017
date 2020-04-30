/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

int event_intro(rpg_t *rpg)
{
	if (rpg->evt.event.type == sfEvtKeyPressed || rpg->evt.mouse_press == 1)
		rpg->scene = 1;
	return (0);
}
