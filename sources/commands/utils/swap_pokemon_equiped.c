/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

void swap_pokemon_equiped(pkmn_t *pkmn1, pkmn_t *pkmn2)
{
	int tmp = pkmn1->id;
	pkmn1->id = pkmn2->id;
	pkmn2->id = tmp;
	tmp = pkmn1->lvl;
	pkmn1->lvl = pkmn2->lvl;
	pkmn2->lvl = tmp;
	tmp = pkmn1->life;
	pkmn1->life = pkmn2->life;
	pkmn2->life = tmp;
	tmp = pkmn1->exp;
	pkmn1->exp = pkmn2->exp;
	pkmn2->exp = tmp;
	for (int i = 0; i < 4; i++) {
		tmp = pkmn1->skill[i][0];
		pkmn1->skill[i][0] = pkmn2->skill[i][0];
		pkmn2->skill[i][0] = tmp;
		tmp = pkmn1->skill[i][1];
		pkmn1->skill[i][1] = pkmn2->skill[i][1];
		pkmn2->skill[i][1] = tmp;
	}
}

void swap_pokemon_adv(pkmn_t *pkmn1, pkmn_t *pkmn2)
{
	int tmp = pkmn1->id;
	pkmn1->id = pkmn2->id;
	pkmn2->id = tmp;
	tmp = pkmn1->lvl;
	pkmn1->lvl = pkmn2->lvl;
	pkmn2->lvl = tmp;
	tmp = pkmn1->life;
	pkmn1->life = pkmn2->life;
	pkmn2->life = tmp;
	for (int i = 0; i < 4; i++) {
		tmp = pkmn1->skills[i];
		pkmn1->skills[i] = pkmn2->skills[i];
		pkmn2->skills[i] = tmp;
		tmp = pkmn1->skills[i];
		pkmn1->skills[i] = pkmn2->skills[i];
		pkmn2->skills[i] = tmp;
	}
}

int count_adv(rpg_t *rpg)
{
	int len = 0;
	for (int i = 0; i < 6; i++) {
		if (rpg->trainers.pkmn[i].id != -1 &&
			rpg->trainers.pkmn[i].life != 0)
			len++;
	}
	return (len);
}

int next_adv(rpg_t *rpg)
{
	for (int i = 0; i < 6; i++) {
		if (rpg->trainers.pkmn[i].id != -1 &&
			rpg->trainers.pkmn[i].life != 0)
			return (i);
	}
	return (-1);
}
