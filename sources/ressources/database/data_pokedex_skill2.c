/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** database.c
*/
#include "rpg.h"

char *get_skill_pokemon_10(pokemon_t *pkmn, char *s)
{
	int i = 0;

	while (s[i] != ':')
		i++;
	s[i] = '\0';
	pkmn->capacities[13][1] = my_getnbr(s);
	s += (i + 1);
	return (s);
}

char *get_skill_pokemon_9(pokemon_t *pkmn, char *s)
{
	int i = 0;

	while (s[i] != '-')
		i++;
	s[i] = '\0';
	pkmn->capacities[12][0] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	pkmn->capacities[12][1] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != '-')
		i++;
	s[i] = '\0';
	pkmn->capacities[13][0] = my_getnbr(s);
	s += (i + 1);
	return (s);
}

char *get_skill_pokemon_8(pokemon_t *pkmn, char *s)
{
	int i = 0;

	while (s[i] != ':')
		i++;
	s[i] = '\0';
	pkmn->capacities[10][1] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != '-')
		i++;
	s[i] = '\0';
	pkmn->capacities[11][0] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	pkmn->capacities[11][1] = my_getnbr(s);
	s += (i + 1);
	return (s);
}

char *get_skill_pokemon_7(pokemon_t *pkmn, char *s)
{
	int i = 0;

	while (s[i] != '-')
		i++;
	s[i] = '\0';
	pkmn->capacities[9][0] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	pkmn->capacities[9][1] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != '-')
		i++;
	s[i] = '\0';
	pkmn->capacities[10][0] = my_getnbr(s);
	s += (i + 1);
	return (s);
}

char *get_skill_pokemon_6(pokemon_t *pkmn, char *s)
{
	int i = 0;

	while (s[i] != ':')
		i++;
	s[i] = '\0';
	pkmn->capacities[7][1] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != '-')
		i++;
	s[i] = '\0';
	pkmn->capacities[8][0] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	pkmn->capacities[8][1] = my_getnbr(s);
	s += (i + 1);
	return (s);
}
