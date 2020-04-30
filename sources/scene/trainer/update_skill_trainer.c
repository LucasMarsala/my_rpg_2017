/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void update_skill_trainer(rpg_t *rpg)
{
	char *buf;
	int id;

	for (int i = 0; i < 4; i++) {
		id = rpg->charac.pkmn[0].skill[i][0];
		if (rpg->charac.pkmn[0].skill[i][0] != -1) {
			rpg->trainers.skill[i].r.top = 55 *
			rpg->data.skill[id].type_attack;
			change_text(&rpg->trainers.name_s[i],
			rpg->data.skill[id].name);
			buf = my_itoa(rpg->charac.pkmn[0].skill[i][1]);
			change_text(&rpg->trainers.pp_s[i], buf);
			free(buf);
			buf = my_itoa(rpg->data.skill[id].p_p);
			change_text(&rpg->trainers.ppmax_s[i], buf);
		}
		sfSprite_setTextureRect(rpg->trainers.skill[i].s,
			rpg->trainers.skill[i].r);
	}
}
