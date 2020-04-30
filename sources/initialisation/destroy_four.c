/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** destroy.c
*/
#include "rpg.h"

void destroy_trainers_two(rpg_t *rpg)
{
	for (int i = 0; i < 2; i++) {
		sfSprite_destroy(rpg->trainers.life_bar[i].s);
		sfTexture_destroy(rpg->trainers.life_bar[i].t);
		sfText_destroy(rpg->trainers.item[i].t);
		sfFont_destroy(rpg->trainers.item[i].f);
		sfText_destroy(rpg->trainers.name_info[i].t);
		sfFont_destroy(rpg->trainers.name_info[i].f);
		sfText_destroy(rpg->trainers.lvl_info[i].t);
		sfFont_destroy(rpg->trainers.lvl_info[i].f);
	}
	for (int i = 0; i < 3; i++) {
		sfSprite_destroy(rpg->trainers.block[i].s);
		sfTexture_destroy(rpg->trainers.block[i].t);
	}
	for (int i = 0; i < 5; i++) {
		sfSprite_destroy(rpg->trainers.ground[i].s);
		sfSprite_destroy(rpg->trainers.skill[i].s);
		sfTexture_destroy(rpg->trainers.skill[i].t);
		sfTexture_destroy(rpg->trainers.ground[i].t);
	}
}

void destroy_trainers_three(rpg_t *rpg)
{
	for (int i = 0; i < 4; i++) {
		sfSprite_destroy(rpg->trainers.utils[i].s);
		sfTexture_destroy(rpg->trainers.utils[i].t);
		sfText_destroy(rpg->trainers.name_s[i].t);
		sfFont_destroy(rpg->trainers.name_s[i].f);
		sfText_destroy(rpg->trainers.pp_s[i].t);
		sfFont_destroy(rpg->trainers.pp_s[i].f);
		sfText_destroy(rpg->trainers.ppmax_s[i].t);
		sfFont_destroy(rpg->trainers.ppmax_s[i].f);
	}
	for (int i = 0; i < 6; i++) {
		sfSprite_destroy(rpg->trainers.pkmn_disp[i].s);
		sfSprite_destroy(rpg->trainers.pkmn_adv[i].s);
		sfTexture_destroy(rpg->trainers.pkmn_adv[i].t);
		sfTexture_destroy(rpg->trainers.pkmn_disp[i].t);
		sfText_destroy(rpg->trainers.btn[i].t);
		sfFont_destroy(rpg->trainers.btn[i].f);
	}
}

void destroy_text_two(rpg_t *rpg)
{
	for (int i = 0; i < 2; i++) {
		sfText_destroy(rpg->wild.name_info[i].t);
		sfFont_destroy(rpg->wild.name_info[i].f);
		sfText_destroy(rpg->wild.lvl_info[i].t);
		sfFont_destroy(rpg->wild.lvl_info[i].f);
		sfText_destroy(rpg->wild.item[i].t);
		sfFont_destroy(rpg->wild.item[i].f);
	}
	for (int i = 0; i < 3; i++) {
		sfText_destroy(rpg->start.desc[i].t);
		sfFont_destroy(rpg->start.desc[i].f);
		sfText_destroy(rpg->start.empty[i].t);
		sfFont_destroy(rpg->start.empty[i].f);
	}
	sfText_destroy(rpg->dial.t.t);
	sfFont_destroy(rpg->dial.t.f);
	sfText_destroy(rpg->wild.pv_info.t);
	sfFont_destroy(rpg->wild.pv_info.f);
	sfText_destroy(rpg->wild.pvmax_info.t);
	sfFont_destroy(rpg->wild.pvmax_info.f);
}

void destroy_pokedex(rpg_t *rpg)
{
	for (int i = 0; i < 2; i++) {
		sfSprite_destroy(rpg->pokedex.next[i].s);
		sfTexture_destroy(rpg->pokedex.next[i].t);
	}
	for (int i = 0; i < 3; i++) {
		sfText_destroy(rpg->pokedex.desc[i].t);
		sfFont_destroy(rpg->pokedex.desc[i].f);
	}
	for (int i = 0; i < 4; i++) {
		sfText_destroy(rpg->pokedex.stats[i].t);
		sfFont_destroy(rpg->pokedex.stats[i].f);
	}
}

void destroy_begin(rpg_t *rpg)
{
	for (int i = 0; i < 2; i++) {
		sfSprite_destroy(rpg->begin.info[i].s);
		sfTexture_destroy(rpg->begin.info[i].t);
		sfSprite_destroy(rpg->begin.sexe[i].s);
		sfTexture_destroy(rpg->begin.sexe[i].t);
		sfText_destroy(rpg->begin.yn[i].t);
		sfFont_destroy(rpg->begin.yn[i].f);
	}
	for (int i = 0; i < 3; i++) {
		sfSprite_destroy(rpg->begin.charac[i].s);
		sfTexture_destroy(rpg->begin.charac[i].t);
		sfSprite_destroy(rpg->begin.pkmn[i].s);
		sfTexture_destroy(rpg->begin.pkmn[i].t);
	}
	sfSprite_destroy(rpg->begin.back.s);
	sfTexture_destroy(rpg->begin.back.t);
}
