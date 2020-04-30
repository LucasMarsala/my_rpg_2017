/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void update_stats(rpg_t *rpg)
{
	int id = rpg->charac.pkmn[0].id;
	char *s = my_strdup("x ");
	change_text(&rpg->wild.name_info[0],
		rpg->data.pokedex[rpg->wild.id].name);
	change_text(&rpg->wild.name_info[1],
		rpg->data.pokedex[rpg->charac.pkmn[0].id].name);
	change_text(&rpg->wild.lvl_info[0], my_itoa(rpg->wild.level));
	change_text(&rpg->wild.lvl_info[1], my_itoa(rpg->charac.pkmn[0].lvl));
	change_text(&rpg->wild.pv_info, my_itoa(rpg->charac.pkmn[0].life));
	change_text(&rpg->wild.pvmax_info,
		my_itoa((int)((float)rpg->data.pokedex[id].life_max *
		((float)rpg->charac.pkmn[0].lvl / 100.0))));
	change_text(&rpg->wild.item[0],
		my_strcat(s, my_itoa(rpg->data.item.potion)));
	s = my_strdup("x ");
	change_text(&rpg->wild.item[1],
		my_strcat(s, my_itoa(rpg->data.item.pokeball)));
}
