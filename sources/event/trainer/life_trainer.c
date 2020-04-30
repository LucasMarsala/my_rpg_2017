/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

void capa_end_trainer(rpg_t *rpg)
{
	int id = rpg->trainers.pkmn[0].id;
	if (rpg->trainers.capa == 2) {
		rpg->trainers.lvl = 0;
		if (count_adv(rpg) > 0) {
			swap_pokemon_adv(&rpg->trainers.pkmn[0],
				&rpg->trainers.pkmn[next_adv(rpg)]);
			rpg->data.pokedex[id].pkmn.p.x = 1300 +
			(rpg->data.pokedex[id].pkmn.r.width / 2);
			sfSprite_setPosition(rpg->data.pokedex[id].pkmn.s,
				rpg->data.pokedex[id].pkmn.p);
		} else
			rpg->data.trainer[rpg->trainers.id].done = 1;
	}
}

void lvl_trainer(rpg_t *rpg)
{
	if (rpg->trainers.lvl == 1 && rpg->charac.pkmn[0].lvl ==
		rpg->data.pokedex[rpg->charac.pkmn[0].id].evolve) {
		evolve_trainer(rpg);
	} else {
		capa_begin_trainer(rpg);
		capa_end_trainer(rpg);
	}
}

void swap_adv_trainer(rpg_t *rpg)
{
	swap_pokemon_adv(&rpg->trainers.pkmn[0],
		&rpg->trainers.pkmn[next_adv(rpg)]);
	rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.p.x = 1300 +
	(rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.r.width / 2);
	sfSprite_setPosition(rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.s,
		rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.p);
}

void exp_trainer(rpg_t *rpg)
{
	rpg->charac.pkmn[0].exp += rpg->trainers.exp;
	rpg->trainers.exp = 0;
	if (rpg->charac.pkmn[0].lvl < 100 && rpg->charac.pkmn[0].exp >=
		rpg->charac.pkmn[0].lvl * 100) {
		rpg->charac.pkmn[0].exp -= rpg->charac.pkmn[0].lvl * 100;
		rpg->trainers.lvl = 1;
		rpg->trainers.state = 4;
		rpg->charac.pkmn[0].lvl++;
		get_dialog(rpg, (char *[5]){
		rpg->data.pokedex[rpg->charac.pkmn[0].id].name,
		" passe au niveau ", my_itoa(rpg->charac.pkmn[0].lvl),
		" !", NULL});
	} else if (count_adv(rpg) > 0) {
		swap_adv_trainer(rpg);
	} else
		rpg->data.trainer[rpg->trainers.id].done = 1;
}

void life_trainer(rpg_t *rpg)
{
	rpg->trainers.pkmn[0].life = 0;
	rpg->trainers.exp = xp(rpg->charac.pkmn[0].lvl,
		rpg->trainers.pkmn[0].lvl);
	rpg->trainers.state = 4;
	get_dialog(rpg,
	(char *[7]){rpg->data.pokedex[rpg->trainers.pkmn[0].id].name,
	" n'a plus de PVs et est donc K.O !\n",
	rpg->data.pokedex[rpg->charac.pkmn[0].id].name, " gagne ",
	my_itoa(rpg->trainers.exp), " exp !", NULL});
}
