/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** create_sprite.c : int *dim (top, height, width, left, x , y)
** int *stats (scale.x, scale.y)
*/
#include "rpg.h"

int new_button(btn_t *btn, int (*fct)(rpg_t *), char *pathfile, float *dim)
{
	btn->t = sfTexture_createFromFile(pathfile, NULL);
	btn->s = sfSprite_create();
	if (!btn->t || !btn->s)
		return (84);
	btn->r.top = (int)dim[0];
	btn->r.width = (int)dim[1];
	btn->r.height = (int)dim[2];
	btn->r.left = (int)dim[3];
	btn->p.x = (int)dim[4];
	btn->p.y = (int)dim[5];
	btn->sc.x = dim[6];
	btn->sc.y = dim[7];
	btn->fct = fct;
	sfSprite_setScale(btn->s, btn->sc);
	sfSprite_setTexture(btn->s, btn->t, 1);
	sfSprite_setPosition(btn->s, btn->p);
	sfSprite_setTextureRect(btn->s, btn->r);
	return (0);
}
