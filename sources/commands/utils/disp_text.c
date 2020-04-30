/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

void disp_txt(rpg_t *rpg, sfText *t)
{
	sfRenderWindow_drawText(rpg->wdw.wdw, t, 0);
}
