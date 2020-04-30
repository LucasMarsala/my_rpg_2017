/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

void end_trainer(rpg_t *rpg)
{
	if (rpg->data.trainer[rpg->trainers.id].done == 2) {
		rpg->data.trainer[rpg->trainers.id].done = 1;
		rpg->charac.money += rpg->data.trainer[rpg->trainers.id].money;
		fight_fight_run(rpg);
	} else if (rpg->data.trainer[rpg->trainers.id].done == 1) {
		rpg->trainers.state = 4;
		rpg->data.trainer[rpg->trainers.id].done = 2;
		get_dialog(rpg,
		(char *[8]){rpg->data.trainer[rpg->trainers.id].name,
		" :\n", rpg->data.trainer[rpg->trainers.id].end, "\n",
		"Vous gagnez ",
		my_itoa(rpg->data.trainer[rpg->trainers.id].money),
		" Pokedollars !\n", NULL});
	}
}

void capa_trainer(rpg_t *rpg)
{
	int state = rpg->charac.pkmn[0].state;
	int id = rpg->charac.pkmn[0].id;
	for (int i = 0; i < 14; i++)
		if (rpg->data.pokedex[rpg->charac.pkmn[0].id].capacities[i][0]
			== rpg->charac.pkmn[0].lvl)
			rpg->charac.pkmn[0].skill[rpg->charac.pkmn[0].state][0]
			= rpg->data.pokedex[id].capacities[i][1];
	rpg->charac.pkmn[0].skill[rpg->charac.pkmn[0].state][1] =
	rpg->data.skill[rpg->charac.pkmn[0].skill[state][0]].p_p;
	rpg->charac.pkmn[0].state++;
	if (rpg->charac.pkmn[0].state > 3)
		rpg->charac.pkmn[0].state = 0;
	rpg->trainers.capa = 2;
}

void evolve_trainer(rpg_t *rpg)
{
	rpg->charac.pkmn[0].id++;
	rpg->trainers.state = 4;
	get_dialog(rpg,
	(char *[5]){rpg->data.pokedex[rpg->charac.pkmn[0].id - 1].name,
	" evolue en ", rpg->data.pokedex[rpg->charac.pkmn[0].id].name,
	" !\n", NULL});
	rpg->trainers.lvl = 2;
}

void find_capa_trainer(rpg_t *rpg)
{
	int id = rpg->charac.pkmn[0].id;
	int capa;
	for (int i = 0; i < 14; i++) {
		capa = rpg->data.pokedex[id].capacities[i][1];
		if (rpg->data.pokedex[id].capacities[i][0] ==
			rpg->charac.pkmn[0].lvl) {
			rpg->trainers.state = 4;
			get_dialog(rpg, (char *[5]){rpg->data.pokedex[id].name,
			" apprend ", rpg->data.skill[capa].name,
			" !\nIl oublie sa plus faible capacite.\n", NULL});
			rpg->trainers.capa = 1;
		}
	}
}

void capa_begin_trainer(rpg_t *rpg)
{
	if (rpg->trainers.capa == 0) {
		find_capa_trainer(rpg);
	}
}
