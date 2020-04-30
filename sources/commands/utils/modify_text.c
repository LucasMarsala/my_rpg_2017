/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** modify_text
*/
#include "rpg.h"

void change_text(txt_t *txt, char *pathfile)
{
	sfText_setString(txt->t, pathfile);
}
