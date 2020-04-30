/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int flux_text(rpg_t *rpg)
{
	char *s;
	int len = my_strlen(rpg->dial.dial_tmp);
	if (rpg->dial.chrono > rpg->dial.speed) {
		s = my_strdup(rpg->dial.dial_tmp);
		free(rpg->dial.dial_tmp);
		rpg->dial.dial_tmp = malloc(sizeof(char) * len + 2);
		for (int i = 0; i < len; i++)
			rpg->dial.dial_tmp[i] = s[i];
		rpg->dial.dial_tmp[len] = rpg->dial.dial_cpy[0];
		rpg->dial.dial_tmp[len + 1] = '\0';
		rpg->dial.dial_cpy++;
		change_text(&rpg->dial.t, rpg->dial.dial_tmp);
		rpg->dial.chrono = 0;
		free(s);
		if (my_strcmp(rpg->dial.dial, rpg->dial.dial_tmp) == 0)
			return (1);
	}
	return (0);
}
