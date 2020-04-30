/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

int texture_setting_four(rpg_t *rpg)
{
	sfText_setColor(rpg->setting.txt[7].t, sfWhite);
	if (new_text(&rpg->setting.txt[8], FONT_PIXEL, "Retour",
		(int [3]){535, 500, 34}) == 84)
		return (84);
	sfText_setColor(rpg->setting.txt[8].t, sfColor_fromRGB(0, 0, 102));
	if (new_text(&rpg->setting.txt[9], FONT_PIXEL, "Options",
		(int [3]){334, 30, 55}) == 84)
		return (84);
	sfText_setColor(rpg->setting.txt[9].t, sfColor_fromRGB(0, 0, 102));
	if (new_button(&rpg->setting.quit, &btn_setting_quit, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 152, 480, 2, 1.5}) == 84)
		return (84);
	if (new_text(&rpg->setting.quitt, FONT_PIXEL, "Quitter",
		(int [3]){192, 500, 34}) == 84)
		return (84);
	sfText_setColor(rpg->setting.quitt.t, sfColor_fromRGB(0, 0, 102));
	return (0);
}

int texture_setting_three(rpg_t *rpg)
{
	if (new_text(&rpg->setting.txt[3], FONT_PIXEL, "100%",
	(int [3]){574, 380, 34}) == 84)
		return (84);
	sfText_setColor(rpg->setting.txt[3].t, sfWhite);
	if (new_text(&rpg->setting.txt[4], FONT_PIXEL, "Volume:",
	(int [3]){150, 310, 39}) == 84)
		return (84);
	sfText_setColor(rpg->setting.txt[4].t, sfColor_fromRGB(0, 0, 102));
	if (new_text(&rpg->setting.txt[5], FONT_PIXEL, "Vitesse du texte:",
	(int [3]){150, 110, 39}) == 84)
		return (84);
	sfText_setColor(rpg->setting.txt[5].t, sfColor_fromRGB(0, 0, 102));
	if (new_text(&rpg->setting.txt[6], FONT_PIXEL, "Lent",
	(int [3]){282, 180, 34}) == 84)
		return (84);
	sfText_setColor(rpg->setting.txt[6].t, sfWhite);
	if (new_text(&rpg->setting.txt[7], FONT_PIXEL, "Rapide",
	(int [3]){468, 180, 34}) == 84)
		return (84);
	return (texture_setting_four(rpg));
}

int texture_setting_two(rpg_t *rpg)
{
	if (new_button(&rpg->setting.speed[1], &btn_snd_six, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 450, 160, 1.5, 1.5}) == 84)
		return (84);
	if (new_button(&rpg->setting.rtrn, &btn_setting_rtrn, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 495, 480, 2, 1.5}) == 84)
		return (84);
	if (new_text(&rpg->setting.txt[0], FONT_PIXEL, "0%",
	(int [3]){181, 380, 34}) == 84)
		return (84);
	sfText_setColor(rpg->setting.txt[0].t, sfWhite);
	if (new_text(&rpg->setting.txt[1], FONT_PIXEL, "25%",
	(int [3]){314, 380, 34}) == 84)
		return (84);
	sfText_setColor(rpg->setting.txt[1].t, sfWhite);
	if (new_text(&rpg->setting.txt[2], FONT_PIXEL, "50%",
	(int [3]){447, 380, 34}) == 84)
		return (84);
	sfText_setColor(rpg->setting.txt[2].t, sfWhite);
	return (texture_setting_three(rpg));
}

int texture_setting(rpg_t *rpg)
{
	if (new_s(&rpg->setting.back, IMG_BACK_SETTINGS,
		(int [6]){0, 400, 400, 0, 110, 0}, (float [2]){1.5, 1.5}) == 84)
		return (84);
	if (new_button(&rpg->setting.snd[0], &btn_snd_one, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 137.5, 360, 1.5, 1.5}) == 84)
		return (84);
	if (new_button(&rpg->setting.snd[1], &btn_snd_two, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 275, 360, 1.5, 1.5}) == 84)
		return (84);
	if (new_button(&rpg->setting.snd[2], &btn_snd_three, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 412.5, 360, 1.5, 1.5}) == 84)
		return (84);
	if (new_button(&rpg->setting.snd[3], &btn_snd_four, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 550, 360, 1.5, 1.5}) == 84)
		return (84);
	if (new_button(&rpg->setting.speed[0], &btn_snd_five, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 250, 160, 1.5, 1.5}) == 84)
		return (84);
	return (texture_setting_two(rpg));
}
