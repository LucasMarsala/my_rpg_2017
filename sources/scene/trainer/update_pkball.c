/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void update_pkball(rpg_t *rpg)
{
	for (int i = 0; i < 6; i++) {
		if (rpg->charac.pkmn[i].id == -1)
			rpg->trainers.pkmn_disp[i].r.left = 0;
		else if (rpg->charac.pkmn[i].life < 1)
			rpg->trainers.pkmn_disp[i].r.left = 19;
		else
			rpg->trainers.pkmn_disp[i].r.left = 38;
		sfSprite_setTextureRect(rpg->trainers.pkmn_disp[i].s,
			rpg->trainers.pkmn_disp[i].r);
	}
	for (int i = 0; i < 6; i++) {
		if (rpg->trainers.pkmn[i].id == -1)
			rpg->trainers.pkmn_adv[i].r.left = 0;
		else if (rpg->trainers.pkmn[i].life < 1)
			rpg->trainers.pkmn_adv[i].r.left = 19;
		else
			rpg->trainers.pkmn_adv[i].r.left = 38;
		sfSprite_setTextureRect(rpg->trainers.pkmn_adv[i].s,
			rpg->trainers.pkmn_adv[i].r);
	}
}
