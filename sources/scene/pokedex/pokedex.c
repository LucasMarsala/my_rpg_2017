/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture.c
*/
#include "rpg.h"

int update_pokedex(rpg_t *rpg)
{
	if (update_button(rpg, &rpg->pokedex.next[0],
		rpg->evt.pos.x, rpg->evt.pos.y) == 84)
		return (84);
	if (update_button(rpg, &rpg->pokedex.next[1],
		rpg->evt.pos.x, rpg->evt.pos.y) == 84)
		return (84);
	if (update_button(rpg, &rpg->pokedex.rtrn,
		rpg->evt.pos.x, rpg->evt.pos.y) == 84)
		return (84);
	return (0);
}

void render_pokedex(rpg_t *rpg)
{
	if (sfKeyboard_isKeyPressed(sfKeyEscape) == 1)
		rpg->scene = 2;
	disp_spt(rpg, rpg->pokedex.back.s);
	disp_spt(rpg, rpg->pokedex.rtrn.s);
	for (int j = 0; j < 2; j++)
		disp_spt(rpg, rpg->pokedex.next[j].s);
	disp_txt(rpg, rpg->pokedex.rtr.t);
	for (int i = 1; i < 67; i++) {
		if (rpg->pokedex.i == rpg->data.pokedex[i].num) {
			print_this_pkmn(rpg, i);
			get_stats(rpg, i);
			get_desc(rpg, i);
			break;
		}
	}
}

int pokedex(rpg_t *rpg)
{
	if (update_pokedex(rpg) == 84)
		return (84);
	render_pokedex(rpg);
	return (0);
}
