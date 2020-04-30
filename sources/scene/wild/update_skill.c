/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void update_skill(rpg_t *rpg)
{
	int id;
	for (int i = 0; i < 4; i++) {
		id = rpg->charac.pkmn[0].skill[i][0];
		if (id != -1) {
			rpg->wild.skill[i].r.top = 55 *
			rpg->data.skill[id].type_attack;
			change_text(&rpg->wild.name_s[i],
				rpg->data.skill[id].name);
			change_text(&rpg->wild.pp_s[i],
				my_itoa(rpg->charac.pkmn[0].skill[i][1]));
			change_text(&rpg->wild.ppmax_s[i],
				my_itoa(rpg->data.skill[id].p_p));
		}
		sfSprite_setTextureRect(rpg->wild.skill[i].s,
			rpg->wild.skill[i].r);
	}
}
