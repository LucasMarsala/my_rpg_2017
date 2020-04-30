/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** database.c
*/
#include "rpg.h"

char *get_num_name_pokemon(pokemon_t *pkmn, char *s)
{
	char *tmp = my_strdup("\0");
	while (s[0] != ':') {
		tmp = my_charcat(tmp, s[0]);
		s++;
	}
	s++;
	pkmn->num = my_getnbr(tmp);
	free(tmp);
	tmp = my_strdup("\0");
	while (s[0] != ':') {
		tmp = my_charcat(tmp, s[0]);
		s++;
	}
	s++;
	pkmn->name = my_strdup(tmp);
	free(tmp);
	return (s);
}

char *get_type_pokemon(pokemon_t *pkmn, char *s)
{
	char *tmp = my_strdup("\0");
	while (s[0] != ':') {
		tmp = my_charcat(tmp, s[0]);
		s++;
	}
	s++;
	pkmn->first_type = my_getnbr(tmp);
	free(tmp);
	tmp = my_strdup("\0");
	while (s[0] != ':') {
		tmp = my_charcat(tmp, s[0]);
		s++;
	}
	s++;
	pkmn->second_type = my_getnbr(tmp);
	free(tmp);
	return (s);
}

char *get_level_comment_pokemon(pokemon_t *pkmn, char *s)
{
	char *tmp = my_strdup("\0");
	while (s[0] != ':') {
		tmp = my_charcat(tmp, s[0]);
		s++;
	}
	s++;
	pkmn->evolve = my_getnbr(tmp);
	free(tmp);
	tmp = my_strdup("\0");
	while (s[0] != ':') {
		tmp = my_charcat(tmp, s[0]);
		s++;
	}
	s++;
	pkmn->comment = my_strdup(tmp);
	free(tmp);
	return (s);
}

void parsing_pokedex(pokemon_t *pkmn, char *s)
{
	s = get_num_name_pokemon(pkmn, s);
	s = get_type_pokemon(pkmn, s);
	s = get_level_comment_pokemon(pkmn, s);
	s = get_stats_pokemon(pkmn, s);
	s = get_stats_pokemon_next(pkmn, s);
	s = get_skill_pokemon_1(pkmn, s);
	s = get_skill_pokemon_2(pkmn, s);
	s = get_skill_pokemon_3(pkmn, s);
	s = get_skill_pokemon_4(pkmn, s);
	s = get_skill_pokemon_5(pkmn, s);
	s = get_skill_pokemon_6(pkmn, s);
	s = get_skill_pokemon_7(pkmn, s);
	s = get_skill_pokemon_8(pkmn, s);
	s = get_skill_pokemon_9(pkmn, s);
	s = get_skill_pokemon_10(pkmn, s);
}

int data_pokedex(rpg_t *rpg)
{
	char *s;
	int fd = open(DATA_POKEDEX, O_RDONLY);
	void *ptr;
	if (fd == -1)
		return (84);
	for (int i = 1; (s = get_next_line(fd)) != NULL; i++) {
		ptr = s;
		parsing_pokedex(&rpg->data.pokedex[i], s);
		free(ptr);
	}
	close(fd);
	return (0);
}
