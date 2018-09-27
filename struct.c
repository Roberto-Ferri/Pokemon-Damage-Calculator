#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <bool.h>

#define MON_NAME_MAX 15
#define MON_TYPE_MAX 8
#define MOVE_TYPE_MAX 8
#define MON_ABILITY_MAX 16
#define MON_ITEM_MAX 20

//----------STATS VALUES------------------------//
typedef struct stats_values_struct
{
    float BS;
    float IVs;
    float EVs;
    float nature_boost;

    float final_value;

}stats_values_t;

//----------STATS-------------------------------//
typedef struct stats_struct
{
  stats_values_t hp;
  stats_values_t atk;
  stats_values_t def;
  stats_values_t spatk;
  stats_values_t spdef;
  stats_values_t spd;

}pokemon_stats_t;

//--------TYPING_MOVE_POKEMON-----------------//
typedef struct typing_struct
{
  int typing_1,
      typing_2;

}typing_t;

//----------MOVE-----------------------------//
typedef struct pokemon_move_struct
{
  int move_id;
  int base_power;
  typing_t move_type;
  int category;  //0_STATUS 1_PHYSICAL 2_SPECIAL
  int single_spread;  //0 single 1 spread

}pokemon_move_t;

//----------SET------------------------------//
typedef struct pokemon_set_struct
{
  pokemon_move_t move_1;
  pokemon_move_t move_2;
  pokemon_move_t move_3;
  pokemon_move_t move_4;

}pokemon_set_t;
