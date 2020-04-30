/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int texture_begin_three(rpg_t *rpg)
{
	if (new_text(&rpg->begin.yn[0], FONT_PIXEL, "Oui",
	(int [3]){120, 305, 34}) == 84)
		return (84);
	sfText_setColor(rpg->begin.yn[0].t, sfWhite);
	if (new_text(&rpg->begin.yn[1], FONT_PIXEL, "Non",
	(int [3]){340, 305, 34}) == 84)
		return (84);
	sfText_setColor(rpg->begin.yn[1].t, sfWhite);
	return (0);
}

int texture_begin_two(rpg_t *rpg)
{
	if (new_button(&rpg->begin.sexe[1], &girl, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 390, 60, 1.8, 5.5}) == 84)
		return (84);
	if (new_button(&rpg->begin.pkmn[0], &leaf, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 5, 60, 2, 3.5}) == 84)
		return (84);
	if (new_button(&rpg->begin.pkmn[1], &fire, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 205, 60, 2, 3.5}) == 84)
		return (84);
	if (new_button(&rpg->begin.pkmn[2], &water, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 405, 60, 2, 3.5}) == 84)
		return (84);
	if (new_button(&rpg->begin.info[0], &yes_info, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 80, 300, 1.5, 1}) == 84)
		return (84);
	if (new_button(&rpg->begin.info[1], &no_info, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 300, 300, 1.5, 1}) == 84)
		return (84);
	return (texture_begin_three(rpg));
}

int texture_begin(rpg_t *rpg)
{
	rpg->begin.state = 0;
	rpg->begin.txt = 0;
	rpg->begin.click = 1;
	rpg->begin.chrono = 0;
	if (new_s(&rpg->begin.back, IMG_BACK_NEW,
		(int [6]){0, 840, 600, 0, 0, 0}, (float [2]){1, 1}) == 84)
		return (84);
	if (new_s(&rpg->begin.charac[0], IMG_BOY,
		(int [6]){0, 50, 100, 0, 100, 70}, (float [2]){3, 3}) == 84)
		return (84);
	if (new_s(&rpg->begin.charac[1], IMG_GIRL,
		(int [6]){0, 50, 100, 0, 390, 70}, (float [2]){3, 3}) == 84)
		return (84);
	if (new_s(&rpg->begin.charac[2], IMG_PROF,
		(int [6]){0, 50, 100, 0, 560, 100}, (float [2]){4, 4}) == 84)
		return (84);
	if (new_button(&rpg->begin.sexe[0], &boy, IMG_BTN_START,
		(float [8]){0, 88, 56, 0, 90, 60, 1.8, 5.5}) == 84)
		return (84);
	return (texture_begin_two(rpg));
}
