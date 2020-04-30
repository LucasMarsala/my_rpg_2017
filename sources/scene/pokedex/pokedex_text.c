/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture.c
*/
#include "rpg.h"

void get_desc(rpg_t *rpg, int i)
{
	int space = 0;
	char *id = my_strdup("Numero: ");
	char *desc = my_strdup("Desc :\n");
	desc = my_strcat(desc, rpg->data.pokedex[i].comment);
	for (int j = 0; desc[j] != '\0'; j++) {
		if (desc[j] == ' ')
			space++;
		if (space == 6) {
			space = 0;
			desc[j] = '\n';
		}
	}
	id = my_strcat(id, my_itoa(rpg->data.pokedex[i].num));
	sfText_setString(rpg->pokedex.desc[0].t, id);
	sfText_setString(rpg->pokedex.desc[1].t, rpg->data.pokedex[i].name);
	sfText_setString(rpg->pokedex.desc[2].t, desc);
	for (int j = 0; j < 3; j++)
		disp_txt(rpg, rpg->pokedex.desc[j].t);
	free(id);
	free(desc);
}

void get_stats_two(rpg_t *rpg, int i, char *buf)
{
	char *defmx = my_strdup("Defense max: ");
	char *speed = my_strdup("Speed: ");
	buf = my_itoa(rpg->data.pokedex[i].def);
	defmx = my_strcat(defmx, buf);
	free(buf);
	sfText_setString(rpg->pokedex.stats[2].t, defmx);
	buf = my_itoa(rpg->data.pokedex[i].speed);
	speed = my_strcat(speed, buf);
	free(buf);
	sfText_setString(rpg->pokedex.stats[3].t, speed);
	for (int j = 0; j < 4; j++)
		disp_txt(rpg, rpg->pokedex.stats[j].t);
	free(defmx);
	free(speed);
}

void get_stats(rpg_t *rpg, int i)
{
	char *lfmx = my_strdup("Vie max: ");
	char *atckmx = my_strdup("Attaque max: ");
	char *buf;

	buf = my_itoa(rpg->data.pokedex[i].life_max);
	lfmx = my_strcat(lfmx, buf);
	free(buf);
	sfText_setString(rpg->pokedex.stats[0].t, lfmx);
	buf = my_itoa(rpg->data.pokedex[i].attk);
	atckmx = my_strcat(atckmx, buf);
	free(buf);
	sfText_setString(rpg->pokedex.stats[1].t, atckmx);
	get_stats_two(rpg, i, buf);
	free(lfmx);
	free(atckmx);
}

void print_this_pkmn(rpg_t *rpg, int j)
{
	rpg->data.pokedex[j].pkmn.p.x = 680 -
	(rpg->data.pokedex[j].pkmn.r.width * 2.5);
	rpg->data.pokedex[j].pkmn.p.y = 350 -
	(rpg->data.pokedex[j].pkmn.r.height * 2.5);
	sfSprite_setPosition(rpg->data.pokedex[j].pkmn.s,
		rpg->data.pokedex[j].pkmn.p);
	rpg->wild.chrono += rpg->wdw.elapsed;
	if (rpg->wild.chrono > 0.03) {
		rpg->data.pokedex[j].pkmn.r.left +=
		rpg->data.pokedex[j].pkmn.r.width;
		if (rpg->data.pokedex[j].pkmn.r.left >
			rpg->data.pokedex[j].pkmn.r.width *
			(rpg->data.pokedex[j].sheet - 1))
			rpg->data.pokedex[j].pkmn.r.left = 0;
		rpg->wild.chrono -= 0.03;
	}
	sfSprite_setTextureRect(rpg->data.pokedex[j].pkmn.s,
		rpg->data.pokedex[j].pkmn.r);
	disp_spt(rpg, rpg->data.pokedex[j].pkmn.s);
}
