/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void update_life_trainer(rpg_t *rpg)
{
	float nb = (float)rpg->charac.pkmn[0].life /
	((float)rpg->data.pokedex[rpg->charac.pkmn[0].id].life_max *
	((float)rpg->charac.pkmn[0].lvl / 100.0));
	rpg->trainers.life_bar[1].sc.x = nb * 3.0;
	nb = (float)rpg->trainers.pkmn[0].life /
	((float)rpg->data.pokedex[rpg->trainers.pkmn[0].id].life_max *
	((float)rpg->trainers.pkmn[0].lvl / 100.0));
	rpg->trainers.life_bar[0].sc.x = nb * 3.0;
	nb = (float)rpg->charac.pkmn[0].exp /
	((float)rpg->charac.pkmn[0].lvl * 100.0);
	rpg->trainers.exp_bar.sc.x = nb * 5;
	sfSprite_setScale(rpg->trainers.exp_bar.s, rpg->trainers.exp_bar.sc);
	sfSprite_setScale(rpg->trainers.life_bar[0].s,
		rpg->trainers.life_bar[0].sc);
	sfSprite_setScale(rpg->trainers.life_bar[1].s,
		rpg->trainers.life_bar[1].sc);
}
