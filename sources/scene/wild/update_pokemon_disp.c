/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void update_pokemon_disp(rpg_t *rpg)
{
	for (int i = 0; i < 6; i++) {
		if (rpg->charac.pkmn[i].id == -1)
			rpg->wild.pkmn_disp[i].r.left = 0;
		else if (rpg->charac.pkmn[i].life < 1)
			rpg->wild.pkmn_disp[i].r.left = 19;
		else
			rpg->wild.pkmn_disp[i].r.left = 38;
		sfSprite_setTextureRect(rpg->wild.pkmn_disp[i].s,
			rpg->wild.pkmn_disp[i].r);
	}
}
