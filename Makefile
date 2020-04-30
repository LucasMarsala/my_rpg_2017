##
## EPITECH PROJECT, 2017
## my_rpg
## File description:
## Makefile
##
## ========================================================================== ##
NAME = my_rpg

CC = gcc


## ========================================================================== ##
PATH_BASICS	=	./sources/initialisation/
BASICS	=	main.c				\
		basics.c			\
		game_loop.c			\
		destroy.c			\
		destroy_two.c			\
		destroy_three.c			\
		destroy_four.c			\

## ========================================================================== ##
PATH_SAVE	=	./sources/save/
SAVE	=	save.c				\
		get_save.c			\
		save_my_game.c			\
		save_my_game_two.c		\


## ========================================================================== ##
PATH_TEXTURE	=	./sources/ressources/texture/
TEXTURE	=	texture.c			\
		texture_intro.c			\
		texture_start_two.c		\
		texture_start.c			\
		texture_world.c			\
		texture_wild.c			\
		texture_wild_two.c		\
		texture_wild_three.c		\
		texture_map.c			\
		texture_pokemon.c		\
		texture_pokemon_two.c		\
		texture_trainer.c		\
		texture_trainer_two.c		\
		texture_trainer_three.c		\
		texture_setting.c		\
		texture_pokedex.c		\
		texture_begin.c			\
		pokedex_one.c			\
		pokedex_two.c			\
		pokedex_three.c			\
		pokedex_four.c			\
		pokedex_back_one.c		\
		pokedex_back_one_cp.c		\
		pokedex_back_one_cp_two.c	\
		pokedex_back_one_cp_three.c	\

## ========================================================================== ##
PATH_DATA	=	./sources/ressources/database/
DATA	=	database.c			\
		data_map.c			\
		data_pokedex.c			\
		data_pokedex_stats.c		\
		data_pokedex_skill.c		\
		data_pokedex_skill2.c		\
		data_zone.c 			\
		data_skill.c 			\
		data_resistance.c		\
		data_teleportation.c		\
		data_trainer.c			\


## ========================================================================== ##
PATH_EVENT	=	./sources/event/
EVENT	=	button/button_menu.c		\
		button/button_slot.c		\
		button/button_world.c		\
		button/button_world_next.c	\
		button/button_fight_skill.c	\
		button/button_fight_utils.c	\
		button/trainer_utils.c		\
		button/trainer_skills.c		\
		button/damage_skill_dialog.c	\
		button/end_fight.c		\
		intro/event_intro.c		\
		start/event_start.c		\
		world/event_world.c		\
		world/event_world_next.c	\
		world/move_up.c			\
		world/move_down.c		\
		world/move_left.c		\
		world/move_right.c		\
		world/spawn_pokemon.c		\
		wild/event_wild.c		\
		wild/loop_wild.c		\
		wild/dmg_wild.c			\
		map/event_map.c			\
		map/event_map_btn.c		\
		map/event_map_tp.c		\
		pokemon/event_pokemon.c		\
		pokemon/event_pokemon_nxt.c	\
		trainer/event_trainer.c		\
		trainer/loop_trainer.c		\
		trainer/dmg_trainer.c		\
		trainer/life_trainer.c		\
		setting/event_setting.c		\
		setting/event_setting_btn.c	\
		pokedex/event_pokedex.c		\
		begin/event_begin.c		\
		begin/button_begin.c		\


## ========================================================================== ##
PATH_INTRO	=	./sources/scene/intro/
INTRO	=	intro.c				\
		up_sprite_intro.c		\


## ========================================================================== ##
PATH_START	=	./sources/scene/start/
START	=	start.c				\
		up_sprite_start.c		\
		update_menu_start.c		\
		move_start.c			\
		move_new.c			\
		move_load.c			\
		move_slot.c			\


## ========================================================================== ##
PATH_WORLD	=	./sources/scene/world/
WORLD	=	world.c				\
		intro_fight.c			\
		which_zone.c			\
		location.c			\
		update_menu_world.c		\
		display_menu_world.c		\
		remove_menu_world.c		\
		tp.c


## ========================================================================== ##
PATH_WILD	=	./sources/scene/wild/
WILD	=	wild.c				\
		begin_fight.c			\
		anim_pokemon.c			\
		update_pokemon_disp.c		\
		update_skill.c			\
		update_life.c			\
		update_stats.c			\
		fight_mode.c			\
		item_mode.c			\
		update_wild.c			\
		capture_fall.c			\


## ========================================================================== ##
PATH_MAP	=	./sources/scene/map/
MAP	=	map.c				\
		dynamique_pos.c			\



## ========================================================================== ##
PATH_PKMN	=	./sources/scene/pokemon/
PKMN	=	pokemon.c			\
		pokemon_stats_scene.c		\
		pokemon_stats_scene_next.c	\


## ========================================================================== ##
PATH_TRAINER	=	./sources/scene/trainer/
TRAINER	=	trainer.c			\
		begin_trainer.c			\
		update_pkball.c			\
		anim_pkmn_trainer.c		\
		update_stats_trainer.c		\
		update_life_trainer.c		\
		update_skill_trainer.c		\
		item_trainer.c			\
		fight_trainer.c			\
		update_trainer.c		\


## ========================================================================== ##
PATH_SETTING	=	./sources/scene/setting/
SETTING	=	setting.c			\


## ========================================================================== ##
PATH_POKEDEX	=	./sources/scene/pokedex/
POKEDEX	=	pokedex.c			\
		pokedex_text.c			\


## ========================================================================== ##
PATH_BEGIN	=	./sources/scene/begin/
BEGIN	=	begin.c				\
		anim_starter.c			\
		begin_i.c			\
		begin_ii.c			\
		begin_iii.c			\


## ========================================================================== ##
PATH_LIB	=	./sources/commands/lib/
LIB	=	str_to_word_tab.c		\
		str_to_line_tab.c		\
		strcmp.c			\
		strlen.c			\
		getnbr.c			\
		strcat.c			\
		strdup.c			\
		get_next_line.c			\
		putstr.c			\
		putnbr.c			\
		itoa.c				\
		intlen.c			\
		ftoa.c				\
		memset.c			\


## ========================================================================== ##
PATH_UTILS	=	./sources/commands/utils/
UTILS	=	new_sprite.c			\
		new_text.c			\
		modify_text.c			\
		new_button.c			\
		update_button.c			\
		screenshots.c			\
		disp_sprite.c			\
		disp_text.c			\
		swap_pokemon_equiped.c		\
		get_my_dialog.c			\
		damage.c			\
		resistance.c			\
		flux_text.c			\
		exp.c				\
		skill.c				\
		get_trainer.c			\
		aggro.c				\
		next_pkmn.c			\
		heal.c				\
		next_free.c			\
		particules.c			\
		particules_two.c		\


## ========================================================================== ##
SRC	=	$(addprefix $(PATH_BASICS), $(BASICS))		\
		$(addprefix $(PATH_TEXTURE), $(TEXTURE))	\
		$(addprefix $(PATH_SAVE), $(SAVE))		\
		$(addprefix $(PATH_DATA), $(DATA))		\
		$(addprefix $(PATH_EVENT), $(EVENT))		\
		$(addprefix $(PATH_INTRO), $(INTRO))		\
		$(addprefix $(PATH_START), $(START))		\
		$(addprefix $(PATH_WORLD), $(WORLD))		\
		$(addprefix $(PATH_WILD), $(WILD))		\
		$(addprefix $(PATH_MAP), $(MAP))		\
		$(addprefix $(PATH_PKMN), $(PKMN))		\
		$(addprefix $(PATH_TRAINER), $(TRAINER))	\
		$(addprefix $(PATH_SETTING), $(SETTING))	\
		$(addprefix $(PATH_POKEDEX), $(POKEDEX))	\
		$(addprefix $(PATH_BEGIN), $(BEGIN))		\
		$(addprefix $(PATH_LIB), $(LIB))		\
		$(addprefix $(PATH_UTILS), $(UTILS))		\


## ========================================================================== ##
REDDARK	=	\033[31;1m
RED	=	\033[31;1m
GREEN	=	\033[32;1m
YEL	=	\033[33;1m
BLUE	=	\033[34;1m
PINK	=	\033[35;1m
CYAN	=	\033[36;1m
WHITE	=	\033[0m


## ========================================================================== ##
OBJ	=	$(SRC:.c=.o)

CFLAGS = -g -I./include/ -D_GNU_SOURCE -W -Wall -Wextra -O3 -O2

LDFLAGS = -lc_graph_prog -lm lsfml-graphics -lsfml-window -lsfml-system


## ========================================================================== ##
all:	$(NAME)
	@printf "$(GREEN)\n$(WHITE)"
	@printf "$(GREEN)  [$(WHITE)MY_RPG$(GREEN)] → "
	@printf "$(WHITE)Compilation terminée. "
	@printf "$ Binaire : $(CYAN) ./%s$(WHITE)\n\n" $(NAME)

$(NAME):	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)


## ========================================================================== ##
clean:
	@rm -f $(OBJ)
	@printf "$(GREEN)\n$(WHITE)"
	@printf "$(GREEN)  [$(WHITE)MY_RPG$(GREEN)] → "
	@printf "$(WHITE)Suppression terminée.\n\n"

fclean: clean
	@rm -f *~
	@rm -f $(NAME)

re: fclean all

.PHONY: all rc clean fclean re


## ========================================================================== ##
%.o:	%.c
	@printf "$(GREEN)[$(WHITE)MY_RPG$(GREEN)] — $(WHITE)%-45s\n" $<
	@printf "$(GREEN) → $(RES) %-70s" $@
	@printf "$(GREEN)[$(WHITE)√$(GREEN)]\n\n"
	@gcc $(CFLAGS) -o $@ -c $<

## ========================================================================== ##
