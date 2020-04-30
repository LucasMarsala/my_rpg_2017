/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** data_map.c
*/
#include "rpg.h"

int btn_slot_1(rpg_t *rpg)
{
	if (rpg->start.load_or_new == 1 && rpg->data.save.empty[0] == 1)
		return (0);
	rpg->start.menu = 7;
	rpg->data.save.nb = 1;
	return (0);
}

int btn_slot_2(rpg_t *rpg)
{
	if (rpg->start.load_or_new == 1 && rpg->data.save.empty[1] == 1)
		return (0);
	rpg->start.menu = 7;
	rpg->data.save.nb = 2;
	return (0);
}

int btn_slot_3(rpg_t *rpg)
{
	if (rpg->start.load_or_new == 1 && rpg->data.save.empty[2] == 1)
		return (0);
	rpg->start.menu = 7;
	rpg->data.save.nb = 3;
	return (0);
}

int btn_slot_return(rpg_t *rpg)
{
	rpg->start.menu = 1;
	return (0);
}
