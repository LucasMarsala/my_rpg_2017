/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture.c
*/
#include "rpg.h"

int texture_pokedex_three(rpg_t *rpg)
{
	if (new_text(&rpg->pokedex.stats[2], FONT_PIXEL,
		"defensemax", (int [3]){168, 230, 30}) == 84)
		return (84);
	sfText_setColor(rpg->pokedex.stats[2].t, sfWhite);
	if (new_text(&rpg->pokedex.stats[3], FONT_PIXEL,
		"speed", (int [3]){168, 265, 30}) == 84)
		return (84);
	sfText_setColor(rpg->pokedex.stats[3].t, sfWhite);
	return (0);
}

int texture_pokedex_two(rpg_t *rpg)
{
	sfText_setColor(rpg->pokedex.desc[0].t, sfWhite);
	if (new_text(&rpg->pokedex.desc[1], FONT_PIXEL,
		"NAME", (int [3]){40, 45, 45}) == 84)
		return (84);
	sfText_setColor(rpg->pokedex.desc[1].t, sfColor_fromRGB(0, 0, 102));
	rpg->pokedex.i = 1;
	if (new_text(&rpg->pokedex.desc[2], FONT_PIXEL,
		"DESCRIPTION", (int [3]){178, 320, 30}) == 84)
		return (84);
	sfText_setColor(rpg->pokedex.desc[2].t, sfColor_fromRGB(0, 0, 102));
	if (new_text(&rpg->pokedex.stats[0], FONT_PIXEL,
		"viemax", (int [3]){168, 160, 30}) == 84)
		return (84);
	sfText_setColor(rpg->pokedex.stats[0].t, sfWhite);
	if (new_text(&rpg->pokedex.stats[1], FONT_PIXEL,
		"attaquemax", (int [3]){168, 195, 30}) == 84)
		return (84);
	sfText_setColor(rpg->pokedex.stats[1].t, sfWhite);
	return (texture_pokedex_three(rpg));
}

int texture_pokedex(rpg_t *rpg)
{
	if (new_s(&rpg->pokedex.back, IMG_BACK_PKMS,
		(int[6]){0, 320, 240, 0, -5, 0}, (float [2]){2.7, 2.625}))
		return (84);
	if (new_button(&rpg->pokedex.next[0], &prev_pokedex_btn,
		IMG_PREV, (float [8]){0, 128, 256, 0, 15, 165, 1, 1}) == 84)
		return (84);
	if (new_button(&rpg->pokedex.next[1], &next_pokedex_btn,
		IMG_NEXT, (float [8]){0, 128, 256, 0, 695, 165, 1, 1}) == 84)
		return (84);
	if (new_button(&rpg->pokedex.rtrn, &return_pokedex_btn, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 330, 500, 2, 1.5}) == 84)
		return (84);
	if (new_text(&rpg->pokedex.rtr, FONT_PIXEL,
		"Retour", (int [3]){369, 520, 34}) == 84)
		return (84);
	sfText_setColor(rpg->pokedex.rtr.t, sfWhite);
	if (new_text(&rpg->pokedex.desc[0], FONT_PIXEL,
		"ID", (int [3]){655, 5, 34}) == 84)
		return (84);
	return (texture_pokedex_two(rpg));
}
