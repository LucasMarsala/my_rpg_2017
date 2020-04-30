/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_begin.c
*/
#include "rpg.h"

void update_begin_v(rpg_t *rpg)
{
	if (rpg->begin.state == 7) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[4]){"Prof :\n",
		"Tu veux a ton tour devenir le meilleur dresseur\n",
		"de la region ?\n", NULL});
	} else if (rpg->begin.state == 8) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[4]){"Prof :\n",
		"Tu as au choix un Pokemon Plante, Feu ou Eau :\n",
		"Granipiot, Magby ou Obalie ?\n", NULL});
		apply_pos_starter(rpg);
	} else
		update_begin_vi(rpg);
}

void update_begin_iv(rpg_t *rpg)
{
	if (rpg->begin.state == 5) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[4]){"Prof :\n",
		"Je suis sur que tu es la pour marcher sur\n",
		"sur les traces de ton pere ?\n", NULL});
	} else if (rpg->begin.state == 6) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[4]){"Prof :\n",
		"Tu veux a ton tour devenir le meilleur dresseur\n",
		"de la region ?\n", NULL});
	} else
		update_begin_v(rpg);
}

void update_begin_iii(rpg_t *rpg)
{
	if (rpg->begin.state == 3) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[4]){"Prof :\n",
		"Mais pour commencer, dis moi qui tu es... ?\n",
		"Tu es Ben ou bien Tiphany ?\n", NULL});
	} else if (rpg->begin.state == 4) {
		for (int i = 0; i < 2; i++) {
			update_button(rpg, &rpg->begin.sexe[i],
				rpg->evt.pos.x, rpg->evt.pos.y);
		}
	} else
		update_begin_iv(rpg);
}

void update_begin_ii(rpg_t *rpg)
{
	if (rpg->begin.state == 1) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[4]){"Prof :\n",
		"Ici tu vas rencontrer ce qu'on appelle des Pokemons.\n",
		"Ce sont des etres vivants qui partagent nos vies.", NULL});
	} else if (rpg->begin.state == 2) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[4]){"Prof :\n",
		"Certains ont des liens d'amitie fort avec eux,\n",
		"d'autre s'en servent meme dans des combats.", NULL});
	} else
		update_begin_iii(rpg);
}

void update_begin_i(rpg_t *rpg)
{
	if (rpg->begin.txt == 1) {
		rpg->dial.chrono += rpg->wdw.elapsed;
		if (flux_text(rpg) == 1) {
			rpg->begin.click = 0;
		}
	} else if (rpg->begin.state == 0) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[4]){"Prof :\n",
		"Bonjour, je suis le Professeur Pokemon.\n",
		"Bienvenue dans le monde des Pokemons.", NULL});
	} else
		update_begin_ii(rpg);
}
