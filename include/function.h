/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** function.c
*/
#ifndef FUNCTION_H
	#define FUNCTION_H

	/****************\
	*     BASICS     *
	\****************/

// oO BASICS Oo
//BASICS
void displayh(void);
void init_struct(rpg_t *);
int initalisation(rpg_t *);
int set_music(rpg_t *, char *);
int check_error(int, char **, char **);

//DESTROY
int destroy(rpg_t *);
int destroy_speech_trainer(rpg_t *);
void destroy_intro(rpg_t *);
void destroy_start(rpg_t *);
void destroy_world(rpg_t *);
void destroy_pokedex(rpg_t *);
void destroy_trainers(rpg_t *);
void destroy_pokemons(rpg_t *);
void destroy_wild(rpg_t *);
void destroy_text(rpg_t *);
void free_strings(rpg_t *);
void destroy_settings(rpg_t *);
void destroy_map(rpg_t *);
void destroy_wild_three(rpg_t *);
void destroy_wild_two(rpg_t *);
void destroy_pokemons_two(rpg_t *);
void destroy_trainers_two(rpg_t *);
void destroy_trainers_three(rpg_t *);
void destroy_text_two(rpg_t *);
void destroy_begin(rpg_t *);

//GAME_LOOP
int game_loop(rpg_t *);
int manage_event(rpg_t *);


	/****************\
	*    COMMANDS    *
	\****************/

// oO UTILS Oo
void screenshot(rpg_t *, char *);
void disp_txt(rpg_t *, sfText *);
void change_text(txt_t *, char *);
void disp_spt(rpg_t *, sfSprite *);
void screenshot_everywhere(rpg_t *);
void swap_pokemon_equiped(pkmn_t *, pkmn_t *);
void swap_pokemon_adv(pkmn_t *, pkmn_t *);
int new_s(spt_t *, char *, int *, float *);
int new_text(txt_t *, char *, char *, int *);
int update_button(rpg_t *, btn_t *, int, int);
int new_button(btn_t *, int (*)(rpg_t *), char *, float *);
float resistance(rpg_t *, int, int);
int damage(rpg_t *, int *);
int flux_text(rpg_t *);
void get_dialog(rpg_t *, char **);
int xp(int, int);
int *skill(rpg_t *, int, int);
part_t *new_part(int);
int set_part(part_t *, sfVector2f, int, sfColor);
int set_part_atk(part_t *, sfVector2f, int, sfColor);
void draw_part(part_t *, rpg_t *);
void draw_part_atk(part_t *, rpg_t *);
part_t *create_part(sfVector2f, int);
part_t *create_part_atk(sfVector2f, int);
void update_particules(part_t *);
void destroy_part(part_t *);
int new_trainer(trainer_t *, int *);
int aggro(rpg_t *);
int count_adv(rpg_t *);
int next_adv(rpg_t *);
int count_pkmn(rpg_t *);
int next_pkmn(rpg_t *);
void heal_team(rpg_t *);
int next_free(rpg_t *);
void new_pkmn(rpg_t *, int);

// oO LIB Oo
void my_putnbr(int);
void my_putchar(char);
void my_putstr(char *);
int my_intlen(int);
int my_strlen(char *);
int my_getnbr(char *);
int my_strcmp(char *, char *);
char *my_itoa(int);
char *my_ftoa(float);
char *my_strdup(char *);
char *get_next_line(int);
char *my_charcat(char *, char);
char *my_strcat(char *, char *);
char **my_str_to_word_tab(char *);
char **my_str_to_line_tab(char *);
void *my_memset(char *, int, int);


	/****************\
	*    TEXTURE     *
	\****************/

// oO TEXTURE Oo
int texture(rpg_t *);

// oO TEXTURE_INTRO Oo
int texture_intro(rpg_t *);

// oO TEXTURE_START Oo
int texture_start(rpg_t *);
int texture_start_six(rpg_t *);

// oO TEXTURE_WORLD Oo
int texture_world(rpg_t *);

// oO TEXTURE_WILD Oo
int texture_wild(rpg_t *);
int texture_wild_six(rpg_t *);
int texture_wild_eleven(rpg_t *);
// oO TEXTURE_MAP Oo
int texture_map(rpg_t *);

// oO TEXTURE_POKEMON Oo
int texture_pokemon(rpg_t *);
int texture_pokemon_six(rpg_t *);
// oO TEXTURE_TRAINER Oo
int texture_trainer(rpg_t *);
int texture_trainer_six(rpg_t *);
int texture_trainer_eleven(rpg_t *);
// oO TEXTURE_SETTING Oo
int texture_setting(rpg_t *);

// oO TEXTURE_POKEDEX Oo
int texture_pokedex(rpg_t *);
int prev_pokedex_btn(rpg_t *);
int next_pokedex_btn(rpg_t *);
int return_pokedex_btn(rpg_t *);

// oO TEXTURE_BEGIN Oo
int texture_begin(rpg_t *);

// oO TEXTURE_POLEMON Oo
int texture_pokemon_1_4(rpg_t *);
int texture_pokemon_5_8(rpg_t *);
int texture_pokemon_9_12(rpg_t *);
int texture_pokemon_13_16(rpg_t *);
int texture_pokemon_17_20(rpg_t *);
int texture_pokemon_21_24(rpg_t *);
int texture_pokemon_25_28(rpg_t *);
int texture_pokemon_29_32(rpg_t *);
int texture_pokemon_33_36(rpg_t *);
int texture_pokemon_37_40(rpg_t *);
int texture_pokemon_41_44(rpg_t *);
int texture_pokemon_45_48(rpg_t *);
int texture_pokemon_49_52(rpg_t *);
int texture_pokemon_53_56(rpg_t *);
int texture_pokemon_57_60(rpg_t *);
int texture_pokemon_61_64(rpg_t *);
int texture_pokemon_65_68(rpg_t *);
int texture_pokemon_69_72(rpg_t *);
int texture_pokemon_73_76(rpg_t *);
int texture_pokemon_77_78(rpg_t *);
int texture_back_pokemon_1_4(rpg_t *);
int texture_back_pokemon_25_29(rpg_t *);
int texture_back_pokemon_50_54(rpg_t *);
int texture_back_pokemon_75_79(rpg_t *);


	/****************\
	*    DATABASE    *
	\****************/

int database(rpg_t *);

// oO MAP Oo
int data_map(rpg_t *);

// oO POKEDEX Oo
void parsing_pokedex(pokemon_t *, char *);
int data_pokedex(rpg_t *);
char *get_type_pokemon(pokemon_t *, char *);
char *get_num_name_pokemon(pokemon_t *, char *);
char *get_level_comment_pokemon(pokemon_t *, char *);
char *get_stats_pokemon(pokemon_t *, char *);
char *get_stats_pokemon_next(pokemon_t *pkmn, char *s);
char *get_skill_pokemon_1(pokemon_t *pkmn, char *s);
char *get_skill_pokemon_2(pokemon_t *pkmn, char *s);
char *get_skill_pokemon_3(pokemon_t *pkmn, char *s);
char *get_skill_pokemon_4(pokemon_t *pkmn, char *s);
char *get_skill_pokemon_5(pokemon_t *pkmn, char *s);
char *get_skill_pokemon_6(pokemon_t *pkmn, char *s);
char *get_skill_pokemon_7(pokemon_t *pkmn, char *s);
char *get_skill_pokemon_8(pokemon_t *pkmn, char *s);
char *get_skill_pokemon_9(pokemon_t *pkmn, char *s);
char *get_skill_pokemon_10(pokemon_t *pkmn, char *s);

// oO ZONE Oo
void get_type_and_name_pkmn_zone(zone_t *, char *);
int data_zone(rpg_t *);
char *get_panel_pkmn_zone(zone_t *, char *);
char *get_lvl_and_nbpkm_zone(zone_t *, char *);
char *get_position_pkmn_zone(zone_t *, char *);

// oO SKILLS Oo
void parsing_skill(skill_t *, char *);
int data_skill(rpg_t *);
char *get_skill_name(skill_t *, char *);
char *get_skill_detail(skill_t *, char *);
char *get_skill_effect(skill_t *, char *);

// oO Resistance Oo
int data_resistance(rpg_t *);

// oO Position Oo
int data_teleportation(rpg_t *);
void get_tp_position(rpg_t *, char *, int);

// oO Trainer Oo
int data_trainer(rpg_t *);


	/****************\
	*      SAVE      *
	\****************/

int save(rpg_t *);
void is_save(rpg_t *);
void get_save(rpg_t *);
void get_info_save(rpg_t *, int, int, int);
void transform_time(rpg_t *, int, int *);
void get_save_pos_and_charac(rpg_t *, int);
void save_my_game(rpg_t *);
void save_my_charac_informations(rpg_t *, char *, int, int);
char *save_my_team(rpg_t *, char *, int);
int get_fd_save_two(rpg_t *, int );


	/****************\
	*     EVENT      *
	\****************/

// oO BUTTON Oo
int btn_map(rpg_t *);
int btn_bag(rpg_t *);
int btn_save(rpg_t *);
int btn_slot_1(rpg_t *);
int btn_slot_2(rpg_t *);
int btn_slot_3(rpg_t *);
int btn_setting(rpg_t *);
int btn_pokemon(rpg_t *);
int btn_pokedex(rpg_t *);
int btn_new_game(rpg_t *);
int btn_settings(rpg_t *);
int btn_load_game(rpg_t *);
int btn_quit_game(rpg_t *);
int btn_slot_return(rpg_t *);
int btn_skill_1(rpg_t *);
int btn_skill_2(rpg_t *);
int btn_skill_3(rpg_t *);
int btn_skill_4(rpg_t *);
int btn_skill_btn(rpg_t *);
int btn_fight_bag(rpg_t *);
int btn_fight_pkball(rpg_t *);
int btn_fight_pkmn(rpg_t *);
int btn_fight_run(rpg_t *);
int btn_fight_rtrn(rpg_t *);
void dialog_skill(rpg_t *, int);
int end_fight(rpg_t *);
int chance_run(rpg_t *);

// oO INTRO Oo
int event_intro(rpg_t *);

// oO START Oo
int event_start(rpg_t *);

// oO WORLD Oo
void move_up(rpg_t *);
void move_down(rpg_t *);
void move_left(rpg_t *);
void move_right(rpg_t *);
int event_world(rpg_t *);
void spawn_done(rpg_t *, int);
int spawn_pokemon(rpg_t *, int);
void teleport_back(rpg_t *);
void check_teleportation(rpg_t *);
void world_dial(rpg_t *);
void interract_heal(rpg_t *);
void interract_prof(rpg_t *);
void interract_sell(rpg_t *);
void interract_pokeball(rpg_t *);
void interract_potion(rpg_t *);
void interract_world(rpg_t *);
void interract_menu(rpg_t *);
int end_move_charac(rpg_t *);

// oO WILD Oo
int event_wild(rpg_t *);
void dial_wild(rpg_t *, int);
void dmg_wild(rpg_t *);
void mouse_wild(rpg_t *);
void dead_wild(rpg_t *);
void capa_wild(rpg_t *);
void lvl_begin_lvl(rpg_t *);
void lvl_end_lvl(rpg_t *);
void lvl_wild(rpg_t *);
void exp_wild(rpg_t *);
void life_wild(rpg_t *);

// oO MAP Oo
int event_map(rpg_t *);
int update_map(rpg_t *);
void render_map(rpg_t *);
int map(rpg_t *);
int btn_city_one(rpg_t *);
int btn_city_two(rpg_t *);
int btn_city_three(rpg_t *);
int btn_city_capital(rpg_t *);
int btn_city_ligue(rpg_t *);
int btn_place_one(rpg_t *);
int btn_place_two(rpg_t *);
int btn_place_three(rpg_t *);
int btn_place_four(rpg_t *);
int btn_place_five(rpg_t *);
int btn_map_rtrn(rpg_t *);
int fight_skill_btn(rpg_t *);
int fight_skill_1(rpg_t *);
int fight_skill_2(rpg_t *);
int fight_skill_3(rpg_t *);
int fight_skill_4(rpg_t *);
int fight_fight_rtrn(rpg_t *);
int fight_fight_bag(rpg_t *);
int fight_fight_pkball(rpg_t *);
int fight_fight_pkmn(rpg_t *);
int fight_fight_run(rpg_t *);

// oO POKEMON Oo
int order_btn(rpg_t *);
int heal_btn(rpg_t *);
int next_btn(rpg_t *);
int prev_btn(rpg_t *);
int event_pokemon(rpg_t *);
int return_btn(rpg_t *);
int drop_btn(rpg_t *);

// oO TRAINER Oo
int event_trainer(rpg_t *);
void dial_adv(rpg_t *, int);
void nb_skill_trainer(rpg_t *);
void dmg_adv(rpg_t *);
void mouse_trainer(rpg_t *);
void dead_trainer(rpg_t *);
void end_trainer(rpg_t *);
void capa_trainer(rpg_t *);
void evolve_trainer(rpg_t *);
void find_capa_trainer(rpg_t *);
void capa_begin_trainer(rpg_t *);
void capa_end_trainer(rpg_t *);
void lvl_trainer(rpg_t *);
void swap_adv_trainer(rpg_t *);
void exp_trainer(rpg_t *);
void life_trainer(rpg_t *);

// oO SETTING Oo
int event_setting(rpg_t *);
int btn_snd_four(rpg_t *);
int btn_snd_three(rpg_t *);
int btn_snd_two(rpg_t *);
int btn_snd_one(rpg_t *);
int btn_snd_seven(rpg_t *);
int btn_snd_six(rpg_t *);
int btn_snd_five(rpg_t *);
int btn_setting_rtrn(rpg_t *);
int btn_back_menu(rpg_t *);
int btn_setting_quit(rpg_t *);

// oO POKEDEX Oo
int event_pokedex(rpg_t *);

// oO BEGIN Oo
int event_begin(rpg_t *);
void anim_pkmn_begin(rpg_t *);
void update_begin_xiv(rpg_t *);
void update_begin_xiii(rpg_t *);
void update_begin_xii(rpg_t *);
void update_begin_xi(rpg_t *);
void update_begin_x(rpg_t *);
void update_begin_ix(rpg_t *);
void update_begin_viii(rpg_t *);
void update_begin_vii(rpg_t *);
void apply_pos_starter(rpg_t *);
void update_begin_vi(rpg_t *);
void update_begin_v(rpg_t *);
void update_begin_iv(rpg_t *);
void update_begin_iii(rpg_t *);
void update_begin_ii(rpg_t *);
void update_begin_i(rpg_t *);



	/****************\
	*     SCENE      *
	\****************/

// oO INTRO Oo
void render_intro(rpg_t *);
void update_video(rpg_t *);
int intro(rpg_t *);
int update_intro(rpg_t *);

// oO START Oo
void update_key(rpg_t *);
void move_start(rpg_t *);
void render_start(rpg_t *);
void move_new_game(rpg_t *);
void do_moving_new(rpg_t *);
void move_load_game(rpg_t *);
void do_moving_load(rpg_t *);
void get_rid_of_slot(rpg_t *);
void do_moving_new_2(rpg_t *);
void do_moving_new_3(rpg_t *);
void do_moving_start(rpg_t *);
void apply_moving_new(rpg_t *);
void do_moving_load_2(rpg_t *);
void do_moving_load_3(rpg_t *);
void apply_moving_load(rpg_t *);
void do_moving_start_2(rpg_t *);
void apply_moving_start(rpg_t *);
void do_get_rid_of_slot(rpg_t *);
void apply_get_rid_of_slot(rpg_t *);
void update_pkmn_background(rpg_t *);
int start(rpg_t *);
int update_start(rpg_t *);
void update_menu_start(rpg_t *);
int active_button_slot(rpg_t *);
int active_button_start(rpg_t *);

// oO WORLD Oo
void remove_menu(rpg_t *);
void render_world(rpg_t *);
void display_menu(rpg_t *);
void display_location(rpg_t *);
void which_zone(rpg_t *, int, int);
int world(rpg_t *);
int update_world(rpg_t *);
int launch_intro(rpg_t *);
int launch_trainer(rpg_t *);
int update_menu_world(rpg_t *);
int active_button_menu(rpg_t *);
int intro_launchs(rpg_t *);

// oO WILD Oo
void render_wild(rpg_t *);
void begin_fight(rpg_t *);
void anim_pokemon_wild(rpg_t *);
void update_pokemon_disp(rpg_t *);
int wild(rpg_t *);
int update_wild(rpg_t *);
void update_skill(rpg_t *);
void update_life(rpg_t *);
void update_stats(rpg_t *);
void fight_mode(rpg_t *);
void item_mode(rpg_t *);
void fall_pokeball(rpg_t *);
void update_wild_iii(rpg_t *);
void update_button_wild_two(rpg_t *);
void update_wild_ii(rpg_t *);
void update_wild_i(rpg_t *);

// oO MAP Oo
int update_map(rpg_t *);
void render_map(rpg_t *);
int map(rpg_t *);
void put_dynamique_position_five(rpg_t *);
void put_dynamique_position_four(rpg_t *);
void put_dynamique_position_three(rpg_t *);
void put_dynamique_position_two(rpg_t *);
void put_dynamique_position(rpg_t *);

// oO POKEMON Oo
int update_pokemon(rpg_t *);
void render_pokemon(rpg_t *);
int pokemon(rpg_t *);
void get_skills(rpg_t *, int);
void anim_pokedex_pokemon(rpg_t *);
void anim_pokedex_pokemon_next(rpg_t *, int);
void get_skills(rpg_t *, int);
void file_stats_next(rpg_t *, char *, char *, char *);
void file_stats_next_two(rpg_t *, int, char *);
void file_stats(rpg_t *);

// oO TRAINER Oo
int update_trainer(rpg_t *);
void update_pkball(rpg_t *);
void begin_trainer(rpg_t *);
void anim_pkmn_trainer(rpg_t *);
void update_stats_trainer(rpg_t *);
void update_life_trainer(rpg_t *);
void update_skill_trainer(rpg_t *);
void fight_trainer(rpg_t *);
void item_trainer(rpg_t *);
void render_trainer(rpg_t *);
int trainer(rpg_t *);
void update_trainer_iii(rpg_t *);
void update_button_state_two(rpg_t *);
void update_trainer_ii(rpg_t *);
void update_trainer_i(rpg_t *);

// oO SETTING Oo
int update_setting(rpg_t *);
void render_setting(rpg_t *);
int setting(rpg_t *);

// oO POKEDEX Oo
int update_pokedex(rpg_t *);
void render_pokedex(rpg_t *);
int pokedex(rpg_t *);
void get_desc(rpg_t *, int);
void get_stats_two(rpg_t *, int, char *);
void get_stats(rpg_t *, int);
void print_this_pkmn(rpg_t *, int);

// oO BEGIN Oo
int update_begin(rpg_t *);
void render_begin(rpg_t *);
int begin(rpg_t *);
int boy(rpg_t *);
int girl(rpg_t *);
int fire(rpg_t *);
int water(rpg_t *);
int leaf(rpg_t *);
void anim_pkmn_begin(rpg_t *);
int yes_info(rpg_t *);
int no_info(rpg_t *);

#endif //FUNCTION_H
