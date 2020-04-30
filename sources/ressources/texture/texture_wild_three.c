/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int texture_wild_eleven(rpg_t *rpg)
{
	if (new_text(&rpg->wild.lvl_info[0], FONT_PIXEL, "Lvl",
	(int [3]){285, 40, 30}) == 84)
		return (84);
	sfText_setColor(rpg->wild.lvl_info[0].t, sfBlack);
	if (new_text(&rpg->wild.lvl_info[1], FONT_PIXEL, "Lvl",
	(int [3]){755, 330, 30}) == 84)
		return (84);
	sfText_setColor(rpg->wild.lvl_info[1].t, sfBlack);
	if (new_text(&rpg->wild.pv_info, FONT_PIXEL, "Life",
	(int [3]){675, 375, 25}) == 84)
		return (84);
	sfText_setColor(rpg->wild.pv_info.t, sfWhite);
	if (new_text(&rpg->wild.pvmax_info, FONT_PIXEL, "Life",
	(int [3]){745, 375, 25}) == 84)
		return (84);
	sfText_setColor(rpg->wild.pvmax_info.t, sfWhite);
	return (0);
}
