/*
** EPITECH PROJECT, 2018
** event
** File description:
** tp.c
*/
#include "rpg.h"

void check_teleportation(rpg_t *rpg)
{
	for (int i = 0; i < 58; i++) {
		if (rpg->charac.x == rpg->world.tp[i][0]
		&& rpg->charac.y == rpg->world.tp[i][1]) {
			if (rpg->world.tp[i][4] == 1) {
				rpg->charac.postmp[0] = rpg->world.tp[i][0];
				rpg->charac.postmp[1] = rpg->world.tp[i][1];
			}
			rpg->charac.x = rpg->world.tp[i][2];
			rpg->charac.y = rpg->world.tp[i][3];
			rpg->world.map.r.left = (rpg->charac.x - 10) * 16;
			rpg->world.map.r.top = (rpg->charac.y - 7) * 16;
			return;
		}
	}
}

void teleport_back(rpg_t *rpg)
{
	rpg->charac.x = rpg->charac.postmp[0];
	rpg->charac.y = rpg->charac.postmp[1] + 1;
	rpg->world.map.r.left = (rpg->charac.x - 10) * 16;
	rpg->world.map.r.top = (rpg->charac.y - 7) * 16;
}

int end_move_charac(rpg_t *rpg)
{
	if (rpg->world.dir == 0)
		rpg->charac.y++;
	if (rpg->world.dir == 1)
		rpg->charac.x++;
	if (rpg->world.dir == 2)
		rpg->charac.y--;
	if (rpg->world.dir == 3)
		rpg->charac.x--;
	rpg->world.charac.r.top = rpg->charac.sexe * 81;
	if (rpg->data.map[rpg->charac.y][rpg->charac.x] == '3')
		if (spawn_pokemon(rpg, rpg->charac.zone ) == 1)
			rpg->world.intro_fight = 1;
	if (rpg->data.map[rpg->charac.y][rpg->charac.x] == '2'
	|| rpg->data.map[rpg->charac.y][rpg->charac.x] == 'P')
		check_teleportation(rpg);
	if (rpg->data.map[rpg->charac.y][rpg->charac.x] == 'E')
		teleport_back(rpg);
	return (aggro(rpg));
}
