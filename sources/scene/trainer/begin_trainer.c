/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void begin_trainer(rpg_t *rpg)
{
	if (rpg->trainers.ground[1].p.x < -200)
		rpg->trainers.ground[1].p.x += 700 * rpg->wdw.elapsed;
	if (rpg->trainers.ground[2].p.x > 500)
		rpg->trainers.ground[2].p.x -= 700 * rpg->wdw.elapsed;
	if (rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.p.x > 670 -
		((rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.r.width
			* 2.5) / 2))
		rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.p.x -= 400 *
		rpg->wdw.elapsed;
	if (rpg->data.pokedex[rpg->charac.pkmn[0].id].back.p.x < -50)
		rpg->data.pokedex[rpg->charac.pkmn[0].id].back.p.x += 400 *
		rpg->wdw.elapsed;
	sfSprite_setPosition(rpg->trainers.ground[1].s,
		rpg->trainers.ground[1].p);
	sfSprite_setPosition(rpg->trainers.ground[2].s,
		rpg->trainers.ground[2].p);
	sfSprite_setPosition(rpg->data.pokedex[rpg->charac.pkmn[0].id].back.s,
		rpg->data.pokedex[rpg->charac.pkmn[0].id].back.p);
	sfSprite_setPosition(rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.s,
		rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.p);
}
