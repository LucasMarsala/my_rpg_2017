/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void get_dialog(rpg_t *rpg, char **tab)
{
	free(rpg->dial.dial);
	free(rpg->dial.dial_tmp);
	rpg->dial.dial = my_strdup("\0");
	rpg->dial.dial_tmp = my_strdup("\0");
	for (int i = 0; tab[i] != NULL; i++)
		rpg->dial.dial = my_strcat(rpg->dial.dial, tab[i]);
	rpg->dial.dial_cpy = my_strdup(rpg->dial.dial);
	change_text(&rpg->dial.t, rpg->dial.dial_tmp);
}
