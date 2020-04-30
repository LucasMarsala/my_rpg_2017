/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

void disp_spt(rpg_t *rpg, sfSprite *s)
{
	sfRenderWindow_drawSprite(rpg->wdw.wdw, s, 0);
}
