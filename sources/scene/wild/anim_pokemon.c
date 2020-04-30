/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/

#include "rpg.h"

void final_anim_pkmn_wild(rpg_t *rpg)
{
	int id = rpg->charac.pkmn[0].id;
	if (rpg->wild.chrono > 0.03) {
		rpg->data.pokedex[rpg->wild.id].pkmn.r.left +=
		rpg->data.pokedex[rpg->wild.id].pkmn.r.width;
		rpg->data.pokedex[rpg->charac.pkmn[0].id].back.r.left +=
		rpg->data.pokedex[rpg->charac.pkmn[0].id].back.r.width;
		if (rpg->data.pokedex[rpg->wild.id].pkmn.r.left >
			rpg->data.pokedex[rpg->wild.id].pkmn.r.width *
			(rpg->data.pokedex[rpg->wild.id].sheet - 1))
			rpg->data.pokedex[rpg->wild.id].pkmn.r.left = 0;
		if (rpg->data.pokedex[rpg->charac.pkmn[0].id].back.r.left >
			rpg->data.pokedex[rpg->charac.pkmn[0].id].back.r.width
			* (rpg->data.pokedex[id].back_sheet - 1))
			rpg->data.pokedex[id].back.r.left = 0;
		rpg->wild.chrono -= 0.03;
	}
}

void anim_pokemon_wild(rpg_t *rpg)
{
	int id = rpg->charac.pkmn[0].id;
	rpg->data.pokedex[rpg->wild.id].pkmn.p.y = 300 -
	(rpg->data.pokedex[rpg->wild.id].pkmn.r.height * 2.5);
	sfSprite_setPosition(rpg->data.pokedex[rpg->wild.id].pkmn.s,
		rpg->data.pokedex[rpg->wild.id].pkmn.p);
	rpg->wild.chrono += rpg->wdw.elapsed;
	final_anim_pkmn_wild(rpg);
	sfSprite_setTextureRect(rpg->data.pokedex[rpg->wild.id].pkmn.s,
		rpg->data.pokedex[rpg->wild.id].pkmn.r);
	sfSprite_setTextureRect(rpg->data.pokedex[id].back.s,
		rpg->data.pokedex[rpg->charac.pkmn[0].id].back.r);
}
