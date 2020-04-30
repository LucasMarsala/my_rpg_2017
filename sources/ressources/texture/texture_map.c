/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int texture_map_three(rpg_t *rpg)
{
	if (new_button(&rpg->map.rtrn, &btn_map_rtrn,
		IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 630, 490, 2, 1.5}) == 84)
		return (84);
	if (new_text(&rpg->map.rtn, FONT_PIXEL, "Retour",
	(int [3]){665, 510, 34}) == 84)
		return (84);
	sfText_setColor(rpg->map.rtn.t, sfWhite);
	return (0);
}

int texture_map_two(rpg_t *rpg)
{
	if (new_button(&rpg->map.btn[4], &btn_city_ligue, IMG_CONTOUR,
		(float [8]){28, 28, 28, 0, 542, 270, 1.3, 1.1}) == 84)
		return (84);
	if (new_button(&rpg->map.btn[5], &btn_place_one, IMG_CONTOUR,
		(float [8]){0, 28, 28, 0, 418, 456, 1, 1}) == 84)
		return (84);
	if (new_button(&rpg->map.btn[6], &btn_place_two, IMG_CONTOUR,
		(float [8]){0, 28, 28, 0, 244, 387, 1, 1}) == 84)
		return (84);
	if (new_button(&rpg->map.btn[7], &btn_place_three,
		IMG_CONTOUR, (float [8]){0, 28, 28, 0, 190, 222, 1, 1}) == 84)
		return (84);
	if (new_button(&rpg->map.btn[8], &btn_place_four,
		IMG_CONTOUR, (float [8]){0, 28, 28, 0, 504, 118, 1, 1}) == 84)
		return (84);
	if (new_button(&rpg->map.btn[9], &btn_place_five,
		IMG_CONTOUR, (float [8]){0, 28, 28, 0, 639, 338, 1, 1}) == 84)
		return (84);
	return (texture_map_three(rpg));
}

int texture_map(rpg_t *rpg)
{
	if (new_s(&rpg->map.map, IMG_MINIMAP,
		(int [6]){0, 840, 600, 0, 0, 0}, (float[2]){1, 1}) == 84)
		return (84);
	if (new_s(&rpg->map.pos, IMG_ICON_MAP,
		(int [6]){0, 100, 100, 0, 0, 0}, (float[2]){0.7, 0.7}) == 84)
		return (84);
	if (new_button(&rpg->map.btn[0], &btn_city_one, IMG_CONTOUR,
		(float [8]){28, 28, 28, 0, 624, 420, 1.3, 1.1}) == 84)
		return (84);
	if (new_button(&rpg->map.btn[1], &btn_city_two, IMG_CONTOUR,
		(float [8]){28, 28, 28, 0, 196, 399, 1.3, 1.1}) == 84)
		return (84);
	if (new_button(&rpg->map.btn[2], &btn_city_three, IMG_CONTOUR,
		(float [8]){28, 28, 28, 0, 240, 161, 1.3, 1.1}) == 84)
		return (84);
	if (new_button(&rpg->map.btn[3], &btn_city_capital, IMG_CONTOUR,
		(float [8]){56, 28, 28, 0, 592, 157, 1.7, 1.5}) == 84)
		return (84);
	return (texture_map_two(rpg));
}
