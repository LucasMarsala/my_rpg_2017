/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

int texture_trainer_ten(rpg_t *rpg)
{
	if (new_text(&rpg->trainers.pp_s[2], FONT_PIXEL, "0",
	(int [3]){351, 550, 17}) == 84)
		return (84);
	if (new_text(&rpg->trainers.pp_s[3], FONT_PIXEL, "0",
	(int [3]){514, 550, 17}) == 84)
		return (84);
	if (new_text(&rpg->trainers.ppmax_s[0], FONT_PIXEL, "0",
	(int [3]){376, 482, 17}) == 84)
		return (84);
	if (new_text(&rpg->trainers.ppmax_s[1], FONT_PIXEL, "0",
	(int [3]){539, 482, 17}) == 84)
		return (84);
	if (new_text(&rpg->trainers.ppmax_s[2], FONT_PIXEL, "0",
	(int [3]){376, 550, 17}) == 84)
		return (84);
	if (new_text(&rpg->trainers.ppmax_s[3], FONT_PIXEL, "0",
	(int [3]){539, 550, 17}) == 84)
		return (84);
	return (texture_trainer_eleven(rpg));
}

int texture_trainer_nine(rpg_t *rpg)
{
	sfText_setColor(rpg->trainers.item[1].t, sfWhite);
	if (new_text(&rpg->trainers.name_s[0], FONT_PIXEL, "Capacité",
	(int [3]){271, 457, 17}) == 84)
		return (84);
	if (new_text(&rpg->trainers.name_s[1], FONT_PIXEL, "Capacité",
	(int [3]){434, 457, 17}) == 84)
		return (84);
	if (new_text(&rpg->trainers.name_s[2], FONT_PIXEL, "Capacité",
	(int [3]){271, 525, 17}) == 84)
		return (84);
	if (new_text(&rpg->trainers.name_s[3], FONT_PIXEL, "Capacité",
	(int [3]){434, 525, 17}) == 84)
		return (84);
	if (new_text(&rpg->trainers.pp_s[0], FONT_PIXEL, "0",
	(int [3]){351, 482, 17}) == 84)
		return (84);
	if (new_text(&rpg->trainers.pp_s[1], FONT_PIXEL, "0",
	(int [3]){514, 482, 17}) == 84)
		return (84);
	return (texture_trainer_ten(rpg));
}

int texture_trainer_height(rpg_t *rpg)
{
	if (new_text(&rpg->trainers.btn[3], FONT_PIXEL, "Fuite",
	(int [3]){741, 477, 23}) == 84)
		return (84);
	sfText_setColor(rpg->trainers.btn[3].t, sfWhite);
	if (new_text(&rpg->trainers.btn[4], FONT_PIXEL, "Capacites",
	(int [3]){342, 473, 35}) == 84)
		return (84);
	sfText_setColor(rpg->trainers.btn[4].t, sfWhite);
	if (new_text(&rpg->trainers.btn[5], FONT_PIXEL, "Retour",
	(int [3]){155, 890, 17}) == 84)
		return (84);
	sfText_setColor(rpg->trainers.btn[5].t, sfWhite);
	if (new_text(&rpg->trainers.item[0], FONT_PIXEL, "x 0",
	(int [3]){209, 512, 17}) == 84)
		return (84);
	sfText_setColor(rpg->trainers.item[0].t, sfWhite);
	if (new_text(&rpg->trainers.item[1], FONT_PIXEL, "x 0",
	(int [3]){648, 512, 17}) == 84)
		return (84);
	return (texture_trainer_nine(rpg));
}

int texture_trainer_seven(rpg_t *rpg)
{
	if (new_button(&rpg->trainers.utils[2], &fight_fight_pkball,
		IMG_POKEBALL_BTN,
		(float [8]){0, 78, 46, 0, 583, 470, 1.50, 1.50}) == 84)
		return (84);
	if (new_button(&rpg->trainers.utils[3], &fight_fight_run, IMG_BAG_BTN,
		(float [8]){0, 78, 46, 0, 708, 457, 1.50, 1.50}) == 84)
		return (84);
	if (new_text(&rpg->trainers.btn[0], FONT_PIXEL, "Pokemon",
	(int [3]){32, 477, 23}) == 84)
		return (84);
	sfText_setColor(rpg->trainers.btn[0].t, sfWhite);
	if (new_text(&rpg->trainers.btn[1], FONT_PIXEL, "Soin",
	(int [3]){176, 490, 23}) == 84)
		return (84);
	sfText_setColor(rpg->trainers.btn[1].t, sfWhite);
	if (new_text(&rpg->trainers.btn[2], FONT_PIXEL, "Pokeball",
	(int [3]){601, 490, 23}) == 84)
		return (84);
	sfText_setColor(rpg->trainers.btn[2].t, sfWhite);
	return (texture_trainer_height(rpg));
}

int texture_trainer_six(rpg_t *rpg)
{
	if (new_button(&rpg->trainers.skill[2], &fight_skill_3, IMG_SKILL,
		(float [8]){0, 124, 55, 0, 261, 515, 1.25, 1.25}) == 84)
		return (84);
	if (new_button(&rpg->trainers.skill[3], &fight_skill_4, IMG_SKILL,
		(float [8]){0, 124, 55, 0, 424, 515, 1.25, 1.25}) == 84)
		return (84);
	if (new_button(&rpg->trainers.skill[4], &fight_skill_btn, IMG_FIGHT_BTN,
		(float [8]){0, 216, 92, 0, 261, 448, 1.47, 1.47}) == 84)
		return (84);
	if (new_button(&rpg->trainers.rtrn, &fight_fight_rtrn, IMG_RETURN,
		(float [8]){0, 78, 46, 0, 140, 880, 1, 1}) == 84)
		return (84);
	if (new_button(&rpg->trainers.utils[0], &fight_fight_pkmn, IMG_PKMN_BTN,
		(float [8]){0, 78, 46, 0, 15, 457, 1.50, 1.50}) == 84)
		return (84);
	if (new_button(&rpg->trainers.utils[1], &fight_fight_bag, IMG_RUN_BTN,
		(float [8]){0, 78, 46, 0, 140, 470, 1.50, 1.50}) == 84)
		return (84);
	return (texture_trainer_seven(rpg));
}
