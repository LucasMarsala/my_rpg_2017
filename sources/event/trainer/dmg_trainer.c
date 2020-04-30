/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

void dial_adv(rpg_t *rpg, int id)
{
	if (rpg->trainers.resis > 1)
		get_dialog(rpg,
		(char *[5]){rpg->data.pokedex[rpg->trainers.pkmn[0].id].name,
		" utilise ",
		rpg->data.skill[rpg->trainers.pkmn[0].skills[id]].name,
		" !\nC'est super efficace !\n", NULL});
	else if (rpg->trainers.resis < 1)
		get_dialog(rpg,
		(char *[5]){rpg->data.pokedex[rpg->trainers.pkmn[0].id].name,
		" utilise ",
		rpg->data.skill[rpg->trainers.pkmn[0].skills[id]].name,
		" !\nCe n'est pas tres efficace !\n", NULL});
	else
		get_dialog(rpg,
		(char *[5]){rpg->data.pokedex[rpg->trainers.pkmn[0].id].name,
		" utilise ",
		rpg->data.skill[rpg->trainers.pkmn[0].skills[id]].name,
		" !\n", NULL});
}

void nb_skill_trainer(rpg_t *rpg)
{
	for (int i = 0; i < 4; i++)
		if (rpg->trainers.pkmn[0].skills[i] != -1)
			rpg->trainers.nb_skills++;
}

void dmg_adv(rpg_t *rpg)
{
	int id = 0;
	if ((rpg->trainers.dmg > 0 && rpg->trainers.pkmn[0].life > 0) ||
	(rpg->trainers.run == 1 && rpg->trainers.pkmn[0].life > 0 &&
		rpg->charac.pkmn[0].life)) {
		rpg->trainers.run = 0;
		rpg->trainers.turn = 1;
		rpg->trainers.state = 4;
		nb_skill_trainer(rpg);
		id = rand() % rpg->trainers.nb_skills;
		rpg->trainers.dmg_adv = damage(rpg,
		(int [5]){rpg->trainers.pkmn[0].id, rpg->charac.pkmn[0].id,
			rpg->trainers.pkmn[0].lvl, rpg->charac.pkmn[0].lvl,
			rpg->trainers.pkmn[0].skills[id]});
		if (rpg->trainers.dmg_adv == 0)
			rpg->trainers.dmg_adv = 1;
		dial_adv(rpg, id);
	}
}

void mouse_trainer(rpg_t *rpg)
{
	if (rpg->evt.event.type == sfEvtKeyPressed ||
		rpg->evt.mouse_press == 1) {
		rpg->trainers.state = 3;
		rpg->trainers.pkmn[0].life -= rpg->trainers.dmg;
		rpg->charac.pkmn[0].life -= rpg->trainers.dmg_adv;
		rpg->trainers.dmg_adv = 0;
		dmg_adv(rpg);
		rpg->trainers.dmg = 0;
	}
}

void dead_trainer(rpg_t *rpg)
{
	rpg->charac.money -= rpg->data.trainer[rpg->trainers.id].money;
	rpg->trainers.dead = 0;
	if (rpg->charac.money < 0)
		rpg->charac.money = 0;
	rpg->charac.x = 363;
	rpg->charac.y = 13;
	rpg->world.map.r.left = (rpg->charac.x - 10) * 16;
	rpg->world.map.r.top = (rpg->charac.y - 7) * 16;
	sfSprite_setTextureRect(rpg->world.map.s, rpg->world.map.r);
	fight_fight_run(rpg);
}
