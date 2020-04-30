/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int fight_skill_btn(rpg_t *rpg)
{
	rpg->trainers.state = 1;
	return (0);
}

int fight_skill_1(rpg_t *rpg)
{
	if (rpg->charac.pkmn[0].skill[0][1] > 0 && rpg->trainers.capa != 1) {
		rpg->trainers.dmg = damage(rpg,
			(int [5]){rpg->charac.pkmn[0].id,
				rpg->trainers.pkmn[0].id,
				rpg->charac.pkmn[0].lvl,
				rpg->trainers.pkmn[0].lvl,
				rpg->charac.pkmn[0].skill[0][0]});
		rpg->trainers.state = 4;
		rpg->charac.pkmn[0].skill[0][1]--;
		change_text(&rpg->trainers.pp_s[0],
			my_itoa(rpg->charac.pkmn[0].skill[0][1]));
		dialog_skill(rpg, 0);
	}
	return (0);
}

int fight_skill_2(rpg_t *rpg)
{
	if (rpg->charac.pkmn[0].skill[1][1] > 0 && rpg->trainers.capa != 1) {
		rpg->trainers.dmg = damage(rpg,
			(int [5]){rpg->charac.pkmn[0].id,
				rpg->trainers.pkmn[0].id,
				rpg->charac.pkmn[0].lvl,
				rpg->trainers.pkmn[0].lvl,
				rpg->charac.pkmn[0].skill[1][0]});
		rpg->trainers.state = 4;
		rpg->charac.pkmn[0].skill[1][1]--;
		change_text(&rpg->trainers.pp_s[1],
			my_itoa(rpg->charac.pkmn[0].skill[1][1]));
		dialog_skill(rpg, 1);
	}
	return (0);
}

int fight_skill_3(rpg_t *rpg)
{
	if (rpg->charac.pkmn[0].skill[2][1] > 0 && rpg->trainers.capa != 1) {
		rpg->trainers.dmg = damage(rpg,
			(int [5]){rpg->charac.pkmn[0].id,
				rpg->trainers.pkmn[0].id,
				rpg->charac.pkmn[0].lvl,
				rpg->trainers.pkmn[0].lvl,
				rpg->charac.pkmn[0].skill[2][0]});
		rpg->trainers.state = 4;
		rpg->charac.pkmn[0].skill[2][1]--;
		change_text(&rpg->trainers.pp_s[2],
			my_itoa(rpg->charac.pkmn[0].skill[2][1]));
		dialog_skill(rpg, 2);
	}
	return (0);
}

int fight_skill_4(rpg_t *rpg)
{
	if (rpg->charac.pkmn[0].skill[3][1] > 0 && rpg->trainers.capa != 1) {
		rpg->trainers.dmg = damage(rpg,
			(int [5]){rpg->charac.pkmn[0].id,
				rpg->trainers.pkmn[0].id,
				rpg->charac.pkmn[0].lvl,
				rpg->trainers.pkmn[0].lvl,
				rpg->charac.pkmn[0].skill[3][0]});
		rpg->trainers.state = 4;
		rpg->charac.pkmn[0].skill[3][1]--;
		change_text(&rpg->trainers.pp_s[3],
			my_itoa(rpg->charac.pkmn[0].skill[3][1]));
		dialog_skill(rpg, 3);
	}
	return (0);
}
