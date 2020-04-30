/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

void world_dial(rpg_t *rpg)
{
	if (rpg->world.dial == 2)
		if (rpg->evt.event.type == sfEvtKeyPressed ||
			rpg->evt.mouse_press == 1)
			rpg->world.dial = 0;
}

void interract_heal(rpg_t *rpg)
{
	char d = rpg->data.map[rpg->charac.y][rpg->charac.x];
	if (d == 'S') {
		heal_team(rpg);
		rpg->world.dial = 1;
		get_dialog(rpg,
		(char *[2]){"Vos pokemons sont maintenant retablis !\n", NULL});
	}
}

void interract_prof(rpg_t *rpg)
{
	char c = rpg->data.map[rpg->charac.y - 1][rpg->charac.x];
	if (c == 'p') {
		rpg->world.dial = 1;
		get_dialog(rpg, (char *[4]){"Professeur Kannabhis :\n",
		"Fonce attraper les Pokemons du monde entier !\n",
		"Remplis donc le Pokedex !\n", NULL});
	}
}

void interract_sell(rpg_t *rpg)
{
	char d = rpg->data.map[rpg->charac.y][rpg->charac.x];
	if (d == 's') {
		rpg->world.dial = 1;
		get_dialog(rpg,
		(char *[5]){"Vendeuse :\n",
		"Pour acheter des Potions & Pokeballs,\n",
		"selectionnez ceux du contoir.\n",
		"La pokeball est a 150 Pokedollar et la potion a 100.", NULL});
	}
}

void interract_pokeball(rpg_t *rpg)
{
	char d = rpg->data.map[rpg->charac.y][rpg->charac.x];
	if (d == 'O') {
		rpg->world.dial = 1;
		if (rpg->charac.money >= 150) {
			rpg->charac.money -= 150;
			rpg->data.item.pokeball++;
			get_dialog(rpg,
			(char *[6]){"Vous avez achete une Pokeball",
			" pour 150 Pokedollars.\n", "Il vous en reste : ",
			my_itoa(rpg->charac.money), " !\n", NULL});
		} else {
			get_dialog(rpg,
			(char *[3]){"Vous n'avez pas",
			" assez d'argent !\n", NULL});
		}
	}
}
