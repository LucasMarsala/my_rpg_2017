/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

int btn_snd_four(rpg_t *rpg)
{
	rpg->wdw.volume = 100;
	sfMusic_setVolume(rpg->wdw.music, rpg->wdw.volume);
	return (0);
}

int btn_snd_three(rpg_t *rpg)
{
	rpg->wdw.volume = 50;
	sfMusic_setVolume(rpg->wdw.music, rpg->wdw.volume);
	return (0);
}

int btn_snd_two(rpg_t *rpg)
{
	rpg->wdw.volume = 25;
	sfMusic_setVolume(rpg->wdw.music, rpg->wdw.volume);
	return (0);
}

int btn_snd_one(rpg_t *rpg)
{
	rpg->wdw.volume = 0;
	sfMusic_setVolume(rpg->wdw.music, rpg->wdw.volume);
	return (0);
}

int event_setting(rpg_t *rpg)
{
	(void)rpg;
	return (0);
}
