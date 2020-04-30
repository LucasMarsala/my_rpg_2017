/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

void screenshot(rpg_t *rpg, char *pathfile)
{
	sfImage *screen = sfRenderWindow_capture(rpg->wdw.wdw);
	sfImage_saveToFile(screen, pathfile);
	sfImage_destroy(screen);
}

char *screen_add_prefix(char *path, char *nb)
{
	path = my_strdup("./screenshots/");
	path = my_strcat(path, nb);
	path = my_strcat(path, ".png");
	return (path);
}

void screenshot_everywhere(rpg_t *rpg)
{
	int fd = 0;
	int n = 1;
	char *path;
	char *nb;
	while (fd != -1) {
		nb = my_itoa(n);
		path = my_strdup("./screenshots/");
		path = my_strcat(path, nb);
		path = my_strcat(path, ".png");
		fd = open(path, O_RDONLY);
		if (fd != -1)
			n++;
		close(fd);
	}
	path = screen_add_prefix(path, nb);
	screenshot(rpg, path);
	free(path);
	free(nb);
}
