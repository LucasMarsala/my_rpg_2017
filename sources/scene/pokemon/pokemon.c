/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int next_update_pokemon(rpg_t *rpg)
{
	if (update_button(rpg, &rpg->pokemons.heal,
		rpg->evt.pos.x, rpg->evt.pos.y) == 84)
		return (84);
	if (update_button(rpg, &rpg->pokemons.rtrn,
		rpg->evt.pos.x, rpg->evt.pos.y) == 84)
		return (84);
	if (rpg->pokemons.i == rpg->charac.pkmeq - 1 && rpg->pokemons.i != 0)
		if (update_button(rpg, &rpg->pokemons.drop,
			rpg->evt.pos.x, rpg->evt.pos.y) == 84)
			return (84);
	file_stats(rpg);
	char *s = my_strdup("x ");
	change_text(&rpg->pokemons.item,
		my_strcat(s, my_itoa(rpg->data.item.potion)));
	return (0);
}

int update_pokemon(rpg_t *rpg)
{
	int nb = 0;
	for (int i = 0; i < 6; i++)
		if (rpg->charac.pkmn[i].id != -1)
			nb++;
	rpg->charac.pkmeq = nb;
	if (update_button(rpg, &rpg->pokemons.next[0],
		rpg->evt.pos.x, rpg->evt.pos.y) == 84)
		return (84);
	if (update_button(rpg, &rpg->pokemons.next[1],
		rpg->evt.pos.x, rpg->evt.pos.y) == 84)
		return (84);
	if (update_button(rpg, &rpg->pokemons.order,
		rpg->evt.pos.x, rpg->evt.pos.y) == 84)
		return (84);
	if (next_update_pokemon(rpg) == 84)
		return (84);
	return (0);
}

void render_pokemon_two(rpg_t *rpg, char *nbr, int i)
{
	for (int j = 0; j < 2; j++)
		disp_spt(rpg, rpg->pokemons.next[j].s);
	disp_spt(rpg, rpg->pokemons.order.s);
	disp_spt(rpg, rpg->pokemons.rtrn.s);
	disp_txt(rpg, rpg->pokemons.rtr.t);
	disp_spt(rpg, rpg->pokemons.heal.s);
	if (rpg->pokemons.i == rpg->charac.pkmeq - 1 && rpg->pokemons.i != 0)
		disp_spt(rpg, rpg->pokemons.drop.s);
	for (int j = 0; j < i; j++)
		disp_spt(rpg, rpg->pokemons.pkball[j].s);
	for (int j = 0; j < 4; j++) {
		if (j < 2)
			disp_txt(rpg, rpg->pokemons.btn[j].t);
		disp_txt(rpg, rpg->pokemons.skill[j].t);
		disp_txt(rpg, rpg->pokemons.stats[j].t);
	}
	sfText_setString(rpg->pokemons.nbr.t, nbr);
	disp_txt(rpg, rpg->pokemons.nbr.t);
	disp_txt(rpg, rpg->pokemons.item.t);
}

void render_pokemon(rpg_t *rpg)
{
	int i = 0;
	char *nbr = my_strdup("Numero ");
	char *buf = my_itoa(rpg->pokemons.i + 1);
	nbr = my_strcat(nbr, buf);
	free(buf);
	if (sfKeyboard_isKeyPressed(sfKeyEscape) == 1)
		rpg->scene = 2;
	disp_spt(rpg, rpg->pokemons.back.s);
	anim_pokedex_pokemon(rpg);
	for (; i < 6; i++) {
		if (rpg->charac.pkmn[i].id == -1)
			rpg->pokemons.pkball[i].r.left = 0;
		else if (rpg->charac.pkmn[i].life < 1)
			rpg->pokemons.pkball[i].r.left = 19;
		else
			rpg->pokemons.pkball[i].r.left = 38;
		sfSprite_setTextureRect(rpg->pokemons.pkball[i].s,
			rpg->pokemons.pkball[i].r);
	}
	render_pokemon_two(rpg, nbr, i);
}

int pokemon(rpg_t *rpg)
{
	if (update_pokemon(rpg) == 84)
		return (84);
	render_pokemon(rpg);
	return (0);
}
