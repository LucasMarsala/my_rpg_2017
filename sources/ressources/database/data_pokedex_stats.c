/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** database.c
*/
#include "rpg.h"

char *get_stats_pokemon_next(pokemon_t *pkmn, char *s)
{
	char *tmp = my_strdup("\0");
	while (s[0] != ':') {
		tmp = my_charcat(tmp, s[0]);
		s++;
	}
	s++;
	pkmn->def = my_getnbr(tmp);
	free(tmp);
	tmp = my_strdup("\0");
	while (s[0] != ':') {
		tmp = my_charcat(tmp, s[0]);
		s++;
	}
	s++;
	pkmn->speed = my_getnbr(tmp);
	free(tmp);
	return (s);
}

char *get_stats_pokemon(pokemon_t *pkmn, char *s)
{
	char *tmp = my_strdup("\0");
	while (s[0] != ':') {
		tmp = my_charcat(tmp, s[0]);
		s++;
	}
	s++;
	pkmn->life_max = my_getnbr(tmp);
	free(tmp);
	tmp = my_strdup("\0");
	while (s[0] != ':') {
		tmp = my_charcat(tmp, s[0]);
		s++;
	}
	s++;
	pkmn->attk = my_getnbr(tmp);
	free(tmp);
	return (s);
}
