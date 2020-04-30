/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** database.c
*/
#include "rpg.h"

char *get_skill_name(skill_t *skill, char *s)
{
	int i = 0;

	while (s[i] != ':')
		i++;
	s[i] = '\0';
	skill->num = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	skill->name = my_strdup(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	skill->type_attack = my_getnbr(s);
	s += (i + 1);
	return (s);
}

char *get_skill_effect(skill_t *skill, char *s)
{
	int i = 0;

	while (s[i] != ':')
		i++;
	s[i] = '\0';
	skill->power_attack = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	skill->type_effect = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	skill->power_effect = my_getnbr(s);
	s += (i + 1);
	return (s);
}

char *get_skill_detail(skill_t *skill, char *s)
{
	int i = 0;

	while (s[i] != ':')
		i++;
	s[i] = '\0';
	skill->p_p = my_getnbr(s);
	s += (i + 1);
	i = 0;
	while (s[i] != ':')
		i++;
	s[i] = '\0';
	skill->desc = my_strdup(s);
	s += (i + 1);
	return (s);
}

void parsing_skill(skill_t *skill, char *s)
{
	s = get_skill_name(skill, s);
	s = get_skill_effect(skill, s);
	s = get_skill_detail(skill, s);
}

int data_skill(rpg_t *rpg)
{
	char *s;
	int fd = open(DATA_SKILL, O_RDONLY);
	void *ptr;

	if (fd == -1)
		return (84);
	for (int i = 0; (s = get_next_line(fd)) != NULL; i++) {
		ptr = s;
		parsing_skill(&rpg->data.skill[i], s);
		free(ptr);
	}
	close(fd);
	return (0);
}
