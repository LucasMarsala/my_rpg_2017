/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_begin.c
*/
#include "rpg.h"

int update_begin(rpg_t *rpg)
{
	anim_pkmn_begin(rpg);
	if (rpg->begin.click == 1)
		update_begin_i(rpg);
	return (0);
}

void render_begin_next(rpg_t *rpg)
{
	if (rpg->begin.state == 13 || rpg->begin.state == 14) {
		disp_spt(rpg, rpg->begin.info[0].s);
		disp_spt(rpg, rpg->begin.info[1].s);
		disp_txt(rpg, rpg->begin.yn[0].t);
		disp_txt(rpg, rpg->begin.yn[1].t);
	}
	disp_spt(rpg, rpg->begin.charac[2].s);
	disp_spt(rpg, rpg->wild.dialog_bar.s);
	disp_txt(rpg, rpg->dial.t.t);
}

void render_begin(rpg_t *rpg)
{
	disp_spt(rpg, rpg->begin.back.s);
	if (rpg->begin.state == 4 || rpg->begin.state == 5) {
		disp_spt(rpg, rpg->begin.sexe[0].s);
		disp_spt(rpg, rpg->begin.sexe[1].s);
		disp_spt(rpg, rpg->begin.charac[0].s);
		disp_spt(rpg, rpg->begin.charac[1].s);
	}
	if (rpg->begin.state == 9 || rpg->begin.state == 10) {
		disp_spt(rpg, rpg->begin.pkmn[0].s);
		disp_spt(rpg, rpg->begin.pkmn[1].s);
		disp_spt(rpg, rpg->begin.pkmn[2].s);
		disp_spt(rpg, rpg->data.pokedex[1].pkmn.s);
		disp_spt(rpg, rpg->data.pokedex[4].pkmn.s);
		disp_spt(rpg, rpg->data.pokedex[7].pkmn.s);
	}
}

int begin(rpg_t *rpg)
{
	if (update_begin(rpg) == 84)
		return (84);
	render_begin(rpg);
	render_begin_next(rpg);
	return (0);
}
