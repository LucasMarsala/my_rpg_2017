/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void update_life(rpg_t *rpg)
{
	float nb = (float)rpg->charac.pkmn[0].life /
	((float)rpg->data.pokedex[rpg->charac.pkmn[0].id].life_max *
	((float)rpg->charac.pkmn[0].lvl / 100.0));
	rpg->wild.life_bar[1].sc.x = nb * 3.0;
	nb = (float)rpg->wild.life /
	((float)rpg->data.pokedex[rpg->wild.id].life_max *
	((float)rpg->wild.level / 100.0));
	rpg->wild.life_bar[0].sc.x = nb * 3.0;
	nb = (float)rpg->charac.pkmn[0].exp /
	((float)rpg->charac.pkmn[0].lvl * 100.0);
	rpg->wild.exp_bar.sc.x = nb * 5;
	sfSprite_setScale(rpg->wild.exp_bar.s, rpg->wild.exp_bar.sc);
	sfSprite_setScale(rpg->wild.life_bar[0].s, rpg->wild.life_bar[0].sc);
	sfSprite_setScale(rpg->wild.life_bar[1].s, rpg->wild.life_bar[1].sc);
}
