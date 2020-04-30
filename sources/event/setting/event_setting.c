/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

int btn_setting_rtrn(rpg_t *rpg)
{
	rpg->scene = rpg->setting.lstscene;
	return (0);
}

int btn_setting_quit(rpg_t *rpg)
{
	rpg->quit = 1;
	return (0);
}

int btn_snd_six(rpg_t *rpg)
{
	rpg->dial.speed = 0.015;
	return (0);
}

int btn_snd_five(rpg_t *rpg)
{
	rpg->dial.speed = 0.03;
	return (0);
}
