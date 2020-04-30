/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

int btn_city_one(rpg_t *rpg)
{
	rpg->charac.x = 238;
	rpg->charac.y = 181;
	rpg->world.map.r.left = (rpg->charac.x - 10) * 16;
	rpg->world.map.r.top = (rpg->charac.y - 7) * 16;
	world(rpg);
	return (0);
}

int btn_city_two(rpg_t *rpg)
{
	rpg->charac.x = 59;
	rpg->charac.y = 187;
	rpg->world.map.r.left = (rpg->charac.x - 10) * 16;
	rpg->world.map.r.top = (rpg->charac.y - 7) * 16;
	world(rpg);
	return (0);
}

int btn_city_three(rpg_t *rpg)
{
	rpg->charac.x = 49;
	rpg->charac.y = 52;
	rpg->world.map.r.left = (rpg->charac.x - 10) * 16;
	rpg->world.map.r.top = (rpg->charac.y - 7) * 16;
	world(rpg);
	return (0);
}

int btn_city_capital(rpg_t *rpg)
{
	rpg->charac.x = 232;
	rpg->charac.y = 62;
	rpg->world.map.r.left = (rpg->charac.x - 10) * 16;
	rpg->world.map.r.top = (rpg->charac.y - 7) * 16;
	world(rpg);
	return (0);
}

int btn_city_ligue(rpg_t *rpg)
{
	(void)rpg;
	return (0);
}
