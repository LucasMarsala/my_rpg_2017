/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void begin_fight_next(rpg_t *rpg)
{
	if (rpg->data.pokedex[rpg->wild.id].pkmn.p.x > 670 -
		((rpg->data.pokedex[rpg->wild.id].pkmn.r.width * 2.5) / 2))
		rpg->data.pokedex[rpg->wild.id].pkmn.p.x -= 400 *
		rpg->wdw.elapsed;
	if (rpg->data.pokedex[rpg->charac.pkmn[0].id].back.p.x < -50)
		rpg->data.pokedex[rpg->charac.pkmn[0].id].back.p.x +=
		400 * rpg->wdw.elapsed;
	sfSprite_setPosition(rpg->wild.ground[1].s, rpg->wild.ground[1].p);
	sfSprite_setPosition(rpg->wild.ground[2].s, rpg->wild.ground[2].p);
	sfSprite_setPosition(rpg->data.pokedex[rpg->charac.pkmn[0].id].back.s,
		rpg->data.pokedex[rpg->charac.pkmn[0].id].back.p);
}

void begin_fight(rpg_t *rpg)
{
	float nb = (float)rpg->charac.pkmn[0].life /
	(float)rpg->data.pokedex[rpg->charac.pkmn[0].id].life_max;
	rpg->wild.life_bar[1].sc.x = nb * 3;
	sfSprite_setScale(rpg->wild.life_bar[1].s, rpg->wild.life_bar[1].sc);
	nb = (float)rpg->wild.life /
	(float)rpg->data.pokedex[rpg->wild.id].life_max;
	rpg->wild.life_bar[0].sc.x = nb * 3;
	sfSprite_setScale(rpg->wild.life_bar[0].s, rpg->wild.life_bar[0].sc);
	if (rpg->wild.ground[1].p.x < -200)
		rpg->wild.ground[1].p.x += 700 * rpg->wdw.elapsed;
	if (rpg->wild.ground[2].p.x > 500)
		rpg->wild.ground[2].p.x -= 700 * rpg->wdw.elapsed;
	begin_fight_next(rpg);
}
