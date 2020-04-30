/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** destroy.c
*/
#include "rpg.h"

int destroy(rpg_t *rpg)
{
	destroy_intro(rpg);
	destroy_start(rpg);
	destroy_world(rpg);
	destroy_wild(rpg);
	destroy_text(rpg);
	destroy_map(rpg);
	destroy_begin(rpg);
	if (destroy_speech_trainer(rpg))
		return (84);
	destroy_pokemons(rpg);
	destroy_trainers(rpg);
	destroy_settings(rpg);
	destroy_pokedex(rpg);
	sfMusic_destroy(rpg->wdw.music);
	sfClock_destroy(rpg->wdw.clock);
	free_strings(rpg);
	sfRenderWindow_destroy(rpg->wdw.wdw);
	return (0);
}

int destroy_speech_trainer(rpg_t *rpg)
{
	int fd = open(DATA_TRAINER, O_RDONLY);
	int len;
	char *s;

	if (fd == -1)
		return (84);
	for (len = 0; (s = get_next_line(fd)) != NULL; len++)
		free(s);
	for (int i = 0; i < len; i++) {
		free(rpg->data.trainer[i].name);
		free(rpg->data.trainer[i].begin);
		free(rpg->data.trainer[i].end);
	}
	free(rpg->data.trainer);
	close(fd);
	return (0);
}

void destroy_intro(rpg_t *rpg)
{
	sfSprite_destroy(rpg->intro.video.s);
	sfTexture_destroy(rpg->intro.video.t);
}

void destroy_start(rpg_t *rpg)
{
	for (int i = 0; i < 3; i++) {
		if (rpg->data.save.empty[i] == 0) {
			sfSprite_destroy(rpg->start.min[i].s);
			sfTexture_destroy(rpg->start.min[i].t);
		}
	}
	for (int i = 0; i < 4; i++) {
		sfSprite_destroy(rpg->start.slot[i].s);
		sfSprite_destroy(rpg->start.btn[i].s);
		sfTexture_destroy(rpg->start.slot[i].t);
		sfTexture_destroy(rpg->start.btn[i].t);
	}
	for (int i = 0; i < 5; i++) {
		sfSprite_destroy(rpg->start.spt[i].s);
		sfTexture_destroy(rpg->start.spt[i].t);
	}
}

void destroy_world(rpg_t *rpg)
{
	sfSprite_destroy(rpg->world.map.s);
	sfSprite_destroy(rpg->world.charac.s);
	sfSprite_destroy(rpg->world.fight.s);
	sfSprite_destroy(rpg->world.locations.s);
	sfSprite_destroy(rpg->world.bck_menu.s);
	sfTexture_destroy(rpg->world.map.t);
	sfTexture_destroy(rpg->world.charac.t);
	sfTexture_destroy(rpg->world.fight.t);
	sfTexture_destroy(rpg->world.locations.t);
	sfTexture_destroy(rpg->world.bck_menu.t);
	for (int i = 0; i < 6; i++) {
		sfSprite_destroy(rpg->world.btn[i].s);
		sfTexture_destroy(rpg->world.btn[i].t);
	}
}
