/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

static int (* event_fct[])(rpg_t *rpg) = {
	event_intro,
	event_start,
	event_world,
	event_wild,
	event_map,
	event_pokemon,
	event_trainer,
	event_setting,
	event_pokedex,
	event_begin
};

int manage_event(rpg_t *rpg)
{
	while (sfRenderWindow_pollEvent(rpg->wdw.wdw, &rpg->evt.event)) {
		event_fct[rpg->scene](rpg);
		rpg->evt.pos = sfMouse_getPosition((sfWindow *)rpg->wdw.wdw);
		if (rpg->evt.event.mouseButton.type == sfEvtMouseButtonPressed
			&& rpg->evt.event.mouseButton.type !=
			sfEvtMouseButtonReleased)
			rpg->evt.mouse_press = 1;
		else
			rpg->evt.mouse_press = 0;
		if (rpg->evt.event.type == sfEvtKeyPressed &&
		sfKeyboard_isKeyPressed(sfKeyP) == 1)
			screenshot_everywhere(rpg);
		if (rpg->evt.event.type == sfEvtClosed) {
			sfRenderWindow_close(rpg->wdw.wdw);
			return (1);
		}
	}
	return (0);
}

static int (* scene_fct[])(rpg_t *rpg) = {
	intro,
	start,
	world,
	wild,
	map,
	pokemon,
	trainer,
	setting,
	pokedex,
	begin
};

int game_loop(rpg_t *rpg)
{
	sfClock_restart(rpg->wdw.clock);
	if (set_music(rpg, MUSIC_INTRO) == 84)
		return (84);
	if (database(rpg) == 84 || save(rpg) == 84 || texture(rpg) == 84)
		return (84);
	while (sfRenderWindow_isOpen(rpg->wdw.wdw)) {
		if (manage_event(rpg) == 1 || rpg->quit == 1)
			break;
		sfRenderWindow_clear(rpg->wdw.wdw, sfBlack);
		rpg->wdw.elapsed = sfClock_restart(rpg->wdw.clock)MICRO;
		scene_fct[rpg->scene](rpg);
		sfRenderWindow_display(rpg->wdw.wdw);
		if (rpg->scene != 1 || rpg->scene != 2)
			rpg->charac.time += rpg->wdw.elapsed;
	}
	destroy(rpg);
	return (0);
}
