/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void lvl_begin_lvl(rpg_t *rpg)
{
	rpg->charac.pkmn[0].id++;
	rpg->wild.state = 4;
	get_dialog(rpg,
	(char *[5]){rpg->data.pokedex[rpg->charac.pkmn[0].id - 1].name,
	" evolue en ", rpg->data.pokedex[rpg->charac.pkmn[0].id].name,
	" !\n", NULL});
	rpg->wild.lvl = 2;
}

void lvl_end_lvl(rpg_t *rpg)
{
	int id = rpg->charac.pkmn[0].id;
	int capa;
	for (int i = 0; i < 14; i++) {
		capa = rpg->data.pokedex[id].capacities[i][1];
		if (rpg->data.pokedex[rpg->charac.pkmn[0].id].capacities[i][0]
			== rpg->charac.pkmn[0].lvl) {
			rpg->wild.state = 4;
			get_dialog(rpg,
			(char *[5]){rpg->data.pokedex[id].name, " apprend ",
			rpg->data.skill[capa].name,
			" !\nIl oublie sa plus faible capacite.\n", NULL});
			rpg->wild.capa = 1;
		}
	}
}

void lvl_wild(rpg_t *rpg)
{
	if (rpg->wild.lvl == 1 && rpg->charac.pkmn[0].lvl ==
		rpg->data.pokedex[rpg->charac.pkmn[0].id].evolve) {
		lvl_begin_lvl(rpg);
	} else {
		if (rpg->wild.capa == 0) {
			lvl_end_lvl(rpg);
		}
		if (rpg->wild.capa == 2) {
			rpg->wild.lvl = 0;
			btn_fight_run(rpg);
		}
	}
}

void exp_wild(rpg_t *rpg)
{
	rpg->charac.pkmn[0].exp += rpg->wild.exp;
	rpg->wild.exp = 0;
	if (rpg->charac.pkmn[0].lvl < 100 && rpg->charac.pkmn[0].exp >=
		rpg->charac.pkmn[0].lvl * 100) {
		rpg->charac.pkmn[0].exp -= rpg->charac.pkmn[0].lvl * 100;
		rpg->wild.lvl = 1;
		rpg->wild.state = 4;
		rpg->charac.pkmn[0].lvl++;
		get_dialog(rpg,
		(char *[5]){rpg->data.pokedex[rpg->charac.pkmn[0].id].name,
		" passe au niveau ", my_itoa(rpg->charac.pkmn[0].lvl),
		" !", NULL});
	} else
		btn_fight_run(rpg);
}

void life_wild(rpg_t *rpg)
{
	rpg->wild.life = 0;
	rpg->wild.exp = xp(rpg->charac.pkmn[0].lvl, rpg->wild.level);
	rpg->wild.state = 4;
	get_dialog(rpg, (char *[7]){rpg->data.pokedex[rpg->wild.id].name,
	" n'a plus de PVs et est donc K.O !\n",
	rpg->data.pokedex[rpg->charac.pkmn[0].id].name, " gagne ",
	my_itoa(rpg->wild.exp), " exp !", NULL});
}
