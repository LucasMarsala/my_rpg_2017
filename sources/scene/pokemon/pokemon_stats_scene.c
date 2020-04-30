/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void anim_pokedex_pokemon_next(rpg_t *rpg, int this)
{
	if (rpg->wild.chrono > 0.03) {
		rpg->data.pokedex[this].pkmn.r.left +=
		rpg->data.pokedex[this].pkmn.r.width;
		if (rpg->data.pokedex[this].pkmn.r.left >
			rpg->data.pokedex[this].pkmn.r.width *
			(rpg->data.pokedex[this].sheet - 1))
			rpg->data.pokedex[this].pkmn.r.left = 0;
		rpg->wild.chrono -= 0.03;
	}
}

void anim_pokedex_pokemon(rpg_t *rpg)
{
	int this = 0;
	for (int i = 0; i < 80; i++)
		if (rpg->data.pokedex[i].num ==
			rpg->charac.pkmn[rpg->pokemons.i].id)
			this = rpg->charac.pkmn[rpg->pokemons.i].id;
	rpg->data.pokedex[this].pkmn.p.x = 680 -
	(rpg->data.pokedex[this].pkmn.r.width * 2.5);
	rpg->data.pokedex[this].pkmn.p.y = 350 -
	(rpg->data.pokedex[this].pkmn.r.height * 2.5);
	sfSprite_setPosition(rpg->data.pokedex[this].pkmn.s,
		rpg->data.pokedex[this].pkmn.p);
	rpg->wild.chrono += rpg->wdw.elapsed;
	anim_pokedex_pokemon_next(rpg, this);
	sfSprite_setTextureRect(rpg->data.pokedex[this].pkmn.s,
		rpg->data.pokedex[this].pkmn.r);
	disp_spt(rpg, rpg->data.pokedex[this].pkmn.s);
}

void get_skills(rpg_t *rpg, int j)
{
	char *tmp;
	char *buf;
	for (int i = 0; i < 111; i++) {
		if (rpg->charac.pkmn[rpg->pokemons.i].skill[j][0] ==
			rpg->data.skill[i].num) {
			tmp = my_strdup(rpg->data.skill[i].name);
			tmp = my_strcat(tmp, " : ");
			buf =
			my_itoa(rpg->charac.pkmn[rpg->pokemons.i].skill[j][1]);
			tmp = my_strcat(tmp, buf);
			free(buf);
			tmp = my_strcat(tmp, " / ");
			buf = my_itoa(rpg->data.skill[i].p_p);
			tmp = my_strcat(tmp, buf);
			free(buf);
			sfText_setString(rpg->pokemons.skill[j].t, tmp);
			free(tmp);
			break;
		}
	}
}

void file_stats_next(rpg_t *rpg, char *lvl, char *life, char *xp)
{
	for (int i = 1; i < 80; i++)
		file_stats_next_two(rpg, i, life);
	sfText_setString(rpg->pokemons.stats[1].t, lvl);
	sfText_setString(rpg->pokemons.stats[2].t, xp);
	free(lvl);
	free(xp);
	for (int i = 0; i < 4; i++) {
		if (rpg->charac.pkmn[rpg->pokemons.i].skill[i][0] != -1)
			rpg->charac.pkmn[rpg->pokemons.i].nb_capacities++;
	}
	for (int j = 0; j < rpg->charac.pkmn[rpg->pokemons.i].nb_capacities;
	j++)
		get_skills(rpg, j);
}

void file_stats(rpg_t *rpg)
{
	char *lvl = my_strdup("Niveau: ");
	char *life = my_strdup("PV: ");
	char *xp = my_strdup("XP: ");
	char *buf;
	rpg->charac.pkmn[rpg->pokemons.i].nb_capacities = 0;
	buf = my_itoa(rpg->charac.pkmn[rpg->pokemons.i].life);
	life = my_strcat(life, buf);
	free(buf);
	life = my_strcat(life, " / ");
	buf = my_itoa(rpg->charac.pkmn[rpg->pokemons.i].lvl);
	lvl = my_strcat(lvl, buf);
	free(buf);
	buf = my_itoa(rpg->charac.pkmn[rpg->pokemons.i].exp);
	xp = my_strcat(xp, buf);
	free(buf);
	xp = my_strcat(xp, " / ");
	buf = my_itoa(rpg->charac.pkmn[rpg->pokemons.i].lvl * 100);
	xp = my_strcat(xp, buf);
	file_stats_next(rpg, lvl, life, xp);
	free(buf);
}
