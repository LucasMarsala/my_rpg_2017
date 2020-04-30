/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void update_stats_trainer_next(rpg_t *rpg)
{
	char *s = my_strdup("x ");
	change_text(&rpg->trainers.item[1],
		my_strcat(s, my_itoa(rpg->data.item.pokeball)));
}

void update_stats_trainer(rpg_t *rpg)
{
	float lvl = rpg->data.pokedex[rpg->charac.pkmn[0].id].life_max;
	char *s = my_strdup("x ");
	change_text(&rpg->trainers.name_info[0],
		rpg->data.pokedex[rpg->trainers.pkmn[0].id].name);
	change_text(&rpg->trainers.name_info[1],
		rpg->data.pokedex[rpg->charac.pkmn[0].id].name);
	change_text(&rpg->trainers.lvl_info[0],
		my_itoa(rpg->trainers.pkmn[0].lvl));
	change_text(&rpg->trainers.lvl_info[1],
		my_itoa(rpg->charac.pkmn[0].lvl));
	change_text(&rpg->trainers.pv_info,
		my_itoa(rpg->charac.pkmn[0].life));
	change_text(&rpg->trainers.pvmax_info,
		my_itoa((int)(lvl * ((float)rpg->charac.pkmn[0].lvl / 100.0))));
	change_text(&rpg->trainers.item[0],
		my_strcat(s, my_itoa(rpg->data.item.potion)));
	update_stats_trainer_next(rpg);
}
