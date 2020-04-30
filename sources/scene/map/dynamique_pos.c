/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void put_dynamique_position_five(rpg_t *rpg)
{
	if (rpg->charac.zone == 24) {
		rpg->map.pos.p.x = 565;
		rpg->map.pos.p.y = 247;
	}
	if (rpg->charac.zone == 25) {
		rpg->map.pos.p.x = 546;
		rpg->map.pos.p.y = 233;
	}
}

void put_dynamique_position_four(rpg_t *rpg)
{
	if (rpg->charac.zone == 20) {
		rpg->map.pos.p.x = 590;
		rpg->map.pos.p.y = 172;
	}
	if (rpg->charac.zone == 21) {
		rpg->map.pos.p.x = 607;
		rpg->map.pos.p.y = 242;
	}
	if (rpg->charac.zone <= 23 && rpg->charac.zone >= 22) {
		rpg->map.pos.p.x = 584;
		rpg->map.pos.p.y = 261;
	}
	put_dynamique_position_five(rpg);
}

void put_dynamique_position_three(rpg_t *rpg)
{
	if (rpg->charac.zone == 17) {
		rpg->map.pos.p.x = 580;
		rpg->map.pos.p.y = 113;
	}
	if (rpg->charac.zone == 18) {
		rpg->map.pos.p.x = 595;
		rpg->map.pos.p.y = 179;
	}
	if (rpg->charac.zone == 19) {
		rpg->map.pos.p.x = 609;
		rpg->map.pos.p.y = 240;
	}
	put_dynamique_position_four(rpg);
}

void put_dynamique_position_two(rpg_t *rpg)
{
	if (rpg->charac.zone >= 8 && rpg->charac.zone <= 9) {
		rpg->map.pos.p.x = 196;
		rpg->map.pos.p.y = 137;
	}
	if (rpg->charac.zone >= 11 && rpg->charac.zone <= 12) {
		rpg->map.pos.p.x = 275;
		rpg->map.pos.p.y = 100;
	}
	if (rpg->charac.zone >= 13 && rpg->charac.zone <= 15) {
		rpg->map.pos.p.x = 392;
		rpg->map.pos.p.y = 80;
	}
	if (rpg->charac.zone == 16) {
		rpg->map.pos.p.x = 482;
		rpg->map.pos.p.y = 65;
	}
	put_dynamique_position_three(rpg);
}

void put_dynamique_position(rpg_t *rpg)
{
	if (rpg->charac.zone >= 1 && rpg->charac.zone <= 2) {
		rpg->map.pos.p.x = 505;
		rpg->map.pos.p.y = 382;
	}
	if (rpg->charac.zone == 3) {
		rpg->map.pos.p.x = 396;
		rpg->map.pos.p.y = 400;
	}
	if (rpg->charac.zone >= 4 && rpg->charac.zone <= 5) {
		rpg->map.pos.p.x = 300;
		rpg->map.pos.p.y = 363;
	}
	if (rpg->charac.zone == 6) {
		rpg->map.pos.p.x = 178;
		rpg->map.pos.p.y = 346;
	}
	put_dynamique_position_two(rpg);
}
