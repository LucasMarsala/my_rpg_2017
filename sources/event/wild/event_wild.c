/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void end_fight_wild(rpg_t *rpg)
{
	rpg->wild.state = 4;
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
		my_itoa(rpg->wild.level), " Pokedollars en partant !\n", NULL});
		rpg->wild.dead = 1;
	}
}

void event_wild_capt_end(rpg_t *rpg)
{
	if (rpg->wild.capt == 3) {
		btn_fight_run(rpg);
	} else if (rpg->charac.pkmn[0].life <= 0) {
		end_fight_wild(rpg);
	}
}

void event_wild_life_capt(rpg_t *rpg)
{
	if (rpg->wild.life <= 0) {
		life_wild(rpg);
	} else if (rpg->wild.capt == 2) {
		rpg->wild.capt = 3;
		btn_fight_run(rpg);
	} else
		event_wild_capt_end(rpg);
}

void event_wild_lvl_exp(rpg_t *rpg)
{
	if (rpg->wild.lvl == 1 || rpg->wild.lvl == 2) {
		lvl_wild(rpg);
	} else if (rpg->wild.exp != 0) {
		exp_wild(rpg);
	} else
		event_wild_life_capt(rpg);
}

int event_wild(rpg_t *rpg)
{
	if (rpg->wild.state == 5) {
		mouse_wild(rpg);
		if (rpg->wild.dead == 1) {
			dead_wild(rpg);
		} else if (rpg->wild.capa == 1) {
			capa_wild(rpg);
		} else
			event_wild_lvl_exp(rpg);
	}
	return (0);
}
