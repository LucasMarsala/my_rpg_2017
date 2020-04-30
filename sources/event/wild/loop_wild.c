/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void dial_wild(rpg_t *rpg, int id)
{
	if (rpg->wild.resis > 1)
		get_dialog(rpg,
		(char *[5]){rpg->data.pokedex[rpg->wild.id].name,
		" utilise ", rpg->data.skill[rpg->wild.skills[id]].name,
		" !\nC'est super efficace !\n", NULL});
	else if (rpg->wild.resis < 1)
		get_dialog(rpg,
		(char *[5]){rpg->data.pokedex[rpg->wild.id].name,
		" utilise ", rpg->data.skill[rpg->wild.skills[id]].name,
		" !\nCe n'est pas tres efficace !\n", NULL});
	else
		get_dialog(rpg,
		(char *[5]){rpg->data.pokedex[rpg->wild.id].name,
		" utilise ", rpg->data.skill[rpg->wild.skills[id]].name,
		" !\n", NULL});
}

void dmg_wild(rpg_t *rpg)
{
	int id = 0;
	if ((rpg->wild.dmg > 0 && rpg->wild.life > 0) || (rpg->wild.run == 1
		&& rpg->wild.life > 0 && rpg->charac.pkmn[0].life)) {
		rpg->wild.run = 0;
		rpg->wild.turn = 1;
		rpg->wild.state = 4;
		id = rand() % rpg->wild.nb_skills;
		rpg->wild.dmg_adv = damage(rpg, (int [5]){rpg->wild.id,
			rpg->charac.pkmn[0].id, rpg->wild.level,
			rpg->charac.pkmn[0].lvl, rpg->wild.skills[id]});
		if (rpg->wild.dmg_adv == 0)
			rpg->wild.dmg_adv = 1;
		dial_wild(rpg, id);
	}
}

void mouse_wild(rpg_t *rpg)
{
	if (rpg->evt.event.type == sfEvtKeyPressed ||
		rpg->evt.mouse_press == 1) {
		rpg->wild.state = 3;
		rpg->wild.life -= rpg->wild.dmg;
		rpg->charac.pkmn[0].life -= rpg->wild.dmg_adv;
		rpg->wild.dmg_adv = 0;
		dmg_wild(rpg);
		rpg->wild.dmg = 0;
	}
}

void dead_wild(rpg_t *rpg)
{
	rpg->charac.money -= rpg->wild.level;
	rpg->wild.dead = 0;
	if (rpg->charac.money < 0)
		rpg->charac.money = 0;
	rpg->charac.x = 363;
	rpg->charac.y = 13;
	rpg->world.map.r.left = (rpg->charac.x - 10) * 16;
	rpg->world.map.r.top = (rpg->charac.y - 7) * 16;
	sfSprite_setTextureRect(rpg->world.map.s, rpg->world.map.r);
	fight_fight_run(rpg);
}

void capa_wild(rpg_t *rpg)
{
	int id = rpg->charac.pkmn[0].id;
	int state = rpg->charac.pkmn[0].state;
	for (int i = 0; i < 14; i++)
		if (rpg->data.pokedex[rpg->charac.pkmn[0].id].capacities[i][0]
			== rpg->charac.pkmn[0].lvl)
			rpg->charac.pkmn[0].skill[rpg->charac.pkmn[0].state][0]
			= rpg->data.pokedex[id].capacities[i][1];
	rpg->charac.pkmn[0].skill[rpg->charac.pkmn[0].state][1] =
	rpg->data.skill[rpg->charac.pkmn[0].skill[state][0]].p_p;
	rpg->charac.pkmn[0].state++;
	if (rpg->charac.pkmn[0].state > 3)
		rpg->charac.pkmn[0].state = 0;
	rpg->wild.capa = 2;
}
