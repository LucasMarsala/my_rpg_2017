/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** struct.c
*/
#ifndef STRUCT_H
	#define STRUCT_H

/****************\
*     BASICS     *
\****************/

typedef struct s_wdw {
	char *name;
	sfVideoMode mode;
	sfRenderWindow *wdw;
	sfClock *clock;
	sfMusic *music;
	int volume;
	float elapsed;
} wdw_t;

typedef struct s_evt {
	sfEvent event;
	sfVector2i pos;
	sfBool mouse_press;
} evt_t;

typedef struct s_spt {
	sfSprite *s;
	sfTexture *t;
	sfIntRect r;
	sfVector2f p;
	sfVector2f sc;
} spt_t;

typedef struct s_btn {
	sfSprite *s;
	sfTexture *t;
	sfIntRect r;
	sfVector2f p;
	sfVector2f sc;
	int (*fct)();
} btn_t;

typedef struct s_txt {
	sfText *t;
	sfFont *f;
	sfVector2f p;
} txt_t;

typedef struct s_part_info {
	sfVector2f mvt;

	double spd;
} part_info_t;

typedef struct s_part {
	part_info_t *i;

	sfVertex *v;
	int nb;
} part_t;

typedef struct s_pkmn {
	int id;
	int lvl;
	int life;
	int exp;
	int skill[4][2];
	int state;
	int nb_capacities;
	int *skills;
} pkmn_t;

typedef struct s_charac {
	pkmn_t pkmn[6];

	char *name;
	int sexe;
	int discover_pkmn;
	int x;
	int y;
	int money;
	int zone;
	float speed;
	float time;
	float chrono;
	int pkmeq;
	int postmp[2];
} charac_t;

typedef struct s_dial {
	txt_t t;

	char *dial;
	char *dial_cpy;
	char *dial_tmp;
	float chrono;
	float speed;
} dial_t;


/****************\
*     SCENES     *
\****************/

typedef struct s_intro {
	spt_t video;

	float chrono;
} intro_t;

typedef struct s_start {
	spt_t spt[5];
	spt_t min[3];
	btn_t slot[4];
	btn_t btn[4];
	txt_t txt[5];
	txt_t desc[3];
	txt_t empty[3];

	int menu;
	int load_or_new;
	int save;
	float chrono;
	float chrono_key;
	float chrono_mvt;
} start_t;

typedef struct s_world {
	spt_t map;
	spt_t charac;
	spt_t fight;
	spt_t locations;
	spt_t bck_menu;
	btn_t btn[6];
	txt_t location;

	float chrono_localisation;
	float chrono_sea;
	float chrono_mvt;
	int tp[58][5];
	int menu;
	int trainer_or_wild;
	int intro_fight;
	int intro_trainer;
	int dir;
	int dir_len;
	int dial;
} world_t;

typedef struct s_wild {
	spt_t ground[5];
	spt_t block[3];
	spt_t pkmn_disp[6];
	spt_t life_bar[2];
	spt_t exp_bar;
	spt_t dialog_bar;
	spt_t pkball;
	btn_t utils[4];
	btn_t rtrn;
	btn_t skill[5];
	txt_t name_s[4];
	txt_t pp_s[4];
	txt_t ppmax_s[4];
	txt_t btn[6];
	txt_t name_info[2];
	txt_t lvl_info[2];
	txt_t pv_info;
	txt_t pvmax_info;
	txt_t item[2];
	part_t *part;

	float chrono;
	float chrono_move;
	float disp;
	int *skills;
	int id;
	int level;
	int life;
	int type;
	int state;
	int nb_skills;
	int dmg;
	int dmg_adv;
	int exp;
	int lvl;
	int turn;
	int run;
	int capa;
	int resis;
	int dead;
	int capt;
} wild_t;

typedef struct s_map {
	spt_t map;
	spt_t pos;
	btn_t btn[10];
	btn_t rtrn;
	txt_t rtn;

	int lt_pos[2];
} map_t;

typedef struct s_pokemons {
	spt_t back;
	spt_t pkball[6];
	btn_t next[2];
	btn_t order;
	btn_t heal;
	btn_t rtrn;
	btn_t drop;
	txt_t stats[4];
	txt_t skill[4];
	txt_t btn[2];
	txt_t nbr;
	txt_t rtr;
	txt_t item;

	int i;
} pokemons_t;

typedef struct s_trainers {
	spt_t ground[5];
	spt_t block[3];
	spt_t pkmn_disp[6];
	spt_t pkmn_adv[6];
	spt_t life_bar[2];
	spt_t exp_bar;
	spt_t dialog_bar;
	btn_t utils[4];
	btn_t rtrn;
	btn_t skill[5];
	txt_t name_s[4];
	txt_t pp_s[4];
	txt_t ppmax_s[4];
	txt_t btn[6];
	txt_t name_info[2];
	txt_t lvl_info[2];
	txt_t pv_info;
	txt_t pvmax_info;
	txt_t item[2];
	pkmn_t pkmn[6];

	float chrono;
	float chrono_move;
	int id;
	int state;
	int dmg;
	int dmg_adv;
	int exp;
	int lvl;
	int turn;
	int run;
	int capa;
	int resis;
	int nb_skills;
	int dead;
} trainers_t;

typedef struct s_setting {
	spt_t back;
	btn_t snd[4];
	btn_t speed[2];
	btn_t rtrn;
	btn_t quit;
	txt_t txt[10];
	txt_t quitt;

	int lstscene;
} setting_t;

typedef struct s_pokedex {
	spt_t back;
	btn_t next[2];
	btn_t rtrn;
	txt_t desc[3];
	txt_t stats[4];
	txt_t rtr;

	int i;
} pokedex_t;

typedef struct s_begin {
	spt_t back;
	spt_t charac[3];
	btn_t sexe[2];
	btn_t pkmn[3];
	btn_t info[2];
	txt_t yn[2];

	float chrono;
	int state;
	int txt;
	int click;
} begin_t;

/****************\
*     DATA's     *
\****************/

typedef struct s_save {
	char **stats;
	int empty[3];
	int nb;
} save_t;

typedef struct s_pokemon {
	spt_t pkmn;
	spt_t back;

	char *name;
	char *comment;
	int num;
	int first_type;
	int second_type;
	int life_max;
	int attk;
	int def;
	int speed;
	int capacities[14][2];
	int evolve;
	int sheet;
	int back_sheet;
} pokemon_t;

typedef struct s_skill {
	char *desc;
	char *name;
	int num;
	int type_attack;
	int power_attack;
	int type_effect;
	int power_effect;
	int p_p;
} skill_t;

typedef struct s_item {
	int potion;
	int pokeball;
} item_t;

typedef struct s_zone {
	char *name;
	int type;
	int lvl_min;
	int lvl_max;
	int nb;
	int pokemon[30];
	int pos1[2];
	int pos2[2];
} zone_t;

typedef struct s_speech {
	char *t;
} speech_t;

typedef struct s_resist {
	float resis[324][3];
} resis_t;

typedef struct s_trainer {
	spt_t spt;

	char *name;
	char *begin;
	char *end;
	int nb;
	int pos[2];
	int view[2];
	int pkmn[6][2];
	int money;
	int done;
} trainer_t;

typedef struct s_data {
	save_t save;
	pokemon_t pokedex[80];
	skill_t skill[111];
	item_t item;
	zone_t zone[33];
	speech_t speech[47];
	resis_t resis;
	trainer_t *trainer;

	char **map;
} data_t;


/****************\
*     MY_RPG     *
\****************/

typedef struct s_rpg {
	wdw_t wdw;
	data_t data;
	evt_t evt;
	charac_t charac;
	dial_t dial;

	intro_t intro;
	start_t start;
	world_t world;
	wild_t wild;
	map_t map;
	pokemons_t pokemons;
	trainers_t trainers;
	setting_t setting;
	pokedex_t pokedex;
	begin_t begin;

	int scene;
	int old;
	int quit;
} rpg_t;


#endif //STRUCT_H
