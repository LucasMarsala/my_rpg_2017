/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int texture_start_five(rpg_t *rpg)
{
	if (new_text(&rpg->start.desc[1], FONT_PIXEL,
		rpg->data.save.stats[1], (int [3]){310, -625, 25}) == 84)
		return (84);
	sfText_setColor(rpg->start.desc[1].t, sfWhite);
	if (new_text(&rpg->start.desc[2], FONT_PIXEL,
		rpg->data.save.stats[2], (int [3]){590, -725, 25}) == 84)
		return (84);
	sfText_setColor(rpg->start.desc[2].t, sfWhite);
	if (rpg->data.save.empty[0] == 0) {
		if (new_s(&rpg->start.min[0], IMG_MIN_1,
			(int [6]){0, 840, 600, 0, 24, -690},
			(float [2]){0.275, 0.265}) == 84)
			return (84);
	}
	return (texture_start_six(rpg));
}

int texture_start_four(rpg_t *rpg)
{
	sfText_setColor(rpg->start.txt[1].t, sfColor_fromRGB(0, 0, 102));
	if (new_text(&rpg->start.txt[2], FONT_PIXEL,
		"Parametres", (int [3]){2078, 350, 35}) == 84)
		return (84);
	sfText_setColor(rpg->start.txt[2].t, sfColor_fromRGB(0, 0, 102));
	if (new_text(&rpg->start.txt[3], FONT_PIXEL,
		"Quitter le jeu", (int [3]){2023, 480, 35}) == 84)
		return (84);
	sfText_setColor(rpg->start.txt[3].t, sfColor_fromRGB(0, 0, 102));
	if (new_text(&rpg->start.txt[4], FONT_PIXEL,
		"Retour", (int [3]){630, 1000, 35}) == 84)
		return (84);
	sfText_setColor(rpg->start.txt[4].t, sfColor_fromRGB(0, 0, 102));
	if (new_text(&rpg->start.desc[0], FONT_PIXEL,
		rpg->data.save.stats[0], (int [3]){30, -525, 25}) == 84)
		return (84);
	sfText_setColor(rpg->start.desc[0].t, sfWhite);
	return (texture_start_five(rpg));
}

int texture_start_three(rpg_t *rpg)
{
	if (new_button(&rpg->start.btn[1], &btn_load_game, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 2094, 200, 3, 1.5}) == 84)
		return (84);
	if (new_button(&rpg->start.btn[2], &btn_settings, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 2044, 330, 3, 1.5}) == 84)
		return (84);
	if (new_button(&rpg->start.btn[3], &btn_quit_game, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 1994, 460, 3, 1.5}) == 84)
		return (84);
	if (new_text(&rpg->start.txt[0], FONT_PIXEL,
		"Nouvelle Partie", (int [3]){2163, 90, 35}) == 84)
		return (84);
	sfText_setColor(rpg->start.txt[0].t, sfColor_fromRGB(0, 0, 102));
	if (new_text(&rpg->start.txt[1], FONT_PIXEL,
		"Charger Partie", (int [3]){2108, 220, 35}) == 84)
		return (84);
	return (texture_start_four(rpg));
}

int texture_start_two(rpg_t *rpg)
{
	if (new_s(&rpg->start.spt[4], IMG_BCK_START,
		(int [6]){0, 840, 600, 0, 840, 0}, (float [2]){1, 1}) == 84)
		return (84);
	if (new_button(&rpg->start.slot[0], &btn_slot_1, IMG_SLOT_START,
		(float [8]){0, 166, 160, 0, 15, -700, 1.5, 1.5}) == 84)
		return (84);
	if (new_button(&rpg->start.slot[1], &btn_slot_2, IMG_SLOT_START,
		(float [8]){0, 166, 160, 0, 295, -800, 1.5, 1.5}) == 84)
		return (84);
	if (new_button(&rpg->start.slot[2], &btn_slot_3, IMG_SLOT_START,
		(float [8]){0, 166, 160, 0, 575, -900, 1.5, 1.5}) == 84)
		return (84);
	if (new_button(&rpg->start.slot[3], &btn_slot_return, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 550, 980, 3, 1.5}) == 84)
		return (84);
	if (new_button(&rpg->start.btn[0], &btn_new_game, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 2144, 70, 3, 1.5}) == 84)
		return (84);
	return (texture_start_three(rpg));
}

int texture_start(rpg_t *rpg)
{
	rpg->start.chrono = 0;
	rpg->start.chrono_key = 0;
	rpg->start.chrono_mvt = 0;
	rpg->start.menu = 0;
	if (new_s(&rpg->start.spt[0], IMG_STORM,
		(int [6]){0, 1280, 720, 0, -190, 0},
		(float [2]){0.9, 0.9}) == 84)
		return (84);
	if (new_s(&rpg->start.spt[1], IMG_ICON,
		(int [6]){0, 800, 600, 0, 40, 0}, (float [2]){1, 1}) == 84)
		return (84);
	if (new_s(&rpg->start.spt[2], IMG_PKMN,
		(int [6]){0, 66, 79, 0, 20, 200}, (float [2]){3.5, 3.5}) == 84)
		return (84);
	if (new_s(&rpg->start.spt[3], IMG_KEY,
		(int [6]){0, 535, 51, 0, 170, 440}, (float [2]){1, 1}) == 84)
		return (84);
	return (texture_start_two(rpg));
}
