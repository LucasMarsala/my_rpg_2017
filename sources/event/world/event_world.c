/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** event_world.c
*/
#include "rpg.h"

void interract_potion(rpg_t *rpg)
{
	char d = rpg->data.map[rpg->charac.y][rpg->charac.x];
	if (d == 'o') {
		rpg->world.dial = 1;
		if (rpg->charac.money >= 100) {
			rpg->charac.money -= 100;
			rpg->data.item.potion++;
			get_dialog(rpg,
			(char *[6]){"Vous avez achete une ",
			"Potion pour 100 Pokedollars.\n",
			"Il vous en reste : ", my_itoa(rpg->charac.money),
			" !\n", NULL});
		} else {
			get_dialog(rpg,
			(char *[3]){"Vous n'avez pas ",
			"assez d'argent !\n", NULL});
		}
	}
}

void interract_world(rpg_t *rpg)
{
	if ((sfKeyboard_isKeyPressed(sfKeyE) == 1 ||
	sfKeyboard_isKeyPressed(sfKeyReturn) == 1) &&
	(rpg->world.dial != 1 && rpg->world.dial != 2)) {
		interract_heal(rpg);
		interract_prof(rpg);
		interract_sell(rpg);
		interract_pokeball(rpg);
		interract_potion(rpg);
	}
}

void interract_menu(rpg_t *rpg)
{

	if (rpg->world.menu == 0 && rpg->world.intro_fight == 0 &&
	rpg->world.intro_trainer == 0 && rpg->world.dial == 0 &&
	(sfKeyboard_isKeyPressed(sfKeyEscape) == 1 ||
	sfKeyboard_isKeyPressed(sfKeySpace) == 1))
		rpg->world.menu = 1;
	if (rpg->world.menu == 2)
		rpg->world.menu = 3;
}

int event_world(rpg_t *rpg)
{
	world_dial(rpg);
	if (rpg->evt.event.type == sfEvtKeyPressed) {
		if (rpg->world.intro_fight != 1 && rpg->world.intro_trainer != 1
			&& rpg->world.menu == 0 && rpg->world.dir < 0) {
			move_up(rpg);
			move_down(rpg);
			move_left(rpg);
			move_right(rpg);
			interract_world(rpg);
			rpg->world.dir_len = 0;
		}
		interract_menu(rpg);
	}
	sfSprite_setTextureRect(rpg->world.charac.s, rpg->world.charac.r);
	sfSprite_setTextureRect(rpg->world.map.s, rpg->world.map.r);
	return (0);
}
