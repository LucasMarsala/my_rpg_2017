/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** database.c
*/
#include "rpg.h"

char *get_skill_pokemon_5(pokemon_t *pkmn, char *s)
{
	int i = 0;

	while (s[i] != '-')
		i++;
	s[i] = '\0';
	pkmn->capacities[6][0] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	pkmn->capacities[6][1] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != '-')
		i++;
	s[i] = '\0';
	pkmn->capacities[7][0] = my_getnbr(s);
	s += (i + 1);
	return (s);
}

char *get_skill_pokemon_4(pokemon_t *pkmn, char *s)
{
	int i = 0;

	while (s[i] != ':')
		i++;
	s[i] = '\0';
	pkmn->capacities[4][1] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != '-')
		i++;
	s[i] = '\0';
	pkmn->capacities[5][0] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	pkmn->capacities[5][1] = my_getnbr(s);
	s += (i + 1);
	return (s);
}

char *get_skill_pokemon_3(pokemon_t *pkmn, char *s)
{
	int i = 0;

	while (s[i] != '-')
		i++;
	s[i] = '\0';
	pkmn->capacities[3][0] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	pkmn->capacities[3][1] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != '-')
		i++;
	s[i] = '\0';
	pkmn->capacities[4][0] = my_getnbr(s);
	s += (i + 1);
	return (s);
}

char *get_skill_pokemon_2(pokemon_t *pkmn, char *s)
{
	int i = 0;

	while (s[i] != ':')
		i++;
	s[i] = '\0';
	pkmn->capacities[1][1] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != '-')
		i++;
	s[i] = '\0';
	pkmn->capacities[2][0] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	pkmn->capacities[2][1] = my_getnbr(s);
	s += (i + 1);
	return (s);
}

char *get_skill_pokemon_1(pokemon_t *pkmn, char *s)
{
	int i = 0;

	while (s[i] != '-')
		i++;
	s[i] = '\0';
	pkmn->capacities[0][0] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	pkmn->capacities[0][1] = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != '-')
		i++;
	s[i] = '\0';
	pkmn->capacities[1][0] = my_getnbr(s);
	s += (i + 1);
	return (s);
}
