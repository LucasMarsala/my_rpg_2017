/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

int texture_trainer_twelve(rpg_t *rpg)
{
	sfText_setColor(rpg->trainers.pv_info.t, sfWhite);
	if (new_text(&rpg->trainers.pvmax_info, FONT_PIXEL, "Life",
	(int [3]){745, 375, 25}) == 84)
		return (84);
	sfText_setColor(rpg->trainers.pvmax_info.t, sfWhite);
	return (0);
}

int texture_trainer_eleven(rpg_t *rpg)
{
	if (new_text(&rpg->trainers.name_info[0], FONT_PIXEL, "Name",
	(int [3]){5, 40, 30}) == 84)
		return (84);
	sfText_setColor(rpg->trainers.name_info[0].t, sfBlack);
	if (new_text(&rpg->trainers.name_info[1], FONT_PIXEL, "Name",
	(int [3]){510, 330, 30}) == 84)
		return (84);
	sfText_setColor(rpg->trainers.name_info[1].t, sfBlack);
	if (new_text(&rpg->trainers.lvl_info[0], FONT_PIXEL, "Lvl",
	(int [3]){285, 40, 30}) == 84)
		return (84);
	sfText_setColor(rpg->trainers.lvl_info[0].t, sfBlack);
	if (new_text(&rpg->trainers.lvl_info[1], FONT_PIXEL, "Lvl",
	(int [3]){755, 330, 30}) == 84)
		return (84);
	sfText_setColor(rpg->trainers.lvl_info[1].t, sfBlack);
	if (new_text(&rpg->trainers.pv_info, FONT_PIXEL, "Life",
	(int [3]){675, 375, 25}) == 84)
		return (84);
	return (texture_trainer_twelve(rpg));
}
