/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** texture_start.c
*/
#include "rpg.h"

int get_fd_save_two(rpg_t *rpg, int fd)
{
	if (rpg->data.save.nb == 3) {
		fd = open("./database/save/3.kbt", O_CREAT | O_WRONLY | O_TRUNC,
		0777);
		remove("./database/save/3.png");
		screenshot(rpg, "./database/save/3.png");
	}
	return (fd);
}
