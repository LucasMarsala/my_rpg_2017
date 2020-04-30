/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture.c
*/
#include "rpg.h"

int prev_pokedex_btn(rpg_t *rpg)
{
	if (rpg->pokedex.i == 1)
		rpg->pokedex.i = 66;
	else
		rpg->pokedex.i--;
	return (0);
}

int next_pokedex_btn(rpg_t *rpg)
{
	if (rpg->pokedex.i == 66)
		rpg->pokedex.i = 1;
	else
		rpg->pokedex.i++;
	return (0);
}

int return_pokedex_btn(rpg_t *rpg)
{
	rpg->scene = 2;
	return (0);
}

int event_pokedex(rpg_t *rpg)
{
	(void)rpg;
	return (0);
}
