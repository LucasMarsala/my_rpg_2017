/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int texture_pokemon_five(rpg_t *rpg)
{
	if (new_text(&rpg->pokemons.btn[0], FONT_PIXEL,
		"Mettre 1er", (int [3]){75, 470, 35}) == 84)
		return (84);
	sfText_setColor(rpg->pokemons.btn[0].t, sfColor_fromRGB(0, 0, 102));

	if (new_text(&rpg->pokemons.btn[1], FONT_PIXEL,
		"Soin", (int [3]){650, 470, 36}) == 84)
		return (84);
	sfText_setColor(rpg->pokemons.btn[1].t, sfColor_fromRGB(0, 0, 102));
	if (new_text(&rpg->pokemons.nbr, FONT_PIXEL, "1",
	(int [3]){655, 5, 34}) == 84)
		return (84);
	sfText_setColor(rpg->pokemons.nbr.t, sfWhite);
	if (new_text(&rpg->pokemons.rtr, FONT_PIXEL, "Retour",
	(int [3]){369, 470, 34}) == 84)
		return (84);
	sfText_setColor(rpg->pokemons.rtr.t, sfWhite);
	return (texture_pokemon_six(rpg));
}

int texture_pokemon_four(rpg_t *rpg)
{
	if (new_text(&rpg->pokemons.skill[0], FONT_PIXEL,
		"SKILLS", (int [3]){168, 280, 30}) == 84)
		return (84);
	sfText_setColor(rpg->pokemons.skill[0].t, sfWhite);

	if (new_text(&rpg->pokemons.skill[1], FONT_PIXEL,
		"SKILLS", (int [3]){168, 315, 30}) == 84)
		return (84);
	sfText_setColor(rpg->pokemons.skill[1].t, sfWhite);

	if (new_text(&rpg->pokemons.skill[2], FONT_PIXEL,
		"SKILLS", (int [3]){168, 350, 30}) == 84)
		return (84);
	sfText_setColor(rpg->pokemons.skill[2].t, sfWhite);
	if (new_text(&rpg->pokemons.skill[3], FONT_PIXEL,
		"SKILLS", (int [3]){168, 385, 30}) == 84)
		return (84);
	sfText_setColor(rpg->pokemons.skill[3].t, sfWhite);
	return (texture_pokemon_five(rpg));
}

int texture_pokemon_three(rpg_t *rpg)
{
	if (new_button(&rpg->pokemons.drop, &drop_btn, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 700, 550, 1.5, 0.75}) == 84)
		return (84);
	if (new_text(&rpg->pokemons.stats[0], FONT_PIXEL, "NAME",
	(int [3]){40, 45, 45}) == 84)
		return (84);
	sfText_setColor(rpg->pokemons.stats[0].t, sfColor_fromRGB(0, 0, 102));
	if (new_text(&rpg->pokemons.stats[1], FONT_PIXEL, "LEVEL",
	(int [3]){168, 105, 28}) == 84)
		return (84);
	sfText_setColor(rpg->pokemons.stats[1].t, sfWhite);
	if (new_text(&rpg->pokemons.stats[2], FONT_PIXEL, "XP",
	(int [3]){168, 140, 28}) == 84)
		return (84);
	sfText_setColor(rpg->pokemons.stats[2].t, sfWhite);
	if (new_text(&rpg->pokemons.stats[3], FONT_PIXEL,
		"PV", (int [3]){168, 175, 28}) == 84)
		return (84);
	sfText_setColor(rpg->pokemons.stats[3].t, sfWhite);
	return (texture_pokemon_four(rpg));
}

int texture_pokemon_two(rpg_t *rpg)
{
	if (new_s(&rpg->pokemons.pkball[5], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 38, 510, 550}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_button(&rpg->pokemons.next[0], &prev_btn, IMG_PREV,
		(float [8]){0, 128, 256, 0, 15, 165, 1, 1}) == 84)
		return (84);
	if (new_button(&rpg->pokemons.next[1], &next_btn, IMG_NEXT,
		(float [8]){0, 128, 256, 0, 695, 165, 1, 1}) == 84)
		return (84);
	if (new_button(&rpg->pokemons.order, &heal_btn, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 550, 450, 3, 1.5}) == 84)
		return (84);
	if (new_button(&rpg->pokemons.heal, &order_btn, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 26, 450, 3, 1.5}) == 84)
		return (84);
	if (new_button(&rpg->pokemons.rtrn, &return_btn, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 330, 450, 2, 1.5}) == 84)
		return (84);
	return (texture_pokemon_three(rpg));
}

int texture_pokemon(rpg_t *rpg)
{
	if (new_s(&rpg->pokemons.back, IMG_BACK_PKMS,
		(int[6]){0, 320, 240, 0, -5, 0}, (float [2]){2.7, 2.625}))
		return (84);
	if (new_s(&rpg->pokemons.pkball[0], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 38, 285, 550}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->pokemons.pkball[1], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 38, 330, 550}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->pokemons.pkball[2], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 38, 375, 550}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->pokemons.pkball[3], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 38, 420, 550}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->pokemons.pkball[4], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 38, 465, 550}, (float [2]){2, 2}) == 84)
		return (84);
	return (texture_pokemon_two(rpg));
}
