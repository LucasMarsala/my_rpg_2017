/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int update_map(rpg_t *rpg)
{
	for (int i = 0; i < 10; i++) {
		if (update_button(rpg, &rpg->map.btn[i],
			rpg->evt.pos.x, rpg->evt.pos.y) == 84)
			return (84);
	}
	if (update_button(rpg, &rpg->map.rtrn,
		rpg->evt.pos.x, rpg->evt.pos.y) == 84)
		return (84);
	return (0);
}

void render_map(rpg_t *rpg)
{
	disp_spt(rpg, rpg->map.map.s);
	for (int i = 0; i < 10; i++)
		disp_spt(rpg, rpg->map.btn[i].s);
	if (sfKeyboard_isKeyPressed(sfKeyEscape) == 1)
		rpg->scene = 2;
	if (rpg->charac.zone == 10) {
		rpg->map.pos.p.x = 223;
		rpg->map.pos.p.y = 109;
	}
	if (rpg->charac.zone == 0) {
		rpg->map.pos.p.x = 607;
		rpg->map.pos.p.y = 367;
	}
	put_dynamique_position(rpg);
	sfSprite_setPosition(rpg->map.pos.s, rpg->map.pos.p);
	disp_spt(rpg, rpg->map.pos.s);
	disp_spt(rpg, rpg->map.rtrn.s);
	disp_txt(rpg, rpg->map.rtn.t);
}

int map(rpg_t *rpg)
{
	if (update_map(rpg) == 84)
		return (84);
	render_map(rpg);
	return (0);
}
