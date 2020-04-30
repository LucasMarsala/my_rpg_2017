/*
** EPITECH PROJECT, 2018
** event
** File description:
** spawn_pokemon.c
*/
#include "rpg.h"

int event_begin(rpg_t *rpg)
{
	if (rpg->begin.click == 0) {
		if (rpg->evt.event.type == sfEvtKeyPressed ||
		rpg->evt.mouse_press == 1) {
			rpg->begin.txt = 0;
			rpg->begin.state++;
			rpg->begin.click = 1;
		}
	}
	return (0);
}

int boy(rpg_t *rpg)
{
	rpg->charac.name = my_strdup("Ben");
	rpg->charac.sexe = 0;
	rpg->begin.txt = 1;
	get_dialog(rpg, (char *[4]){"Prof :\n",
	"Mais oui, je te reconnais...\n",
	"Tu es le fils de Lionel ?\n", NULL});
	return (0);
}

int girl(rpg_t *rpg)
{
	rpg->charac.name = my_strdup("Tiphany");
	rpg->charac.sexe = 1;
	rpg->begin.txt = 1;
	get_dialog(rpg, (char *[4]){"Prof :\n",
	"Mais oui, je te reconnais...\n",
	"Tu es la fille de Lionel ?\n", NULL});
	rpg->world.charac.r.top = rpg->charac.sexe * 81;
	sfSprite_setTextureRect(rpg->world.charac.s, rpg->world.charac.r);
	return (0);
}

int no_info(rpg_t *rpg)
{
	rpg->charac.time = 0;
	rpg->charac.money = 0;
	rpg->charac.x = 363;
	rpg->charac.y = 12;
	rpg->world.map.r.left = (rpg->charac.x - 10) * 16;
	rpg->world.map.r.top = (rpg->charac.y - 7) * 16;
	sfSprite_setTextureRect(rpg->world.map.s, rpg->world.map.r);
	rpg->charac.postmp[0] = 238;
	rpg->charac.postmp[1] = 180;
	rpg->data.item.potion = 2;
	rpg->data.item.pokeball = 2;
	for (int i = 0; i < 3; i++) {
		rpg->data.trainer[i].done = 0;
	}
	rpg->begin.txt = 1;
	get_dialog(rpg, (char *[3]){"Prof :\n", "Tres bien !\n", NULL});
	return (0);
}

int yes_info(rpg_t *rpg)
{
	rpg->charac.time = 0;
	rpg->charac.money = 0;
	rpg->charac.x = 363;
	rpg->charac.y = 12;
	rpg->world.map.r.left = (rpg->charac.x - 10) * 16;
	rpg->world.map.r.top = (rpg->charac.y - 7) * 16;
	sfSprite_setTextureRect(rpg->world.map.s, rpg->world.map.r);
	rpg->charac.postmp[0] = 238;
	rpg->charac.postmp[1] = 180;
	rpg->data.item.potion = 2;
	rpg->data.item.pokeball = 2;
	for (int i = 0; i < 3; i++) {
		rpg->data.trainer[i].done = 0;
	}
	rpg->begin.txt = 1;
	get_dialog(rpg, (char *[2]){"Explications :\n", NULL});
	rpg->begin.state = 15;
	return (0);
}
