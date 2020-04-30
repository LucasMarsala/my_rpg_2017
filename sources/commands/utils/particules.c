/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

void destroy_part(part_t *buffer)
{
	if (buffer != NULL)
		free(buffer);
}

void update_particules(part_t *part)
{
	for (int i = 0; i < part->nb; i++) {
		part->v[(i * 4) + 0].position.x += part->i[i].mvt.x *
		part->i[i].spd;
		part->v[(i * 4) + 0].position.y += part->i[i].mvt.y *
		part->i[i].spd;
		part->v[(i * 4) + 1].position.x += part->i[i].mvt.x *
		part->i[i].spd;
		part->v[(i * 4) + 1].position.y += part->i[i].mvt.y *
		part->i[i].spd;
		part->v[(i * 4) + 2].position.x += part->i[i].mvt.x *
		part->i[i].spd;
		part->v[(i * 4) + 2].position.y += part->i[i].mvt.y *
		part->i[i].spd;
		part->v[(i * 4) + 3].position.x += part->i[i].mvt.x *
		part->i[i].spd;
		part->v[(i * 4) + 3].position.y += part->i[i].mvt.y *
		part->i[i].spd;
	}
}

part_t *new_part(int nb)
{
	part_t *part = malloc(sizeof(part_t));
	if (part == NULL)
		return (NULL);
	part->v = malloc(sizeof(sfVertex) * nb * 4);
	if (part->v == NULL)
		return (NULL);
	part->i = malloc(sizeof(part_info_t) * nb * 4);
	if (part->i == NULL)
		return (NULL);
	part->nb = nb;
	return (part);
}

int set_part_atk(part_t *part, sfVector2f p, int id, sfColor color)
{
	if (id >= part->nb)
		return (84);
	part->v[(id * 4) + 0].position = (sfVector2f){p.x + 0, p.y + 0};
	part->v[(id * 4) + 1].position = (sfVector2f){p.x + 32, p.y + 0};
	part->v[(id * 4) + 2].position = (sfVector2f){p.x + 32, p.y + 32};
	part->v[(id * 4) + 3].position = (sfVector2f){p.x + 0, p.y + 32};
	part->v[(id * 4) + 0].texCoords = (sfVector2f){0, 0};
	part->v[(id * 4) + 1].texCoords = (sfVector2f){0, 400};
	part->v[(id * 4) + 2].texCoords = (sfVector2f){400, 0};
	part->v[(id * 4) + 3].texCoords = (sfVector2f){0, 0};
	for (int i = 0; i < 4; i++) {
		part->v[(id * 4) + i].color = color;
	}
	return (0);
}

int set_part(part_t *part, sfVector2f p, int id, sfColor color)
{
	if (id >= part->nb)
		return (84);
	part->v[(id * 4) + 0].position = (sfVector2f){p.x + 0, p.y + 0};
	part->v[(id * 4) + 1].position = (sfVector2f){p.x + 1, p.y + 0};
	part->v[(id * 4) + 2].position = (sfVector2f){p.x + 1, p.y + 1};
	part->v[(id * 4) + 3].position = (sfVector2f){p.x + 0, p.y + 1};
	for (int i = 0; i < 4; i++) {
		part->v[(id * 4) + i].color = color;
		part->v[(id * 4) + i].color.a = 100;
	}
	return (0);
}
