/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void get_save_pos_and_charac(rpg_t *rpg, int fd)
{
	char *s = get_next_line(fd);
	rpg->data.item.potion = my_getnbr(s);
	s += my_intlen(rpg->data.item.potion) + 1;
	rpg->data.item.pokeball = my_getnbr(s);
	s = get_next_line(fd);
	rpg->charac.x = my_getnbr(s);
	s += my_intlen(rpg->charac.x) + 1;
	rpg->charac.y = my_getnbr(s);
	s = get_next_line(fd);
	rpg->charac.postmp[0] = my_getnbr(s);
	s += my_intlen(rpg->charac.postmp[0]) + 1;
	rpg->charac.postmp[1] = my_getnbr(s);
	rpg->world.map.r.left = (rpg->charac.x - 10) * 16;
	rpg->world.map.r.top = (rpg->charac.y - 7) * 16;
	sfSprite_setTextureRect(rpg->world.map.s, rpg->world.map.r);
	s = get_next_line(fd);
	for (int i = 0; s[0] != 'E'; i++) {
		rpg->data.trainer[i].done = my_getnbr(s);
		s += 2;
	}
}

void get_pokemon_equiped_i(rpg_t *rpg, char *s, int i)
{
	int tmp;
	rpg->charac.pkmn[i].id = my_getnbr(s);
	s += my_intlen(rpg->charac.pkmn[i].id) + 1;
	rpg->charac.pkmn[i].lvl = my_getnbr(s);
	s += my_intlen(rpg->charac.pkmn[i].lvl) + 1;
	rpg->charac.pkmn[i].life = my_getnbr(s);
	s += my_intlen(rpg->charac.pkmn[i].life) + 1;
	rpg->charac.pkmn[i].exp = my_getnbr(s);
	s += my_intlen(rpg->charac.pkmn[i].exp) + 1;
	tmp = my_getnbr(s);
	s += my_intlen(tmp) + 1;
	for (int j = 0; j < tmp; j++) {
		rpg->charac.pkmn[i].skill[j][0] = my_getnbr(s);
		s += my_intlen(rpg->charac.pkmn[i].skill[j][0]) + 1;
		rpg->charac.pkmn[i].skill[j][1] = my_getnbr(s);
		s += my_intlen(rpg->charac.pkmn[i].skill[j][1]) + 1;
	}
	rpg->charac.pkmn[i].state = my_getnbr(s);
	for (int j = tmp; j < 4; j++)
		rpg->charac.pkmn[i].skill[j][0] = -1;
}

void get_pokemon_equiped(rpg_t *rpg, int fd)
{
	char *s = get_next_line(fd);
	int nb = my_getnbr(s);
	free(s);
	rpg->charac.pkmeq = nb;
	for (int i = 0; i < nb; i++) {
		s = get_next_line(fd);
		get_pokemon_equiped_i(rpg, s, i);
		free(s);
	}
	for (int i = nb; i < 6; i++)
		rpg->charac.pkmn[i].id = -1;
}

void get_save(rpg_t *rpg)
{
	int fd;
	if (rpg->data.save.nb == 1)
		fd = open(DATA_SLOT1, O_RDONLY);
	else if (rpg->data.save.nb == 2)
		fd = open(DATA_SLOT2, O_RDONLY);
	else if (rpg->data.save.nb == 3)
		fd = open(DATA_SLOT3, O_RDONLY);
	else
		return;
	rpg->charac.name = my_strdup(get_next_line(fd));
	rpg->charac.sexe = my_getnbr(get_next_line(fd));
	rpg->world.charac.r.top = rpg->charac.sexe * 81;
	sfSprite_setTextureRect(rpg->world.charac.s, rpg->world.charac.r);
	rpg->charac.discover_pkmn = my_getnbr(get_next_line(fd));
	rpg->charac.time = my_getnbr(get_next_line(fd));
	rpg->charac.money = my_getnbr(get_next_line(fd));
	get_save_pos_and_charac(rpg, fd);
	get_pokemon_equiped(rpg, fd);
	close(fd);
}
