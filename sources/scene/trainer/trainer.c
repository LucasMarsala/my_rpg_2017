/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

int update_trainer(rpg_t *rpg)
{
	begin_trainer(rpg);
	update_pkball(rpg);
	anim_pkmn_trainer(rpg);
	update_stats_trainer(rpg);
	update_life_trainer(rpg);
	update_skill_trainer(rpg);
	rpg->trainers.chrono_move += rpg->wdw.elapsed;
	if (rpg->trainers.chrono_move > 0.015) {
		update_trainer_i(rpg);
		rpg->trainers.chrono_move -= 0.015;
	}
	return (0);
}

void render_trainer_two(rpg_t *rpg)
{
	for (int i = 0; i < 4; i++) {
		if (rpg->charac.pkmn[0].skill[i][0] != -1) {
			disp_spt(rpg, rpg->trainers.skill[i].s);
			disp_txt(rpg, rpg->trainers.name_s[i].t);
			disp_txt(rpg, rpg->trainers.pp_s[i].t);
			disp_txt(rpg, rpg->trainers.ppmax_s[i].t);
		}
	}
	disp_spt(rpg, rpg->trainers.skill[4].s);
	disp_spt(rpg, rpg->trainers.rtrn.s);
	disp_txt(rpg, rpg->trainers.btn[4].t);
	disp_txt(rpg, rpg->trainers.btn[5].t);
	if (rpg->trainers.state == 4 || rpg->trainers.state == 5) {
		disp_spt(rpg, rpg->trainers.dialog_bar.s);
		disp_txt(rpg, rpg->dial.t.t);
	}
	disp_txt(rpg, rpg->trainers.pv_info.t);
	disp_txt(rpg, rpg->trainers.pvmax_info.t);
}

void render_trainer_one(rpg_t *rpg)
{
	disp_spt(rpg, rpg->trainers.utils[2].s);
	disp_spt(rpg, rpg->trainers.utils[3].s);
	disp_txt(rpg, rpg->trainers.btn[0].t);
	disp_txt(rpg, rpg->trainers.btn[1].t);
	disp_txt(rpg, rpg->trainers.btn[2].t);
	disp_txt(rpg, rpg->trainers.btn[3].t);
	disp_txt(rpg, rpg->wild.item[0].t);
	disp_txt(rpg, rpg->wild.item[1].t);
	disp_spt(rpg, rpg->trainers.block[1].s);
	disp_spt(rpg, rpg->trainers.block[2].s);
	for (int i = 0; i < 6; i++) {
		disp_spt(rpg, rpg->trainers.pkmn_disp[i].s);
		disp_spt(rpg, rpg->trainers.pkmn_adv[i].s);
	}
}

void render_trainer(rpg_t *rpg)
{
	disp_spt(rpg, rpg->trainers.ground[0].s);
	disp_spt(rpg, rpg->trainers.ground[1].s);
	disp_spt(rpg, rpg->trainers.ground[2].s);
	disp_spt(rpg, rpg->trainers.ground[3].s);
	disp_spt(rpg, rpg->trainers.ground[4].s);
	disp_txt(rpg, rpg->trainers.name_info[0].t);
	disp_txt(rpg, rpg->trainers.name_info[1].t);
	disp_txt(rpg, rpg->trainers.lvl_info[0].t);
	disp_txt(rpg, rpg->trainers.lvl_info[1].t);
	disp_spt(rpg, rpg->trainers.life_bar[0].s);
	disp_spt(rpg, rpg->trainers.life_bar[1].s);
	disp_spt(rpg, rpg->trainers.exp_bar.s);
	if (rpg->trainers.pkmn[0].life != 0)
		disp_spt(rpg,
		rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.s);
	if (rpg->charac.pkmn[0].life != 0)
		disp_spt(rpg, rpg->data.pokedex[rpg->charac.pkmn[0].id].back.s);
	disp_spt(rpg, rpg->trainers.block[0].s);
	disp_spt(rpg, rpg->trainers.utils[0].s);
	disp_spt(rpg, rpg->trainers.utils[1].s);
}

int trainer(rpg_t *rpg)
{
	if (update_trainer(rpg) == 84)
		return (84);
	render_trainer(rpg);
	render_trainer_one(rpg);
	render_trainer_two(rpg);
	return (0);
}
