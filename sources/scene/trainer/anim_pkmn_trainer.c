/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void final_anim_pkmn_trainer(rpg_t *rpg)
{
	rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.r.left +=
	rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.r.width;
	rpg->data.pokedex[rpg->charac.pkmn[0].id].back.r.left +=
	rpg->data.pokedex[rpg->charac.pkmn[0].id].back.r.width;
	if (rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.r.left >
		rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.r.width *
		(rpg->data.pokedex[rpg->trainers.pkmn[0].id].sheet - 1))
		rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.r.left = 0;
	if (rpg->data.pokedex[rpg->charac.pkmn[0].id].back.r.left >
		rpg->data.pokedex[rpg->charac.pkmn[0].id].back.r.width *
		(rpg->data.pokedex[rpg->charac.pkmn[0].id].back_sheet - 1))
		rpg->data.pokedex[rpg->charac.pkmn[0].id].back.r.left = 0;
	rpg->wild.chrono -= 0.03;
}

void anim_pkmn_trainer(rpg_t *rpg)
{
	int id = rpg->trainers.pkmn[0].id;
	rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.p.y = 300 -
	(rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.r.height * 2.5);
	sfSprite_setPosition(rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.s,
		rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.p);
	rpg->trainers.chrono += rpg->wdw.elapsed;
	if (rpg->trainers.chrono > 0.03)
		final_anim_pkmn_trainer(rpg);
	sfSprite_setTextureRect(rpg->data.pokedex[id].pkmn.s,
		rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.r);
	id = rpg->charac.pkmn[0].id;
	sfSprite_setTextureRect(rpg->data.pokedex[id].back.s,
		rpg->data.pokedex[rpg->charac.pkmn[0].id].back.r);
}
