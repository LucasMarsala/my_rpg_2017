/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void dialog_skill(rpg_t *rpg, int i)
{
	if (rpg->wild.resis > 1)
		get_dialog(rpg,
		(char *[5]){rpg->data.pokedex[rpg->charac.pkmn[0].id].name,
		" utilise ",
		rpg->data.skill[rpg->charac.pkmn[0].skill[i][0]].name,
		" !\nC'est super efficace !\n", NULL});
	else if (rpg->wild.resis < 1)
		get_dialog(rpg,
		(char *[5]){rpg->data.pokedex[rpg->charac.pkmn[0].id].name,
		" utilise ",
		rpg->data.skill[rpg->charac.pkmn[0].skill[i][0]].name,
		" !\nCe n'est pas tres efficace !\n", NULL});
	else
		get_dialog(rpg,
		(char *[5]){rpg->data.pokedex[rpg->charac.pkmn[0].id].name,
		" utilise ",
		rpg->data.skill[rpg->charac.pkmn[0].skill[i][0]].name,
		" !\n", NULL});
}
