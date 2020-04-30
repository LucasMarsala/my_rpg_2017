/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int btn_skill_btn(rpg_t *rpg)
{
	rpg->wild.state = 1;
	return (0);
}

int btn_skill_1(rpg_t *rpg)
{
	if (rpg->charac.pkmn[0].skill[0][1] > 0 && rpg->wild.capa != 1) {
		rpg->wild.dmg = damage(rpg, (int [5]){rpg->charac.pkmn[0].id,
			rpg->wild.id, rpg->charac.pkmn[0].lvl, rpg->wild.level,
			rpg->charac.pkmn[0].skill[0][0]});
		rpg->wild.state = 4;
		rpg->charac.pkmn[0].skill[0][1]--;
		change_text(&rpg->wild.pp_s[0],
			my_itoa(rpg->charac.pkmn[0].skill[0][1]));
		dialog_skill(rpg, 0);
	}
	return (0);
}

int btn_skill_2(rpg_t *rpg)
{
	if (rpg->charac.pkmn[0].skill[1][1] > 0 && rpg->wild.capa != 1) {
		rpg->wild.dmg = damage(rpg,
			(int [5]){rpg->charac.pkmn[0].id, rpg->wild.id,
				rpg->charac.pkmn[0].lvl, rpg->wild.level,
				rpg->charac.pkmn[0].skill[1][0]});
		rpg->wild.state = 4;
		rpg->charac.pkmn[0].skill[1][1]--;
		change_text(&rpg->wild.pp_s[1],
			my_itoa(rpg->charac.pkmn[0].skill[1][1]));
		dialog_skill(rpg, 1);
	}
	return (0);
}

int btn_skill_3(rpg_t *rpg)
{
	if (rpg->charac.pkmn[0].skill[2][1] > 0 && rpg->wild.capa != 1) {
		rpg->wild.dmg = damage(rpg,
			(int [5]){rpg->charac.pkmn[0].id, rpg->wild.id,
				rpg->charac.pkmn[0].lvl, rpg->wild.level,
				rpg->charac.pkmn[0].skill[2][0]});
		rpg->wild.state = 4;
		rpg->charac.pkmn[0].skill[2][1]--;
		change_text(&rpg->wild.pp_s[2],
			my_itoa(rpg->charac.pkmn[0].skill[2][1]));
		dialog_skill(rpg, 2);
	}
	return (0);
}

int btn_skill_4(rpg_t *rpg)
{
	if (rpg->charac.pkmn[0].skill[3][1] > 0 && rpg->wild.capa != 1) {
		rpg->wild.dmg = damage(rpg,
			(int [5]){rpg->charac.pkmn[0].id,
			rpg->wild.id, rpg->charac.pkmn[0].lvl,
			rpg->wild.level, rpg->charac.pkmn[0].skill[3][0]});
		rpg->wild.state = 4;
		rpg->charac.pkmn[0].skill[3][1]--;
		change_text(&rpg->wild.pp_s[3],
			my_itoa(rpg->charac.pkmn[0].skill[3][1]));
		dialog_skill(rpg, 2);
	}
	return (0);
}
