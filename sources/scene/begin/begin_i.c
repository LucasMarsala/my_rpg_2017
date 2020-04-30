/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_begin.c
*/
#include "rpg.h"

void update_begin_xiv(rpg_t *rpg)
{
	if (rpg->begin.state == 25) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[5]){"Prof :\n",
		"Je pense avoir fini, es-tu pret ?\n", "Bonne aventure !\n",
		"N'oublies pas de sauvegarder regulierement !", NULL});
	} else if (rpg->begin.state == 26) {
		rpg->begin.txt = 1;
		rpg->scene = 2;
		sfMusic_destroy(rpg->wdw.music);
		set_music(rpg, MUSIC_ROUTE1);
		rpg->charac.pkmn[0].life =
		(int)((float)rpg->data.pokedex[rpg->charac.pkmn[0].id].life_max
		* ((float)rpg->charac.pkmn[0].lvl / 100.0));
	}
}

void update_begin_xiii(rpg_t *rpg)
{
	if (rpg->begin.state == 23) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[5]){"Prof :\n",
		"Pour finir si tu souhaites soigner l'integralite de ton\n",
		"equipe, dirige toi dans un centre Pokemon,\n",
		"ou dans ton lit ! (Touche 'E')\n", NULL});
	} else if (rpg->begin.state == 24) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[5]){"Prof :\n",
		"Ah oui ! Tu peux prendre des photos de ton aventure\n",
		"en pressant 'P'. (/my_rpg_2017/screenshots)\n",
		"Aller...\n", NULL});
	} else
		update_begin_xiv(rpg);
}

void update_begin_xii(rpg_t *rpg)
{
	if (rpg->begin.state == 21) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[5]){"Prof :\n",
		"Pour pouvoir capturer en ayant deja 6 Pokemon,\n",
		"Il faut en liberer un. Pour cela, une fonctionnalite\n",
		"est prevue sur le dernier Pokemon equipe.\n", NULL});
	} else if (rpg->begin.state == 22) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[5]){"Prof :\n",
		"Pour se deplacer plus rapidement, tu peux\n",
		"te teleporter a l'aide de la carte, a condition\n",
		"d'avoir battu le champion local.\n", NULL});
	} else
		update_begin_xiii(rpg);
}

void update_begin_xi(rpg_t *rpg)
{
	if (rpg->begin.state == 19) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[4]){"Prof :\n",
		"Pour posseder plus de Pokemon, attrape en a l'aide\n",
		"de Pokeball. Achetables en magasin.\n", NULL});
	} else if (rpg->begin.state == 20) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[4]){"Prof :\n",
		"Il en est de meme pour les soigner",
		" a l'aide de potions.\n", NULL});
	} else
		update_begin_xii(rpg);
}

void update_begin_x(rpg_t *rpg)
{
	if (rpg->begin.state == 17) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[4]){"Prof :\n",
		"Pour pouvoir interargir avec un Personnage ou un objet,\n",
		"Presse 'E' ou la touche 'Entree'.\n", NULL});
	} else if (rpg->begin.state == 18) {
		rpg->begin.txt = 1;
		get_dialog(rpg, (char *[4]){"Prof :\n",
		"Pour afficher le menu, presse la touche 'Espace'.\n",
		"Pour quitter les fenetres, presse 'Echap'.\n", NULL});
	} else
		update_begin_xi(rpg);
}
