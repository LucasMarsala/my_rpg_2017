/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

int new_trainer(trainer_t *trainer, int *coord)
{
	trainer->pos[0] = coord[0];
	trainer->pos[1] = coord[1];
	trainer->view[0] = coord[2];
	trainer->view[1] = coord[3];
	return (0);
}
