/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** start.c
*/
#include "rpg.h"

int activate_button(rpg_t *rpg, btn_t *btn)
{
	if (rpg->evt.mouse_press == 1) {
		btn->r.left = btn->r.width * 2;
	} else if (rpg->evt.event.mouseButton.type ==
		sfEvtMouseButtonReleased) {
		if ((btn->fct)(rpg) == 84)
			return (84);
		btn->r.left = btn->r.width;
		memset(&rpg->evt.event, 0, sizeof(rpg->evt.event));
	} else
		btn->r.left = btn->r.width;
	return (0);
}

int update_button(rpg_t *rpg, btn_t *btn, int x, int y)
{
	sfVector2u s = sfRenderWindow_getSize(rpg->wdw.wdw);
	float sx = s.x / 840.0;
	float sy = s.y / 600.0;
	if (((float)x >= (float)btn->p.x * sx && (float)x <= ((float)btn->p.x +
		(float)btn->r.width * (float)btn->sc.x) * sx) && ((float)y >=
		(float)btn->p.y  * sy && (float)y <= ((float)btn->p.y +
		(float)btn->r.height * (float)btn->sc.y) * sy)) {
			if (activate_button(rpg, btn) == 84)
				return (84);
	} else
		btn->r.left = 0;
	sfSprite_setTextureRect(btn->s, btn->r);
	return (0);
}
