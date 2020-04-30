/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void set_base_pokemon(rpg_t *rpg)
{
	rpg->charac.pkmn[0].lvl = 7;
	rpg->charac.pkmn[0].exp = 0;
	rpg->charac.pkmn[0].state = 3;
	for (int i = 1; i < 6; i++)
		rpg->charac.pkmn[i].id = -1;
	rpg->begin.txt = 1;
	get_dialog(rpg, (char *[4]){"Prof :\n", "Tres bon choix !\n",
	"Je suis sur que vous allez tres bien vous entendre !\n", NULL});
}

int fire(rpg_t *rpg)
{
	rpg->charac.pkmn[0].id = 4;
	rpg->charac.pkmn[0].life =
	(int)((float)rpg->data.pokedex[rpg->charac.pkmn[0].id].life_max *
	((float)rpg->charac.pkmn[0].lvl / 100.0));
	rpg->charac.pkmn[0].skill[0][0] = 30;
	rpg->charac.pkmn[0].skill[0][1] =
	rpg->data.skill[rpg->charac.pkmn[0].skill[0][0]].p_p;
	rpg->charac.pkmn[0].skill[1][0] = 45;
	rpg->charac.pkmn[0].skill[1][1] =
	rpg->data.skill[rpg->charac.pkmn[0].skill[1][0]].p_p;
	rpg->charac.pkmn[0].skill[2][0] = 5;
	rpg->charac.pkmn[0].skill[2][1] =
	rpg->data.skill[rpg->charac.pkmn[0].skill[2][0]].p_p;
	rpg->charac.pkmn[0].skill[3][0] = -1;
	rpg->charac.pkmn[0].skill[3][1] = 0;
	set_base_pokemon(rpg);
	return (0);
}

int water(rpg_t *rpg)
{
	rpg->charac.pkmn[0].id = 7;
	rpg->charac.pkmn[0].life =
	(int)((float)rpg->data.pokedex[rpg->charac.pkmn[0].id].life_max *
	((float)rpg->charac.pkmn[0].lvl / 100.0));
	rpg->charac.pkmn[0].skill[0][0] = 15;
	rpg->charac.pkmn[0].skill[0][1] =
	rpg->data.skill[rpg->charac.pkmn[0].skill[0][0]].p_p;
	rpg->charac.pkmn[0].skill[1][0] = 45;
	rpg->charac.pkmn[0].skill[1][1] =
	rpg->data.skill[rpg->charac.pkmn[0].skill[1][0]].p_p;
	rpg->charac.pkmn[0].skill[2][0] = 35;
	rpg->charac.pkmn[0].skill[2][1] =
	rpg->data.skill[rpg->charac.pkmn[0].skill[2][0]].p_p;
	rpg->charac.pkmn[0].skill[3][0] = -1;
	rpg->charac.pkmn[0].skill[3][1] = 0;
	set_base_pokemon(rpg);
	return (0);
}

int leaf(rpg_t *rpg)
{
	rpg->charac.pkmn[0].id = 1;
	rpg->charac.pkmn[0].life =
	(int)((float)rpg->data.pokedex[rpg->charac.pkmn[0].id].life_max *
	((float)rpg->charac.pkmn[0].lvl / 100.0));
	rpg->charac.pkmn[0].skill[0][0] = 50;
	rpg->charac.pkmn[0].skill[0][1] =
	rpg->data.skill[rpg->charac.pkmn[0].skill[0][0]].p_p;
	rpg->charac.pkmn[0].skill[1][0] = 45;
	rpg->charac.pkmn[0].skill[1][1] =
	rpg->data.skill[rpg->charac.pkmn[0].skill[1][0]].p_p;
	rpg->charac.pkmn[0].skill[2][0] = 80;
	rpg->charac.pkmn[0].skill[2][1] =
	rpg->data.skill[rpg->charac.pkmn[0].skill[2][0]].p_p;
	rpg->charac.pkmn[0].skill[3][0] = -1;
	rpg->charac.pkmn[0].skill[3][1] = 0;
	set_base_pokemon(rpg);
	return (0);
}
