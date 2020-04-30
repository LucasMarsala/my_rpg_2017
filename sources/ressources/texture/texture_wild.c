/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int texture_wild_five(rpg_t *rpg)
{
	if (new_button(&rpg->wild.skill[0], &btn_skill_1, IMG_SKILL,
		(float [8]){0, 124, 55, 0, 261, 447, 1.25, 1.25}) == 84)
		return (84);
	if (new_button(&rpg->wild.skill[1], &btn_skill_2, IMG_SKILL,
		(float [8]){0, 124, 55, 0, 424, 447, 1.25, 1.25}) == 84)
		return (84);
	if (new_button(&rpg->wild.skill[2], &btn_skill_3, IMG_SKILL,
		(float [8]){0, 124, 55, 0, 261, 515, 1.25, 1.25}) == 84)
		return (84);
	if (new_button(&rpg->wild.skill[3], &btn_skill_4, IMG_SKILL,
		(float [8]){0, 124, 55, 0, 424, 515, 1.25, 1.25}) == 84)
		return (84);
	if (new_button(&rpg->wild.skill[4], &btn_skill_btn, IMG_FIGHT_BTN,
		(float [8]){0, 216, 92, 0, 261, 448, 1.47, 1.47}) == 84)
		return (84);
	if (new_button(&rpg->wild.rtrn, &btn_fight_rtrn, IMG_RETURN,
		(float [8]){0, 78, 46, 0, 140, 880, 1, 1}) == 84)
		return (84);
	return (texture_wild_six(rpg));
}

int texture_wild_four(rpg_t *rpg)
{
	if (new_s(&rpg->wild.pkmn_disp[2], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 90, 556}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->wild.pkmn_disp[3], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 134, 556}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->wild.pkmn_disp[4], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 178, 556}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->wild.pkmn_disp[5], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 222, 556}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->wild.pkball, IMG_PKBALL, (int [6]){0, 14, 14, 0, 0, 0},
	(float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->wild.dialog_bar, IMG_DIALOG,
		(int [6]){0, 250, 44, 0, 0, 448},
		(float [2]){3.36, 3.45}) == 84)
		return (84);
	return (texture_wild_five(rpg));
}

int texture_wild_three(rpg_t *rpg)
{
	if (new_s(&rpg->wild.block[2], IMG_BLOCK,
		(int [6]){0, 261, 106, 0, 579, 847}, (float [2]){1, 1}) == 84)
		return (84);
	if (new_s(&rpg->wild.life_bar[0], IMG_LIFE,
		(int [6]){0, 48, 2, 0, 132, 77}, (float [2]){3, 3}) == 84)
		return (84);
	if (new_s(&rpg->wild.life_bar[1], IMG_LIFE,
		(int [6]){0, 48, 2, 0, 648, 367}, (float [2]){3, 3}) == 84)
		return (84);
	if (new_s(&rpg->wild.exp_bar, IMG_LIFE,
		(int [6]){0, 48, 2, 0, 576, 409}, (float [2]){5, 1.5}) == 84)
		return (84);
	if (new_s(&rpg->wild.pkmn_disp[0], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 2, 556}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->wild.pkmn_disp[1], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 46, 556}, (float [2]){2, 2}) == 84)
		return (84);
	return (texture_wild_four(rpg));
}

int texture_wild_two(rpg_t *rpg)
{
	if (new_s(&rpg->wild.ground[1], IMG_US_GROUND,
		(int [6]){0, 256, 32, 0, -500, 350}, (float [2]){3, 3}) == 84)
		return (84);
	if (new_s(&rpg->wild.ground[2], IMG_THEM_GROUND,
		(int [6]){0, 128, 64, 0, 1250, 190}, (float [2]){3, 3}) == 84)
		return (84);
	if (new_s(&rpg->wild.ground[3], IMG_THEM_LIFE,
		(int [6]){0, 124, 16, 0, 0, 50}, (float [2]){3, 3}) == 84)
		return (84);
	if (new_s(&rpg->wild.ground[4], IMG_US_LIFE,
		(int [6]){0, 120, 25, 0, 480, 340}, (float [2]){3, 3}) == 84)
		return (84);
	if (new_s(&rpg->wild.block[0], IMG_BACK,
		(int [6]){0, 840, 153, 0, 0, 447}, (float [2]){1, 1}) == 84)
		return (84);
	if (new_s(&rpg->wild.block[1], IMG_BLOCK,
		(int [6]){0, 261, 106, 0, 0, 847}, (float [2]){1, 1}) == 84)
		return (84);
	return (texture_wild_three(rpg));
}

int texture_wild(rpg_t *rpg)
{
	rpg->wild.chrono = 0;
	rpg->wild.chrono_move = 0;
	rpg->wild.state = 0;
	rpg->wild.dmg = 0;
	rpg->wild.dmg_adv = 0;
	rpg->wild.lvl = 0;
	rpg->wild.exp = 0;
	rpg->wild.turn = 0;
	rpg->wild.run = 0;
	rpg->wild.capa = 0;
	rpg->wild.resis = 0;
	rpg->wild.dead = 0;
	rpg->wild.capt = 0;
	if (new_s(&rpg->wild.ground[0], IMG_GROUND,
		(int [6]){0, 320, 240, 0, 0, 0},
		(float [2]){2.625, 2.625}) == 84)
		return (84);
	return (texture_wild_two(rpg));
}
