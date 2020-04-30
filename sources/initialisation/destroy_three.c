/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** destroy.c
*/
#include "rpg.h"

void destroy_settings(rpg_t *rpg)
{
	for (int i = 0; i < 2; i++) {
		sfSprite_destroy(rpg->setting.speed[i].s);
		sfTexture_destroy(rpg->setting.speed[i].t);
	}
	for (int i = 0; i < 4; i++) {
		sfSprite_destroy(rpg->setting.snd[i].s);
		sfTexture_destroy(rpg->setting.snd[i].t);
	}
	for (int i = 0; i < 10; i++) {
		sfText_destroy(rpg->setting.txt[i].t);
		sfFont_destroy(rpg->setting.txt[i].f);
	}
	sfSprite_destroy(rpg->setting.back.s);
	sfSprite_destroy(rpg->setting.rtrn.s);
	sfTexture_destroy(rpg->setting.rtrn.t);
	sfTexture_destroy(rpg->setting.back.t);
}

void destroy_map(rpg_t *rpg)
{
	sfSprite_destroy(rpg->map.map.s);
	sfSprite_destroy(rpg->map.pos.s);
	sfTexture_destroy(rpg->map.map.t);
	sfTexture_destroy(rpg->map.pos.t);
	for (int i = 0; i < 10; i++) {
		sfSprite_destroy(rpg->map.btn[i].s);
		sfTexture_destroy(rpg->map.btn[i].t);
	}
	sfSprite_destroy(rpg->map.rtrn.s);
	sfTexture_destroy(rpg->map.rtrn.t);
	sfText_destroy(rpg->map.rtn.t);
	sfFont_destroy(rpg->map.rtn.f);
}

void destroy_wild_three(rpg_t *rpg)
{
	sfSprite_destroy(rpg->wild.exp_bar.s);
	sfSprite_destroy(rpg->wild.dialog_bar.s);
	sfSprite_destroy(rpg->wild.rtrn.s);
	sfSprite_destroy(rpg->wild.pkball.s);
	sfTexture_destroy(rpg->wild.pkball.t);
	sfTexture_destroy(rpg->wild.rtrn.t);
	sfTexture_destroy(rpg->wild.dialog_bar.t);
	sfTexture_destroy(rpg->wild.exp_bar.t);
	sfSprite_destroy(rpg->pokedex.back.s);
	sfSprite_destroy(rpg->pokedex.rtrn.s);
	sfTexture_destroy(rpg->pokedex.rtrn.t);
	sfTexture_destroy(rpg->pokedex.back.t);
	sfText_destroy(rpg->pokedex.rtr.t);
	sfFont_destroy(rpg->pokedex.rtr.f);
}

void destroy_wild_two(rpg_t *rpg)
{
	for (int i = 0; i < 6; i++) {
		sfSprite_destroy(rpg->wild.pkmn_disp[i].s);
		sfTexture_destroy(rpg->wild.pkmn_disp[i].t);
	}
	for (int i = 1; i < 80; i++) {
		sfSprite_destroy(rpg->data.pokedex[i].pkmn.s);
		sfTexture_destroy(rpg->data.pokedex[i].pkmn.t);
		sfSprite_destroy(rpg->data.pokedex[i].back.s);
		sfTexture_destroy(rpg->data.pokedex[i].back.t);
	}
}

void destroy_pokemons_two(rpg_t *rpg)
{
	sfSprite_destroy(rpg->pokemons.drop.s);
	sfTexture_destroy(rpg->pokemons.drop.t);
	sfSprite_destroy(rpg->pokemons.order.s);
	sfTexture_destroy(rpg->pokemons.order.t);
	sfSprite_destroy(rpg->pokemons.heal.s);
	sfTexture_destroy(rpg->pokemons.heal.t);
	sfSprite_destroy(rpg->pokemons.rtrn.s);
	sfTexture_destroy(rpg->pokemons.rtrn.t);
	sfText_destroy(rpg->pokemons.nbr.t);
	sfFont_destroy(rpg->pokemons.nbr.f);
	sfText_destroy(rpg->pokemons.rtr.t);
	sfFont_destroy(rpg->pokemons.rtr.f);
	sfText_destroy(rpg->pokemons.item.t);
	sfFont_destroy(rpg->pokemons.item.f);
}
