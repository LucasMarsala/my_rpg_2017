/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** destroy.c
*/
#include "rpg.h"

void destroy_trainers(rpg_t *rpg)
{
	destroy_trainers_two(rpg);
	destroy_trainers_three(rpg);
	sfSprite_destroy(rpg->trainers.exp_bar.s);
	sfSprite_destroy(rpg->trainers.dialog_bar.s);
	sfSprite_destroy(rpg->trainers.rtrn.s);
	sfTexture_destroy(rpg->trainers.rtrn.t);
	sfTexture_destroy(rpg->trainers.dialog_bar.t);
	sfTexture_destroy(rpg->trainers.exp_bar.t);
	sfText_destroy(rpg->trainers.pv_info.t);
	sfFont_destroy(rpg->trainers.pv_info.f);
	sfText_destroy(rpg->trainers.pvmax_info.t);
	sfFont_destroy(rpg->trainers.pvmax_info.f);
	free(rpg->dial.dial_tmp);
	free(rpg->wdw.name);
}

void destroy_pokemons(rpg_t *rpg)
{
	sfSprite_destroy(rpg->pokemons.back.s);
	sfTexture_destroy(rpg->pokemons.back.t);
	for (int i = 0; i < 2; i++) {
		sfSprite_destroy(rpg->pokemons.next[i].s);
		sfTexture_destroy(rpg->pokemons.next[i].t);
		sfText_destroy(rpg->pokemons.btn[i].t);
		sfFont_destroy(rpg->pokemons.btn[i].f);
	}
	for (int i = 0; i < 4; i++) {
		sfText_destroy(rpg->pokemons.stats[i].t);
		sfFont_destroy(rpg->pokemons.stats[i].f);
		sfText_destroy(rpg->pokemons.skill[i].t);
		sfFont_destroy(rpg->pokemons.skill[i].f);
	}
	for (int i = 0; i < 6; i++) {
		sfSprite_destroy(rpg->pokemons.pkball[i].s);
		sfTexture_destroy(rpg->pokemons.pkball[i].t);
	}
	destroy_pokemons_two(rpg);

}

void destroy_wild(rpg_t *rpg)
{
	for (int i = 0; i < 2; i++) {
		sfSprite_destroy(rpg->wild.life_bar[i].s);
		sfTexture_destroy(rpg->wild.life_bar[i].t);
	}
	for (int i = 0; i < 3; i++) {
		sfSprite_destroy(rpg->wild.block[i].s);
		sfTexture_destroy(rpg->wild.block[i].t);
	}
	for (int i = 0; i < 4; i++) {
		sfSprite_destroy(rpg->wild.utils[i].s);
		sfTexture_destroy(rpg->wild.utils[i].t);
	}
	for (int i = 0; i < 5; i++) {
		sfSprite_destroy(rpg->wild.ground[i].s);
		sfSprite_destroy(rpg->wild.skill[i].s);
		sfTexture_destroy(rpg->wild.ground[i].t);
		sfTexture_destroy(rpg->wild.skill[i].t);
	}
	destroy_wild_two(rpg);
	destroy_wild_three(rpg);
}

void destroy_text(rpg_t *rpg)
{
	for (int i = 0; i < 4; i++) {
		sfText_destroy(rpg->wild.name_s[i].t);
		sfFont_destroy(rpg->wild.name_s[i].f);
		sfText_destroy(rpg->wild.pp_s[i].t);
		sfFont_destroy(rpg->wild.pp_s[i].f);
		sfText_destroy(rpg->wild.ppmax_s[i].t);
		sfFont_destroy(rpg->wild.ppmax_s[i].f);
	}
	for (int i = 0; i < 5; i++) {
		sfText_destroy(rpg->start.txt[i].t);
		sfFont_destroy(rpg->start.txt[i].f);
	}
	for (int i = 0; i < 6; i++) {
		sfText_destroy(rpg->wild.btn[i].t);
		sfFont_destroy(rpg->wild.btn[i].f);
	}
	sfText_destroy(rpg->world.location.t);
	sfFont_destroy(rpg->world.location.f);
	destroy_text_two(rpg);
}

void free_strings(rpg_t *rpg)
{
	free(rpg->charac.name);
	for (int i = 0; i < 111; i++) {
		if (i < 33)
			free(rpg->data.zone[i].name);
		if (i > 0 && i < 80) {
			free(rpg->data.pokedex[i].name);
			free(rpg->data.pokedex[i].comment);
		}
		free(rpg->data.skill[i].name);
		free(rpg->data.skill[i].desc);
	}
	for (int i = 0; i < 3; i++)
		free(rpg->data.save.stats[i]);
	free(rpg->data.save.stats);
	for (int i = 0; i < 325; i++)
		free(rpg->data.map[i]);
	free(rpg->data.map);
	free(rpg->dial.dial);
	if (rpg->dial.dial_cpy == NULL)
		free(rpg->dial.dial_cpy);
}
