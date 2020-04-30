/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

void move_charac(rpg_t *rpg)
{
	if (rpg->world.dir == 0)
		rpg->world.map.r.top += 2;
	if (rpg->world.dir == 1)
		rpg->world.map.r.left += 2;
	if (rpg->world.dir == 2)
		rpg->world.map.r.top -= 2;
	if (rpg->world.dir == 3)
		rpg->world.map.r.left -= 2;
	rpg->world.dir_len += 4;
	if (rpg->world.dir_len == 8)
		rpg->world.charac.r.top = (rpg->charac.sexe * 81) + 27;
	if (rpg->world.dir_len == 24)
		rpg->world.charac.r.top = (rpg->charac.sexe * 81) + 54;
	rpg->charac.chrono = 0.0;
}

void anim_charac(rpg_t *rpg)
{
	int trainer = 0;
	if (rpg->charac.chrono > 0.01 && rpg->world.dir_len < 32) {
		move_charac(rpg);
	} else if (rpg->world.dir_len == 32) {
		trainer = end_move_charac(rpg);
		if (trainer != -1 && rpg->data.trainer[trainer].done != 1) {
			rpg->world.dial = 1;
			rpg->world.intro_trainer = 1;
			rpg->trainers.id = trainer;
			get_dialog(rpg,
			(char *[4]){rpg->data.trainer[trainer].name,
				" :\n", rpg->data.trainer[trainer].begin,
				NULL});
		}
		rpg->world.dir = -1;
	}
}

int update_world(rpg_t *rpg)
{
	rpg->charac.chrono += rpg->wdw.elapsed;
	if (rpg->world.dir > -1)
		anim_charac(rpg);
	if (rpg->world.intro_trainer == 0 &&
		rpg->world.intro_fight == 0 && rpg->world.dial == 1) {
		rpg->dial.chrono += rpg->wdw.elapsed;
		if (flux_text(rpg) == 1)
			rpg->world.dial = 2;
	} else if (rpg->world.intro_trainer == 1 &&
		rpg->world.fight.p.x < 0 && rpg->world.dial == 1) {
		rpg->dial.chrono += rpg->wdw.elapsed;
		if (flux_text(rpg) == 1)
			rpg->world.dial = 2;
	} else
		if (intro_launchs(rpg) == 84)
			return (84);
	sfSprite_setTextureRect(rpg->world.charac.s, rpg->world.charac.r);
	sfSprite_setTextureRect(rpg->world.map.s, rpg->world.map.r);
	return (0);
}

void render_world(rpg_t *rpg)
{
	disp_spt(rpg, rpg->world.map.s);
	disp_spt(rpg, rpg->world.charac.s);
	disp_spt(rpg, rpg->world.locations.s);
	disp_txt(rpg, rpg->world.location.t);
	disp_spt(rpg, rpg->world.fight.s);
	disp_spt(rpg, rpg->world.bck_menu.s);
	for (int i = 0; i < 6; i++)
		disp_spt(rpg, rpg->world.btn[i].s);
	if (rpg->world.dial == 1 || rpg->world.dial == 2) {
		disp_spt(rpg, rpg->wild.dialog_bar.s);
		disp_txt(rpg, rpg->dial.t.t);
	}
}

int world(rpg_t *rpg)
{
	which_zone(rpg, rpg->charac.x, rpg->charac.y);
	display_location(rpg);
	update_menu_world(rpg);
	if (update_world(rpg) == 84)
		return (84);
	render_world(rpg);
	return (0);
}
