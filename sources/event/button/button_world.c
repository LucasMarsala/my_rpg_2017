/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int btn_pokemon(rpg_t *rpg)
{
	rpg->world.menu = 3;
	rpg->old = rpg->scene;
	rpg->scene = 5;
	return (0);
}

int btn_pokedex(rpg_t *rpg)
{
	rpg->world.menu = 3;
	rpg->scene = 8;
	return (0);
}

int btn_bag(rpg_t *rpg)
{
	rpg->world.menu = 3;
	return (0);
}

int btn_map(rpg_t *rpg)
{
	rpg->scene = 4;
	map(rpg);
	return (0);
}

int btn_save(rpg_t *rpg)
{
	rpg->world.menu = 3;
	save_my_game(rpg);
	return (0);
}
