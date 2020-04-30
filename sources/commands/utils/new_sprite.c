/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** create_sprite.c : int *dim (top, height, width, left, x , y)
** int *stats (scale.x, scale.y)
*/
#include "rpg.h"

int new_s(spt_t *spt, char *pathfile, int *dim, float *size)
{
	spt->t = sfTexture_createFromFile(pathfile, NULL);
	spt->s = sfSprite_create();
	if (!spt->t || !spt->s)
		return (84);
	spt->sc.x = size[0];
	spt->sc.y = size[1];
	spt->r.top = dim[0];
	spt->r.width = dim[1];
	spt->r.height = dim[2];
	spt->r.left = dim[3];
	spt->p.x = dim[4];
	spt->p.y = dim[5];
	sfSprite_setScale(spt->s, spt->sc);
	sfSprite_setTexture(spt->s, spt->t, 1);
	sfSprite_setPosition(spt->s, spt->p);
	sfSprite_setTextureRect(spt->s, spt->r);
	return (0);
}
