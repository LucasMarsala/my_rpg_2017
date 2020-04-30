/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int chance_run(rpg_t *rpg)
{
	if (rand() % 2 == 0) {
		end_fight(rpg);
		sfMusic_destroy(rpg->wdw.music);
		if (set_music(rpg, MUSIC_ROUTE1) == 84)
			return (84);
	} else {
		rpg->wild.state = 4;
		rpg->wild.run = 1;
		get_dialog(rpg, (char *[2]){"Impossible de fuir !\n", NULL});
	}
	return (0);
}

int end_fight(rpg_t *rpg)
{
	rpg->scene = 2;
	rpg->wild.ground[1].p.x = -500;
	rpg->wild.ground[2].p.x = 1250;
	rpg->wild.skill[4].p.y = 448;
	rpg->wild.block[1].p.y = 847;
	rpg->wild.block[2].p.y = 847;
	rpg->wild.rtrn.p.y = 880;
	rpg->wild.btn[4].p.y = 473;
	rpg->wild.btn[5].p.y = 890;
	rpg->wild.state = 0;
	sfSprite_setPosition(rpg->wild.ground[1].s, rpg->wild.ground[1].p);
	sfSprite_setPosition(rpg->wild.ground[2].s, rpg->wild.ground[2].p);
	sfSprite_setPosition(rpg->wild.skill[4].s, rpg->wild.skill[4].p);
	sfSprite_setPosition(rpg->wild.block[1].s, rpg->wild.block[1].p);
	sfSprite_setPosition(rpg->wild.block[2].s, rpg->wild.block[2].p);
	sfSprite_setPosition(rpg->wild.rtrn.s, rpg->wild.rtrn.p);
	sfText_setPosition(rpg->wild.btn[4].t, rpg->wild.btn[4].p);
	sfText_setPosition(rpg->wild.btn[5].t, rpg->wild.btn[5].p);
	return (0);
}
