/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int texture_world_three(rpg_t *rpg)
{
	if (new_button(&rpg->world.btn[5], &btn_setting, IMG_SETTINGS,
		(float [8]){0, 96, 96, 0, 740, 840, 1, 1}) == 84)
		return (84);
	if (new_text(&rpg->world.location, FONT_WORLD, "Merazur",
	(int [3]){30, -60, 40}) == 84)
		return (84);
	if (new_s(&rpg->world.fight, IMG_INTRO_FIGHT,
		(int [6]){0, 6400, 600, 0, -6400, 0}, (float [2]){1, 1}) == 84)
		return (84);
	if (new_s(&rpg->world.locations, IMG_LOCATION,
		(int [6]){0, 150, 46, 0, 0, -75}, (float [2]){2, 1.5}) == 84)
		return (84);
	sfText_setColor(rpg->world.location.t, sfWhite);
	new_trainer(&rpg->data.trainer[0], (int [4]){221, 198, 221, 202});
	new_trainer(&rpg->data.trainer[1], (int [4]){204, 193, 201, 193});
	new_trainer(&rpg->data.trainer[2], (int [4]){174, 192, 174, 195});
	return (0);
}

int texture_world_two(rpg_t *rpg)
{
	if (new_s(&rpg->world.bck_menu, IMG_MENU,
		(int [6]){0, 840, 600, 0, 0, 300}, (float [2]){1, 1}) == 84)
		return (84);
	if (new_button(&rpg->world.btn[0], &btn_pokemon, IMG_POKEMON,
		(float [8]){0, 96, 96, 0, 280, 1290, 1, 1}) == 84)
		return (84);
	if (new_button(&rpg->world.btn[1], &btn_pokedex, IMG_POKEDEX,
		(float [8]){0, 96, 96, 0, 340, 1110, 1, 1}) == 84)
		return (84);
	if (new_button(&rpg->world.btn[2], &btn_bag, IMG_BAG,
		(float [8]){0, 96, 96, 0, 440, 1025, 1, 1}) == 84)
		return (84);
	if (new_button(&rpg->world.btn[3], &btn_map, IMG_WORLDMAP,
		(float [8]){0, 96, 96, 0, 540, 960, 1, 1}) == 84)
		return (84);
	if (new_button(&rpg->world.btn[4], &btn_save, IMG_SAVE,
		(float [8]){0, 96, 96, 0, 640, 900, 1, 1}) == 84)
		return (84);
	return (texture_world_three(rpg));
}

int texture_world(rpg_t *rpg)
{
	rpg->world.intro_fight = 0;
	rpg->world.intro_trainer = 0;
	rpg->world.trainer_or_wild = 0;
	rpg->world.chrono_sea = 0;
	rpg->world.chrono_mvt = 0;
	rpg->world.chrono_localisation = 0.0;
	rpg->charac.chrono = 0;
	rpg->world.menu = 0;
	rpg->world.dir = -1;
	rpg->world.dial = 0;
	if (new_s(&rpg->world.map, IMG_MAP, (int [6]){(rpg->charac.y - 7) * 16,
		336, 240, (rpg->charac.x - 10) * 16, 0, 0},
		(float [2]){2.5, 2.5}) == 84)
		return (84);
	if (new_s(&rpg->world.charac, IMG_CHARAC,
		(int [6]){2, 19, 27, 0, 400, 264}, (float [2]){2.1, 2.1}) == 84)
		return (84);
	return (texture_world_two(rpg));
}
