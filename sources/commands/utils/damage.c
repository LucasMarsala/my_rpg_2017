/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int damage_resis(rpg_t *rpg, int *i, float damage)
{
	if (rpg->data.skill[i[4]].type_attack ==
		rpg->data.pokedex[i[0]].first_type ||
		rpg->data.skill[i[4]].type_attack ==
		rpg->data.pokedex[i[0]].second_type)
		damage *= 1.5;
	rpg->wild.resis = resistance(rpg, rpg->data.skill[i[4]].type_attack,
		rpg->data.pokedex[i[1]].first_type);
	damage *= resistance(rpg, rpg->data.skill[i[4]].type_attack,
		rpg->data.pokedex[i[1]].first_type);
	if (rpg->data.pokedex[i[1]].second_type != -1) {
		rpg->wild.resis *= resistance(rpg,
			rpg->data.skill[i[4]].type_attack,
			rpg->data.pokedex[i[1]].second_type);
		damage *= resistance(rpg, rpg->data.skill[i[4]].type_attack,
			rpg->data.pokedex[i[1]].second_type);
	}
	return (damage);
}

int damage(rpg_t *rpg, int *i)
{
	float damage = (float)i[2] * 2 / 5;
	damage += 2.0;
	damage *= (float)rpg->data.skill[i[4]].power_attack;
	damage *= (float)rpg->data.pokedex[i[0]].attk * ((float)i[2] / 100.0);
	damage /= (float)rpg->data.pokedex[i[1]].def * ((float)i[3] / 100.0);
	damage += 2.0;
	damage *= (float)(rand() % 38) + 217.0;
	damage /= 100.0;
	damage = damage_resis(rpg, i, damage);
	return ((int)damage / 100);
}
