/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** create_text
*/
#include "rpg.h"

int new_text(txt_t *txt, char *pathfile, char *text, int *stats)
{
	txt->f = sfFont_createFromFile(pathfile);
	txt->t = sfText_create();
	if (!txt->f || !txt->t)
		return (84);
	txt->p.x = stats[0];
	txt->p.y = stats[1];
	if (!txt->t || !txt->f)
		return (84);
	sfText_setFont(txt->t, txt->f);
	sfText_setColor(txt->t, sfBlack);
	sfText_setCharacterSize(txt->t, stats[2]);
	sfText_setString(txt->t, text);
	sfText_setPosition(txt->t, txt->p);
	return (0);
}
