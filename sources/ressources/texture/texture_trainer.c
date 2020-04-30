/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

int texture_trainer_five(rpg_t *rpg)
{
	if (new_s(&rpg->trainers.pkmn_adv[2], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 712, 556}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->trainers.pkmn_adv[1], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 756, 556}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->trainers.pkmn_adv[0], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 800, 556}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->trainers.dialog_bar, IMG_DIALOG,
		(int [6]){0, 250, 44, 0, 0, 448},
		(float [2]){3.36, 3.45}) == 84)
		return (84);
	if (new_button(&rpg->trainers.skill[0], &fight_skill_1, IMG_SKILL,
		(float [8]){0, 124, 55, 0, 261, 447, 1.25, 1.25}) == 84)
		return (84);
	if (new_button(&rpg->trainers.skill[1], &fight_skill_2, IMG_SKILL,
		(float [8]){0, 124, 55, 0, 424, 447, 1.25, 1.25}) == 84)
		return (84);
	return (texture_trainer_six(rpg));
}

int texture_trainer_four(rpg_t *rpg)
{
	if (new_s(&rpg->trainers.pkmn_disp[3], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 134, 556}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->trainers.pkmn_disp[4], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 178, 556}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->trainers.pkmn_disp[5], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 222, 556}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->trainers.pkmn_adv[5], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 580, 556}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->trainers.pkmn_adv[4], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 624, 556}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->trainers.pkmn_adv[3], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 668, 556}, (float [2]){2, 2}) == 84)
		return (84);
	return (texture_trainer_five(rpg));
}

int texture_trainer_three(rpg_t *rpg)
{
	if (new_s(&rpg->trainers.life_bar[0], IMG_LIFE,
		(int [6]){0, 48, 2, 0, 132, 77}, (float [2]){3, 3}) == 84)
		return (84);
	if (new_s(&rpg->trainers.life_bar[1], IMG_LIFE,
		(int [6]){0, 48, 2, 0, 648, 367}, (float [2]){3, 3}) == 84)
		return (84);
	if (new_s(&rpg->trainers.exp_bar, IMG_LIFE,
		(int [6]){0, 48, 2, 0, 576, 409}, (float [2]){5, 1.5}) == 84)
		return (84);
	if (new_s(&rpg->trainers.pkmn_disp[0], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 2, 556}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->trainers.pkmn_disp[1], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 46, 556}, (float [2]){2, 2}) == 84)
		return (84);
	if (new_s(&rpg->trainers.pkmn_disp[2], IMG_POKEMON_DISP,
		(int [6]){0, 19, 19, 19, 90, 556}, (float [2]){2, 2}) == 84)
		return (84);
	return (texture_trainer_four(rpg));
}

int texture_trainer_two(rpg_t *rpg)
{
	if (new_s(&rpg->trainers.ground[2], IMG_THEM_GROUND,
		(int [6]){0, 128, 64, 0, 1250, 190}, (float [2]){3, 3}) == 84)
		return (84);
	if (new_s(&rpg->trainers.ground[3], IMG_THEM_LIFE,
		(int [6]){0, 124, 16, 0, 0, 50}, (float [2]){3, 3}) == 84)
		return (84);
	if (new_s(&rpg->trainers.ground[4], IMG_US_LIFE,
		(int [6]){0, 120, 25, 0, 480, 340}, (float [2]){3, 3}) == 84)
		return (84);
	if (new_s(&rpg->trainers.block[0], IMG_BACK,
		(int [6]){0, 840, 153, 0, 0, 447}, (float [2]){1, 1}) == 84)
		return (84);
	if (new_s(&rpg->trainers.block[1], IMG_BLOCK,
		(int [6]){0, 261, 106, 0, 0, 847}, (float [2]){1, 1}) == 84)
		return (84);
	if (new_s(&rpg->trainers.block[2], IMG_BLOCK,
		(int [6]){0, 261, 106, 0, 579, 847}, (float [2]){1, 1}) == 84)
		return (84);
	return (texture_trainer_three(rpg));
}

int texture_trainer(rpg_t *rpg)
{
	rpg->trainers.chrono = 0;
	rpg->trainers.chrono_move = 0;
	rpg->trainers.state = 0;
	rpg->trainers.dmg = 0;
	rpg->trainers.dmg_adv = 0;
	rpg->trainers.lvl = 0;
	rpg->trainers.exp = 0;
	rpg->trainers.turn = 0;
	rpg->trainers.run = 0;
	rpg->trainers.capa = 0;
	rpg->trainers.resis = 0;
	rpg->trainers.dead = 0;
	if (new_s(&rpg->trainers.ground[0], IMG_GROUND,
		(int [6]){0, 320, 240, 0, 0, 0},
		(float [2]){2.625, 2.625}) == 84)
		return (84);
	if (new_s(&rpg->trainers.ground[1], IMG_US_GROUND,
		(int [6]){0, 256, 32, 0, -500, 350}, (float [2]){3, 3}) == 84)
		return (84);
	return (texture_trainer_two(rpg));
}
