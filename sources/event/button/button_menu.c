/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

int btn_new_game(rpg_t *rpg)
{
	rpg->start.load_or_new = 0;
	rpg->start.menu = 3;
	return (0);
}

int btn_load_game(rpg_t *rpg)
{
	rpg->start.load_or_new = 1;
	rpg->start.menu = 5;
	return (0);
}

int btn_settings(rpg_t *rpg)
{
	rpg->setting.lstscene = rpg->scene;
	rpg->scene = 7;
	return (0);
}

int btn_quit_game(rpg_t *rpg)
{
	rpg->quit = 1;
	return (0);
}
