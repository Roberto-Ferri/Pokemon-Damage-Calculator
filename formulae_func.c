#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "auxiliar_func.c"

#define MON_NAME_MAX 15
#define MON_TYPE_MAX 8
#define MON_ABILITY_MAX 16
#define MON_ITEM_MAX 20

float modifier_func (pokemon_stats_t atk_mon, pokemon_stats_t def_mon, pokemon_move_t move, conditions_t conditions);

pokemon_stats_t stats_calc (int nature, pokemon_stats_t mon_stats)
{
  mon_stats = nature_boost_func(nature,mon_stats);

  mon_stats.hp.final_value = (((2*mon_stats.hp.BS)+mon_stats.hp.IVs+(mon_stats.hp.EVs/4))/2)+60;
  mon_stats.atk.final_value = ((((2*mon_stats.atk.BS)+mon_stats.atk.IVs+(mon_stats.atk.EVs/4))/2)+5)*mon_stats.atk.nature_boost;
  mon_stats.def.final_value = ((((2*mon_stats.def.BS)+mon_stats.def.IVs+(mon_stats.def.EVs/4))/2)+5)*mon_stats.def.nature_boost;
  mon_stats.spatk.final_value = ((((2*mon_stats.spatk.BS)+mon_stats.spatk.IVs+(mon_stats.spatk.EVs/4))/2)+5)*mon_stats.spatk.nature_boost;
  mon_stats.spdef.final_value = ((((2*mon_stats.spdef.BS)+mon_stats.spdef.IVs+(mon_stats.spdef.EVs/4))/2)+5)*mon_stats.spdef.nature_boost;
  mon_stats.spd.final_value = ((((2*mon_stats.spd.BS)+mon_stats.spd.IVs+(mon_stats.spd.EVs/4))/2)+5)*mon_stats.spd.nature_boost;

  return mon_stats;
}

int max_roll_damage_func (pokemon_stats_t atk_mon, pokemon_stats_t def_mon, pokemon_move_t atk_move, conditions_t conditions)
{
  float max_roll_damage;

  max_roll_damage = (((22*(atk_move.base_power)*(float)rapport_atk_def_func(atk_mon, def_mon, atk_move))/50)+2)*(float)modifier_func(atk_mon, def_mon, atk_move, conditions);

  return max_roll_damage;
}
