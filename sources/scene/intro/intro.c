/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** intro..c
*/
#include "rpg.h"

int update_intro(rpg_t *rpg)
{
	update_video(rpg);
	return (0);
}

void render_intro(rpg_t *rpg)
{
	sfRenderWindow_drawSprite(rpg->wdw.wdw, rpg->intro.video.s, NULL);
}

int intro(rpg_t *rpg)
{
	if (update_intro(rpg) == 84)
		return (84);
	render_intro(rpg);
	return (0);
}
