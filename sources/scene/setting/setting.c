/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

int update_setting(rpg_t *rpg)
{
	for (int i = 0; i < 4; i++)
		if (update_button(rpg, &rpg->setting.snd[i],
			rpg->evt.pos.x, rpg->evt.pos.y) == 84)
			return (84);
	for (int i = 0; i < 2; i++)
		if (update_button(rpg, &rpg->setting.speed[i],
			rpg->evt.pos.x, rpg->evt.pos.y) == 84)
			return (84);
	if (update_button(rpg, &rpg->setting.rtrn, rpg->evt.pos.x,
		rpg->evt.pos.y) == 84)
		return (84);
	if (update_button(rpg, &rpg->setting.quit, rpg->evt.pos.x,
		rpg->evt.pos.y) == 84)
		return (84);
	return (0);
}

void render_setting(rpg_t *rpg)
{
	disp_spt(rpg, rpg->setting.back.s);
	disp_spt(rpg, rpg->setting.rtrn.s);
	disp_spt(rpg, rpg->setting.quit.s);
	for (int i = 0; i < 10; i++) {
		if (i < 4)
			disp_spt(rpg, rpg->setting.snd[i].s);
		if (i < 2)
			disp_spt(rpg, rpg->setting.speed[i].s);
		disp_txt(rpg, rpg->setting.txt[i].t);
	}
	disp_txt(rpg, rpg->setting.quitt.t);
}

int setting(rpg_t *rpg)
{
	if (update_setting(rpg) == 84)
		return (84);
	render_setting(rpg);
	return (0);
}
