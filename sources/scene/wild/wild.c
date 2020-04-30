/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int update_wild(rpg_t *rpg)
{
	begin_fight(rpg);
	anim_pokemon_wild(rpg);
	update_pokemon_disp(rpg);
	update_skill(rpg);
	update_life(rpg);
	update_stats(rpg);
	rpg->wild.chrono_move += rpg->wdw.elapsed;
	if (rpg->wild.chrono_move > 0.015) {
		rpg->wild.disp += 0.03;
		update_wild_i(rpg);
		if (rpg->wild.disp > 2.4 && rpg->wild.disp < 5)
			update_particules(rpg->wild.part);
		rpg->wild.chrono_move -= 0.015;
	}
	return (0);
}

void render_wild_next_two(rpg_t *rpg)
{
	disp_spt(rpg, rpg->wild.skill[4].s);
	disp_spt(rpg, rpg->wild.rtrn.s);
	disp_txt(rpg, rpg->wild.btn[4].t);
	disp_txt(rpg, rpg->wild.btn[5].t);
	if (rpg->wild.state == 4 || rpg->wild.state == 5) {
		disp_spt(rpg, rpg->wild.dialog_bar.s);
		disp_txt(rpg, rpg->dial.t.t);
	}
	disp_txt(rpg, rpg->wild.pv_info.t);
	disp_txt(rpg, rpg->wild.pvmax_info.t);
	draw_part(rpg->wild.part, rpg);
	draw_part_atk(rpg->wild.part, rpg);
	if (rpg->wild.capt == 1 || rpg->wild.capt == 2)
		disp_spt(rpg, rpg->wild.pkball.s);
}

void render_wild_next(rpg_t *rpg)
{
	disp_spt(rpg, rpg->wild.utils[3].s);
	disp_txt(rpg, rpg->wild.btn[0].t);
	disp_txt(rpg, rpg->wild.btn[1].t);
	disp_txt(rpg, rpg->wild.btn[2].t);
	disp_txt(rpg, rpg->wild.btn[3].t);
	disp_txt(rpg, rpg->wild.item[0].t);
	disp_txt(rpg, rpg->wild.item[1].t);
	disp_spt(rpg, rpg->wild.block[1].s);
	disp_spt(rpg, rpg->wild.block[2].s);
	for (int i = 0; i < 6; i++)
		disp_spt(rpg, rpg->wild.pkmn_disp[i].s);
	for (int i = 0; i < 4; i++) {
		if (rpg->charac.pkmn[0].skill[i][0] != -1) {
			disp_spt(rpg, rpg->wild.skill[i].s);
			disp_txt(rpg, rpg->wild.name_s[i].t);
			disp_txt(rpg, rpg->wild.pp_s[i].t);
			disp_txt(rpg, rpg->wild.ppmax_s[i].t);
		}
	}
}

void render_wild(rpg_t *rpg)
{
	disp_spt(rpg, rpg->wild.ground[0].s);
	disp_spt(rpg, rpg->wild.ground[1].s);
	disp_spt(rpg, rpg->wild.ground[2].s);
	disp_spt(rpg, rpg->wild.ground[3].s);
	disp_spt(rpg, rpg->wild.ground[4].s);
	disp_txt(rpg, rpg->wild.name_info[0].t);
	disp_txt(rpg, rpg->wild.name_info[1].t);
	disp_txt(rpg, rpg->wild.lvl_info[0].t);
	disp_txt(rpg, rpg->wild.lvl_info[1].t);
	disp_spt(rpg, rpg->wild.life_bar[0].s);
	disp_spt(rpg, rpg->wild.life_bar[1].s);
	disp_spt(rpg, rpg->wild.exp_bar.s);
	if (rpg->wild.life != 0 && rpg->wild.capt != 2)
		disp_spt(rpg, rpg->data.pokedex[rpg->wild.id].pkmn.s);
	if (rpg->charac.pkmn[0].life != 0)
		disp_spt(rpg, rpg->data.pokedex[rpg->charac.pkmn[0].id].back.s);
	disp_spt(rpg, rpg->wild.block[0].s);
	disp_spt(rpg, rpg->wild.utils[0].s);
	disp_spt(rpg, rpg->wild.utils[1].s);
	disp_spt(rpg, rpg->wild.utils[2].s);
}

int wild(rpg_t *rpg)
{
	if (update_wild(rpg) == 84)
		return (84);
	if (rpg->wild.disp > 5) {
		destroy_part(rpg->wild.part);
		rpg->wild.part = NULL;
	}
	render_wild(rpg);
	render_wild_next(rpg);
	render_wild_next_two(rpg);
	return (0);
}
