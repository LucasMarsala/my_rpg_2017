/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int texture_start_seven(rpg_t *rpg)
{
	sfText_setColor(rpg->start.empty[1].t, sfWhite);
	if (new_text(&rpg->start.empty[2], FONT_PIXEL,
		"VIDE", (int [3]){650, -830, 40}) == 84)
		return (84);
	sfText_setColor(rpg->start.empty[2].t, sfWhite);
	return (0);
}

int texture_start_six(rpg_t *rpg)
{
	if (rpg->data.save.empty[1] == 0) {
		if (new_s(&rpg->start.min[1], IMG_MIN_2,
			(int [6]){0, 840, 600, 0, 304, -790},
			(float [2]){0.275, 0.265}) == 84)
			return (84);
	}
	if (rpg->data.save.empty[2] == 0) {
		if (new_s(&rpg->start.min[2], IMG_MIN_3,
			(int [6]){0, 840, 600, 0, 584, -890},
			(float [2]){0.275, 0.265}) == 84)
			return (84);
	}
	if (new_text(&rpg->start.empty[0], FONT_PIXEL, "VIDE",
	(int [3]){85, -630, 40}) == 84)
		return (84);
	sfText_setColor(rpg->start.empty[0].t, sfWhite);
	if (new_text(&rpg->start.empty[1], FONT_PIXEL, "VIDE",
	(int [3]){365, -730, 40}) == 84)
		return (84);
	return (texture_start_seven(rpg));
}
