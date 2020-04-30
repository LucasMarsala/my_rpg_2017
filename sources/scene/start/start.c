/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** start.c
*/
#include "rpg.h"

int update_start(rpg_t *rpg)
{
	update_pkmn_background(rpg);
	update_key(rpg);
	update_menu_start(rpg);
	return (0);
}

void render_start_next(rpg_t *rpg)
{
	sfRenderWindow_drawText(rpg->wdw.wdw, rpg->start.txt[0].t, NULL);
	sfRenderWindow_drawText(rpg->wdw.wdw, rpg->start.txt[1].t, NULL);
	sfRenderWindow_drawText(rpg->wdw.wdw, rpg->start.txt[2].t, NULL);
	sfRenderWindow_drawText(rpg->wdw.wdw, rpg->start.txt[3].t, NULL);
	sfRenderWindow_drawText(rpg->wdw.wdw, rpg->start.txt[4].t, NULL);
	sfRenderWindow_drawText(rpg->wdw.wdw, rpg->start.desc[0].t, NULL);
	sfRenderWindow_drawText(rpg->wdw.wdw, rpg->start.desc[1].t, NULL);
	sfRenderWindow_drawText(rpg->wdw.wdw, rpg->start.desc[2].t, NULL);
	if (rpg->data.save.empty[0] == 0)
		sfRenderWindow_drawSprite(rpg->wdw.wdw, rpg->start.min[0].s, 0);
	if (rpg->data.save.empty[1] == 0)
		sfRenderWindow_drawSprite(rpg->wdw.wdw, rpg->start.min[1].s, 0);
	if (rpg->data.save.empty[2] == 0)
		sfRenderWindow_drawSprite(rpg->wdw.wdw, rpg->start.min[2].s, 0);
	if (rpg->data.save.empty[0] == 1)
		sfRenderWindow_drawText(rpg->wdw.wdw, rpg->start.empty[0].t, 0);
	if (rpg->data.save.empty[1] == 1)
		sfRenderWindow_drawText(rpg->wdw.wdw, rpg->start.empty[1].t, 0);
	if (rpg->data.save.empty[2] == 1)
		sfRenderWindow_drawText(rpg->wdw.wdw, rpg->start.empty[2].t, 0);
}

void render_start(rpg_t *rpg)
{
	sfRenderWindow_drawSprite(rpg->wdw.wdw, rpg->start.spt[0].s, 0);
	sfRenderWindow_drawSprite(rpg->wdw.wdw, rpg->start.spt[4].s, 0);
	sfRenderWindow_drawSprite(rpg->wdw.wdw, rpg->start.spt[1].s, 0);
	sfRenderWindow_drawSprite(rpg->wdw.wdw, rpg->start.spt[2].s, 0);
	if (rpg->start.menu == 0)
		sfRenderWindow_drawSprite(rpg->wdw.wdw, rpg->start.spt[3].s, 0);
	sfRenderWindow_drawSprite(rpg->wdw.wdw, rpg->start.btn[0].s, 0);
	sfRenderWindow_drawSprite(rpg->wdw.wdw, rpg->start.btn[1].s, 0);
	sfRenderWindow_drawSprite(rpg->wdw.wdw, rpg->start.btn[2].s, 0);
	sfRenderWindow_drawSprite(rpg->wdw.wdw, rpg->start.btn[3].s, 0);
	sfRenderWindow_drawSprite(rpg->wdw.wdw, rpg->start.slot[0].s, 0);
	sfRenderWindow_drawSprite(rpg->wdw.wdw, rpg->start.slot[1].s, 0);
	sfRenderWindow_drawSprite(rpg->wdw.wdw, rpg->start.slot[2].s, 0);
	sfRenderWindow_drawSprite(rpg->wdw.wdw, rpg->start.slot[3].s, 0);
}

int start(rpg_t *rpg)
{
	if (update_start(rpg) == 84)
		return (84);
	render_start(rpg);
	render_start_next(rpg);
	return (0);
}
