/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_begin.c
*/
#include "rpg.h"

void left_anim_begin(rpg_t *rpg)
{
	rpg->data.pokedex[1].pkmn.r.left += rpg->data.pokedex[1].pkmn.r.width;
	rpg->data.pokedex[4].pkmn.r.left += rpg->data.pokedex[4].pkmn.r.width;
	rpg->data.pokedex[7].pkmn.r.left += rpg->data.pokedex[7].pkmn.r.width;
	if (rpg->data.pokedex[1].pkmn.r.left >
		rpg->data.pokedex[1].pkmn.r.width *
		(rpg->data.pokedex[1].sheet - 1))
		rpg->data.pokedex[1].pkmn.r.left = 0;
	if (rpg->data.pokedex[4].pkmn.r.left >
		rpg->data.pokedex[4].pkmn.r.width *
		(rpg->data.pokedex[4].sheet - 1))
		rpg->data.pokedex[4].pkmn.r.left = 0;
	if (rpg->data.pokedex[7].pkmn.r.left >
		rpg->data.pokedex[7].pkmn.r.width *
		(rpg->data.pokedex[7].sheet - 1))
		rpg->data.pokedex[7].pkmn.r.left = 0;
}

void anim_pkmn_begin(rpg_t *rpg)
{
	rpg->begin.chrono += rpg->wdw.elapsed;
	if (rpg->begin.chrono > 0.03) {
		left_anim_begin(rpg);
		rpg->begin.chrono -= 0.03;
	}
	sfSprite_setTextureRect(rpg->data.pokedex[1].pkmn.s,
		rpg->data.pokedex[1].pkmn.r);
	sfSprite_setTextureRect(rpg->data.pokedex[4].pkmn.s,
		rpg->data.pokedex[4].pkmn.r);
	sfSprite_setTextureRect(rpg->data.pokedex[7].pkmn.s,
		rpg->data.pokedex[7].pkmn.r);
}
