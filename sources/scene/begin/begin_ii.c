/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_begin.c
*/
#include "rpg.h"

void update_begin_ix(rpg_t *rpg)
{
	if (rpg->begin.state == 15) {
		rpg->scene = 2;
		sfMusic_destroy(rpg->wdw.music);
		set_music(rpg, MUSIC_ROUTE1);
		rpg->charac.pkmn[0].life =
		(int)((float)rpg->data.pokedex[rpg->charac.pkmn[0].id].life_max
		* ((float)rpg->charac.pkmn[0].lvl / 100.0));
	} else if (rpg->begin.state == 16) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[5]){"Prof :\n",
		"Pour commencer, tu vas devoir te deplacer dans le jeu.\n",
		"Utilise les touches directionnelles",
		" ou bien 'Z', 'Q', 'S', 'D'.\n", NULL});
	} else
		update_begin_x(rpg);
}

void update_begin_viii(rpg_t *rpg)
{
	if (rpg->begin.state == 13) {
		for (int i = 0; i < 2; i++) {
			update_button(rpg, &rpg->begin.info[i],
				rpg->evt.pos.x, rpg->evt.pos.y);
		}
	} else if (rpg->begin.state == 14) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[3]){"Prof :\n",
		"Je te souhaite donc bonne aventure !\n", NULL});
	} else
		update_begin_ix(rpg);
}

void update_begin_vii(rpg_t *rpg)
{
	if (rpg->begin.state == 11) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[4]){"Prof :\n",
		"Te sens-tu pret ?\n", "L'aventure va pouvoir commencer.\n",
		NULL});
	} else if (rpg->begin.state == 12) {
		rpg->begin.txt = 1;
		get_dialog(rpg,
		(char *[4]){"(Souhaite-tu plus d'informations",
		" sur le fonctionnement\n",
		"du jeu 'Pokemon Kobalt' ?)\n", NULL});
	} else
		update_begin_viii(rpg);
}

void apply_pos_starter(rpg_t *rpg)
{
	rpg->data.pokedex[1].pkmn.p.x = 45;
	rpg->data.pokedex[1].pkmn.p.y = 120;
	rpg->data.pokedex[4].pkmn.p.x = 240;
	rpg->data.pokedex[4].pkmn.p.y = 90;
	rpg->data.pokedex[7].pkmn.p.x = 430;
	rpg->data.pokedex[7].pkmn.p.y = 130;
	sfSprite_setPosition(rpg->data.pokedex[1].pkmn.s,
		rpg->data.pokedex[1].pkmn.p);
	sfSprite_setPosition(rpg->data.pokedex[4].pkmn.s,
		rpg->data.pokedex[4].pkmn.p);
	sfSprite_setPosition(rpg->data.pokedex[7].pkmn.s,
		rpg->data.pokedex[7].pkmn.p);
}

void update_begin_vi(rpg_t *rpg)
{
	if (rpg->begin.state == 9) {
		for (int i = 0; i < 3; i++) {
			update_button(rpg, &rpg->begin.pkmn[i],
				rpg->evt.pos.x, rpg->evt.pos.y);
		}
	} else if (rpg->begin.state == 10) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[5]){"Prof :\n",
		"Ton objectif sera donc de t'entrainer...\n",
		"De vaincre les champions d'arene de chaque ville... !\n",
		"Ainsi que de vaincre les champions de la ligue Pokemon !",
		NULL});
	} else
		update_begin_vii(rpg);
}
