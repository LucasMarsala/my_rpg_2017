/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** up_sprite_intro.c
*/
#include "rpg.h"

void end_video(rpg_t *rpg)
{
	if (rpg->intro.video.r.left > 7200) {
		rpg->intro.video.r.left = 0;
		rpg->intro.video.r.top += 338;
		if (rpg->intro.video.r.top > 7098)
			rpg->scene = 1;
	}
}

void update_video(rpg_t *rpg)
{
	rpg->intro.chrono += rpg->wdw.elapsed;
	if (rpg->intro.chrono > 0.08) {
		rpg->intro.video.r.left += 600;
		end_video(rpg);
		sfSprite_setTextureRect(rpg->intro.video.s, rpg->intro.video.r);
		rpg->intro.chrono -= 0.08;
	}
}
