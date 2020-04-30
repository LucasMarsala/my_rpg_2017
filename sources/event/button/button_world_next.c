/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int btn_setting(rpg_t *rpg)
{
	rpg->setting.lstscene = rpg->scene;
	rpg->scene = 7;
	return (0);
}
