/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int btn_fight_rtrn(rpg_t *rpg)
{
	rpg->wild.state = 3;
	return (0);
}

int btn_fight_bag(rpg_t *rpg)
{
	if (rpg->data.item.potion > 0 && rpg->charac.pkmn[0].life !=
		(int)((float)rpg->data.pokedex[rpg->charac.pkmn[0].id].life_max
		* (float)(rpg->charac.pkmn[0].lvl / 100.0))) {
		rpg->charac.pkmn[0].life =
		(int)((float)rpg->data.pokedex[rpg->charac.pkmn[0].id].life_max
		* ((float)rpg->charac.pkmn[0].lvl / 100.0));
		rpg->data.item.potion--;
	}
	return (0);
}

int btn_fight_pkball(rpg_t *rpg)
{
	if (rpg->data.item.pokeball > 0 && next_free(rpg) != -1 &&
	(rpg->wild.state != 6 || rpg->wild.capt != 1)) {
		rpg->data.item.pokeball--;
		rpg->wild.pkball.p.y = -300;
		rpg->wild.pkball.p.x = 660;
		sfSprite_setPosition(rpg->wild.pkball.s, rpg->wild.pkball.p);
		rpg->wild.capt = 1;
		rpg->wild.state = 6;
	}
	return (0);
}

int btn_fight_pkmn(rpg_t *rpg)
{
	rpg->old = rpg->scene;
	rpg->scene = 5;
	return (0);
}

int btn_fight_run(rpg_t *rpg)
{
	if (rpg->wild.life != 0 && rpg->charac.pkmn[0].life != 0 &&
		rpg->wild.capt != 3) {
			chance_run(rpg);
	} else if (rpg->wild.life == 0 || rpg->charac.pkmn[0].life == 0
		|| rpg->wild.capt == 3) {
		if (rpg->charac.pkmn[0].life == 0)
			heal_team(rpg);
		end_fight(rpg);
		sfMusic_destroy(rpg->wdw.music);
		if (set_music(rpg, MUSIC_ROUTE1) == 84)
			return (84);
	}
	return (0);
}
