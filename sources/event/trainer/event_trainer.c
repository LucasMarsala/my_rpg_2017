/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

void my_life_trainer(rpg_t *rpg)
{
	rpg->trainers.state = 4;
	rpg->charac.pkmn[0].life = 0;
	if (count_pkmn(rpg) > 0) {
		get_dialog(rpg,
		(char *[3]){rpg->data.pokedex[rpg->charac.pkmn[0].id].name,
		" n'a plus de PVs et est donc K.O !\n", NULL});
		swap_pokemon_equiped(&rpg->charac.pkmn[0],
			&rpg->charac.pkmn[next_pkmn(rpg)]);
	} else {
		get_dialog(rpg,
		(char *[7]){rpg->data.pokedex[rpg->charac.pkmn[0].id].name,
		" n'a plus de PVs et est donc K.O !\n", rpg->charac.name,
		" n'a plus de Pokemon en forme...\nIl perd ",
		my_itoa(rpg->data.trainer[rpg->trainers.id].money),
		" Pokedollars en partant !\n", NULL});
		rpg->trainers.dead = 1;
	}
}

void event_trainer_end(rpg_t *rpg)
{
	if (rpg->charac.pkmn[0].life <= 0)
		my_life_trainer(rpg);
}

void event_trainer_exp_life(rpg_t *rpg)
{
	if (rpg->trainers.exp != 0) {
		exp_trainer(rpg);
	} else if (rpg->trainers.pkmn[0].life <= 0) {
		life_trainer(rpg);
	} else
		event_trainer_end(rpg);
}

void event_trainer_capa_lvl(rpg_t *rpg)
{
	if (rpg->trainers.capa == 1) {
		capa_trainer(rpg);
	} else if (rpg->trainers.lvl == 1 || rpg->trainers.lvl == 2) {
		lvl_trainer(rpg);
	} else
		event_trainer_exp_life(rpg);
}

int event_trainer(rpg_t *rpg)
{
	rpg->trainers.nb_skills = 0;
	if (rpg->trainers.state == 5) {
		mouse_trainer(rpg);
		if (rpg->trainers.dead == 1) {
			dead_trainer(rpg);
		} else if (rpg->data.trainer[rpg->trainers.id].done == 1
			|| rpg->data.trainer[rpg->trainers.id].done == 2) {
			end_trainer(rpg);
		} else
			event_trainer_capa_lvl(rpg);
	}
	return (0);
}
