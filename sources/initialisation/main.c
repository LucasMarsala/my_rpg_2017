/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** main.c
*/
#include "rpg.h"

int main(int ac, char **av, char **envp)
{
	int check = 0;
	srand(time(NULL));
	rpg_t rpg;

	check = check_error(ac, av, envp);
	if (check != 1)
		return (check);
	if (initalisation(&rpg) == 84)
		return (84);
	if (game_loop(&rpg) == 84)
		return (84);
	return (0);
}
