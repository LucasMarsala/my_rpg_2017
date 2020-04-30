/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

void launch_intro_if_not_end(rpg_t *rpg, int type)
{
	if (rpg->world.fight.p.x > 0) {
		rpg->world.intro_fight = 0;
		rpg->world.fight.p.x = -6400;
		rpg->wild.ground[0].r.left = type * 320;
		rpg->wild.ground[1].r.left = type * 256;
		rpg->wild.ground[2].r.left = type * 128;
		rpg->wild.chrono = 0;
		rpg->wild.capt = 0;
		rpg->data.pokedex[rpg->wild.id].pkmn.p.x = 1300 +
		(rpg->data.pokedex[rpg->wild.id].pkmn.r.width / 2);
		rpg->data.pokedex[rpg->charac.pkmn[0].id].back.p.x = -800;
		rpg->data.pokedex[rpg->charac.pkmn[0].id].back.p.y = 110;
		rpg->scene = 3;
		rpg->wild.part = create_part_atk((sfVector2f){170, 320}, 100);
		rpg->wild.disp = 0;
	}
}

int launch_intro(rpg_t *rpg)
{
	int type = rpg->data.zone[rpg->charac.zone].type;
	rpg->world.fight.p.x += 5000 * rpg->wdw.elapsed;
	launch_intro_if_not_end(rpg, type);
	sfSprite_setPosition(rpg->world.fight.s, rpg->world.fight.p);
	sfSprite_setPosition(rpg->data.pokedex[rpg->charac.pkmn[0].id].back.s,
		rpg->data.pokedex[rpg->charac.pkmn[0].id].back.p);
	for (int i = 0; i < 3; i++)
		sfSprite_setTextureRect(rpg->wild.ground[i].s,
			rpg->wild.ground[i].r);
	return (0);
}

void launch_trainer_boucle(rpg_t *rpg)
{
	int id;
	for (int i = 0; i < 6; i++) {
		rpg->trainers.pkmn[i].id =
		rpg->data.trainer[rpg->trainers.id].pkmn[i][0];
		rpg->trainers.pkmn[i].lvl =
		rpg->data.trainer[rpg->trainers.id].pkmn[i][1];
		if (rpg->trainers.pkmn[i].id != -1) {
			id = rpg->trainers.pkmn[i].id;
			rpg->trainers.pkmn[i].life =
			(int)((float)rpg->data.pokedex[id].life_max *
			((float)rpg->trainers.pkmn[i].lvl / 100.0));
			rpg->trainers.pkmn[i].skills =
			skill(rpg, rpg->trainers.pkmn[i].id,
				rpg->trainers.pkmn[i].lvl);
		}
	}
}

void launch_trainer_if_not_end(rpg_t *rpg, int type)
{
	rpg->world.intro_trainer = 0;
	rpg->world.fight.p.x = -6400;
	rpg->trainers.ground[0].r.left = type * 320;
	rpg->trainers.ground[1].r.left = type * 256;
	rpg->trainers.ground[2].r.left = type * 128;
	rpg->wild.part = create_part((sfVector2f){170, 320}, 2500);
	rpg->wild.disp = 0;
	launch_trainer_boucle(rpg);
	rpg->trainers.chrono = 0;
	rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.p.x = 1300 +
	(rpg->data.pokedex[rpg->trainers.pkmn[0].id].pkmn.r.width / 2);
	rpg->data.pokedex[rpg->charac.pkmn[0].id].back.p.x = -800;
	rpg->data.pokedex[rpg->charac.pkmn[0].id].back.p.y = 110;
	rpg->scene = 6;
}

int launch_trainer(rpg_t *rpg)
{
	int id;
	int type = rpg->data.zone[rpg->charac.zone].type;
	rpg->world.fight.p.x += 5000 * rpg->wdw.elapsed;
	if (rpg->world.fight.p.x > 0) {
		launch_trainer_if_not_end(rpg, type);
		sfMusic_destroy(rpg->wdw.music);
		if (set_music(rpg, MUSIC_WILD) == 84)
			return (84);
		id = rpg->trainers.pkmn[0].id;
		sfSprite_setPosition(rpg->data.pokedex[id].pkmn.s,
			rpg->data.pokedex[id].pkmn.p);
		id = rpg->charac.pkmn[0].id;
		sfSprite_setPosition(rpg->data.pokedex[id].back.s,
			rpg->data.pokedex[id].back.p);
	}
	sfSprite_setPosition(rpg->world.fight.s, rpg->world.fight.p);
	for (int i = 0; i < 3; i++)
		sfSprite_setTextureRect(rpg->trainers.ground[i].s,
			rpg->trainers.ground[i].r);
	return (0);
}
