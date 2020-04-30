/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void draw_part_atk(part_t *part, rpg_t *rpg)
{
	static sfRenderStates pnj;
	static sfTexture *texture = NULL;

	if (texture == NULL) {
		texture = sfTexture_createFromFile(PARTICLES, NULL);
	}
	pnj.shader = NULL;
	pnj.blendMode = sfBlendAlpha;
	pnj.transform = sfTransform_Identity;
	pnj.texture = texture;
	if (part != NULL) {
		sfRenderWindow_drawPrimitives(rpg->wdw.wdw, part->v,
			part->nb * 4, sfQuads, &pnj);
	}
}

void draw_part(part_t *part, rpg_t *rpg)
{
	if (part != NULL)
		sfRenderWindow_drawPrimitives(rpg->wdw.wdw, part->v,
			part->nb * 4, sfQuads, NULL);
}

part_t *create_part_atk(sfVector2f b, int nb)
{
	float nbr = 0;
	part_t *buffer = new_part(nb);

	if (!buffer)
		return (NULL);
	for (int i = 0; i < buffer->nb; i++) {
		set_part_atk(buffer, b, i, sfWhite);
		nbr = (rand() % 629) / 100.0;
		buffer->i[i].spd = ((double)(rand() % 500) / 500) + 0.5;
		buffer->i[i].mvt.x = cos(nbr);
		buffer->i[i].mvt.y = sin(nbr);
	}
	return (buffer);
}

part_t *create_part(sfVector2f b, int nb)
{
	float nbr = 0;
	part_t *buffer = new_part(nb);

	if (!buffer)
		return (NULL);
	for (int i = 0; i < buffer->nb; i++) {
		set_part(buffer, b, i, sfRed);
		nbr = (rand() % 629) / 100.0;
		buffer->i[i].spd = ((double)(rand() % 500) / 500) + 0.3;
		buffer->i[i].mvt.x = cos(nbr);
		buffer->i[i].mvt.y = sin(nbr);
	}
	return (buffer);
}
