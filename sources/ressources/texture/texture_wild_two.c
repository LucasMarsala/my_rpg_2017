/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int texture_wild_ten(rpg_t *rpg)
{
	if (new_text(&rpg->wild.ppmax_s[1], FONT_PIXEL, "0",
	(int [3]){539, 482, 17}) == 84)
		return (84);
	if (new_text(&rpg->wild.ppmax_s[2], FONT_PIXEL, "0",
	(int [3]){376, 550, 17}) == 84)
		return (84);
	if (new_text(&rpg->wild.ppmax_s[3], FONT_PIXEL, "0",
	(int [3]){539, 550, 17}) == 84)
		return (84);
	if (new_text(&rpg->wild.name_info[0], FONT_PIXEL, "Name",
	(int [3]){5, 40, 30}) == 84)
		return (84);
	sfText_setColor(rpg->wild.name_info[0].t, sfBlack);
	if (new_text(&rpg->wild.name_info[1], FONT_PIXEL, "Name",
	(int [3]){510, 330, 30}) == 84)
		return (84);
	sfText_setColor(rpg->wild.name_info[1].t, sfBlack);
	return (texture_wild_eleven(rpg));
}

int texture_wild_nine(rpg_t *rpg)
{
	if (new_text(&rpg->wild.name_s[3], FONT_PIXEL, "Capacité",
	(int [3]){434, 525, 17}) == 84)
		return (84);
	if (new_text(&rpg->wild.pp_s[0], FONT_PIXEL, "0",
	(int [3]){351, 482, 17}) == 84)
		return (84);
	if (new_text(&rpg->wild.pp_s[1], FONT_PIXEL, "0",
	(int [3]){514, 482, 17}) == 84)
		return (84);
	if (new_text(&rpg->wild.pp_s[2], FONT_PIXEL, "0",
	(int [3]){351, 550, 17}) == 84)
		return (84);
	if (new_text(&rpg->wild.pp_s[3], FONT_PIXEL, "0",
	(int [3]){514, 550, 17}) == 84)
		return (84);
	if (new_text(&rpg->wild.ppmax_s[0], FONT_PIXEL, "0",
	(int [3]){376, 482, 17}) == 84)
		return (84);
	return (texture_wild_ten(rpg));
}

int texture_wild_height(rpg_t *rpg)
{
	if (new_text(&rpg->wild.item[0], FONT_PIXEL, "x 0",
	(int [3]){209, 512, 17}) == 84)
		return (84);
	sfText_setColor(rpg->wild.item[0].t, sfWhite);
	if (new_text(&rpg->wild.item[1], FONT_PIXEL, "x 0",
	(int [3]){648, 512, 17}) == 84)
		return (84);
	sfText_setColor(rpg->wild.item[1].t, sfWhite);
	if (new_text(&rpg->wild.name_s[0], FONT_PIXEL, "Capacité",
	(int [3]){271, 457, 17}) == 84)
		return (84);
	if (new_text(&rpg->wild.name_s[1], FONT_PIXEL, "Capacité",
	(int [3]){434, 457, 17}) == 84)
		return (84);
	if (new_text(&rpg->wild.name_s[2], FONT_PIXEL, "Capacité",
	(int [3]){271, 525, 17}) == 84)
		return (84);
	return (texture_wild_nine(rpg));
}

int texture_wild_seven(rpg_t *rpg)
{
	sfText_setColor(rpg->wild.btn[1].t, sfWhite);
	if (new_text(&rpg->wild.btn[2], FONT_PIXEL, "Pokeball",
	(int [3]){601, 490, 23}) == 84)
		return (84);
	sfText_setColor(rpg->wild.btn[2].t, sfWhite);
	if (new_text(&rpg->wild.btn[3], FONT_PIXEL, "Fuite",
	(int [3]){741, 477, 23}) == 84)
		return (84);
	sfText_setColor(rpg->wild.btn[3].t, sfWhite);
	if (new_text(&rpg->wild.btn[4], FONT_PIXEL, "Capacites",
	(int [3]){342, 473, 35}) == 84)
		return (84);
	sfText_setColor(rpg->wild.btn[4].t, sfWhite);
	if (new_text(&rpg->wild.btn[5], FONT_PIXEL, "Retour",
	(int [3]){155, 890, 17}) == 84)
		return (84);
	sfText_setColor(rpg->wild.btn[5].t, sfWhite);
	return (texture_wild_height(rpg));
}

int texture_wild_six(rpg_t *rpg)
{
	if (new_button(&rpg->wild.utils[0], &btn_fight_pkmn, IMG_PKMN_BTN,
		(float [8]){0, 78, 46, 0, 15, 457, 1.50, 1.50}) == 84)
		return (84);
	if (new_button(&rpg->wild.utils[1], &btn_fight_bag, IMG_RUN_BTN,
		(float [8]){0, 78, 46, 0, 140, 470, 1.50, 1.50}) == 84)
		return (84);
	if (new_button(&rpg->wild.utils[2], &btn_fight_pkball, IMG_POKEBALL_BTN,
		(float [8]){0, 78, 46, 0, 583, 470, 1.50, 1.50}) == 84)
		return (84);
	if (new_button(&rpg->wild.utils[3], &btn_fight_run, IMG_BAG_BTN,
		(float [8]){0, 78, 46, 0, 708, 457, 1.50, 1.50}) == 84)
		return (84);
	if (new_text(&rpg->wild.btn[0], FONT_PIXEL, "Pokemon",
	(int [3]){32, 477, 23}) == 84)
		return (84);
	sfText_setColor(rpg->wild.btn[0].t, sfWhite);
	if (new_text(&rpg->wild.btn[1], FONT_PIXEL, "Soin",
	(int [3]){176, 490, 23}) == 84)
		return (84);
	return (texture_wild_seven(rpg));
}
