#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <bool.h>

#include "struct.c"
#include "formulae_func.c"

#define MON_NAME_MAX 15
#define MON_TYPE_MAX 8
#define MON_ABILITY_MAX 16
#define MON_ITEM_MAX 20

//------------------------------------POKEMON------------------------------------//
typedef struct pokemon_struct
{
//---NAME-----------//
  char pokemon_name [MON_NAME_MAX];

//---TYPE-----------//
  typing_t pokemon_type;

//---STATS----------//
  pokemon_stats_t pokemon_stats;

//---NATURE---------//
  int pokemon_nature;

//---ABILITY--------//
  int pokemon_ability;

//---ITEM-----------//
  int pokemon_item;

//---STATUS---------//
  int pokemon_status;

//---MOVES----------//
  pokemon_set_t pokemon_set;

}pokemon_t;

int main (void)
{
  pokemon_t garchomp;
  garchomp.pokemon_stats.hp.BS = 108;
  garchomp.pokemon_stats.hp.IVs = 31;
  garchomp.pokemon_stats.hp.EVs = 252;

  garchomp.pokemon_stats.atk.BS = 130;
  garchomp.pokemon_stats.atk.IVs = 31;
  garchomp.pokemon_stats.atk.EVs = 252;

  garchomp.pokemon_stats.spatk.BS = 80;
  garchomp.pokemon_stats.spatk.IVs = 31;
  garchomp.pokemon_stats.spatk.EVs = 0;

  garchomp.pokemon_nature = 3;

  garchomp.pokemon_stats = stats_calc (garchomp.pokemon_nature,garchomp.pokemon_stats);

  printf("\nGARCHOMP HP: %d\n\nGARCHOMP ATK 252+ : %d\n\nGARCHOMP SPATK - :%d\n", garchomp.pokemon_stats.hp.final_value,
                                                                                  garchomp.pokemon_stats.atk.final_value,
                                                                                  garchomp.pokemon_stats.spatk.final_value);

  return 0;
}
