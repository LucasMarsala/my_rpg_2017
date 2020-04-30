/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** basics.c
*/
#include "rpg.h"

int set_music(rpg_t *rpg, char *sources)
{
	rpg->wdw.music = sfMusic_createFromFile(sources);
	if (!rpg->wdw.music)
		return (84);
	sfMusic_setLoop(rpg->wdw.music, 1);
	sfMusic_setVolume(rpg->wdw.music, rpg->wdw.volume);
	sfMusic_play(rpg->wdw.music);
	return (0);
}

void initialisation_scene(rpg_t *rpg)
{
	rpg->wdw.clock = sfClock_create();
	rpg->wdw.elapsed = 0;
	rpg->wdw.volume = 25;
	rpg->scene = 0;
	rpg->quit = 0;
	rpg->evt.mouse_press = 0;
	rpg->dial.dial = my_strdup("\0");
	rpg->dial.dial_tmp = my_strdup("\0");
	rpg->dial.speed = 0.01;
	rpg->dial.chrono = 0;
}

int initalisation(rpg_t *rpg)
{
	rpg->wdw.mode.width = 840;
	rpg->wdw.mode.height = 600;
	rpg->wdw.mode.bitsPerPixel = 32;
	rpg->wdw.name = my_strdup("Pokemon Kobalt");
	rpg->wdw.wdw = sfRenderWindow_create(rpg->wdw.mode, rpg->wdw.name,
	sfClose | sfResize, NULL);
	if (!rpg->wdw.wdw)
		return (84);
	sfRenderWindow_setVerticalSyncEnabled(rpg->wdw.wdw, 1);
	initialisation_scene(rpg);
	new_text(&rpg->dial.t, FONT_PIXEL, "\0", (int [3]){30, 460, 30});
	return (0);
}

void displayh(void)
{
	write(1, "\n", 1);
	write(1, "######################\n", 23);
	write(1, "#   POKEMON KOBALT   #\n", 23);
	write(1, "######################\n", 23);
	write(1, "\n", 1);
	write(1, "'Pokemon Kobalt' est un jeu\n", 28);
	write(1, "inspiré de la célèbre licence\n", 34);
	write(1, "Pokemon. Ce jeu est fait par\n", 29);
	write(1, "des fans et n'est en rien le\n", 29);
	write(1, "résultat de leur travail.\n", 26);
	write(1, "\n", 1);
	write(1, "Pour executer le jeu :\n", 23);
	write(1, "  ./my_rpg\n", 11);
	write(1, "\n", 1);
	write(1, "Tout droits reservés à :\n", 28);
	write(1, "Kevin SPEGT\n", 12);
	write(1, "Lucas MARSALA\n", 14);
	write(1, "Corentin MATTERN\n", 17);
	write(1, "Stanislas HULOT\n", 16);
	write(1, "\n", 1);
}

int check_error(int ac, char **av, char **envp)
{
	if (envp[0] == NULL)
		return (84);
	if (ac > 1) {
		if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
			displayh();
			return (0);
		} else {
			write(2, "Too few arguments.\n", 19);
			return (84);
		}
	}
	return (1);
}
