#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <bool.h>

pokemon_stats_t nature_boost_func (int mon_nature,pokemon_stats_t mon_stats)
{
  switch (mon_nature)
  {
//-----------------HARDY----------------------//
    case 0:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 1;
      mon_stats.spdef.nature_boost = 1;
      mon_stats.spd.nature_boost = 1;
    break;


//-----------------LONLEY----------------------//
    case 1:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1.1;
      mon_stats.def.nature_boost = 0.9;
      mon_stats.spatk.nature_boost = 1;
      mon_stats.spdef.nature_boost = 1;
      mon_stats.spd.nature_boost = 1;
    break;


//-----------------BRAVE----------------------//
    case 2:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1.1;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 1;
      mon_stats.spdef.nature_boost = 1;
      mon_stats.spd.nature_boost = 0.9;
    break;


//-----------------ADAMANT----------------------//
    case 3:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1.1;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 0.9;
      mon_stats.spdef.nature_boost = 1;
      mon_stats.spd.nature_boost = 1;
    break;


//-----------------NAUGHTY----------------------//
    case 4:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1.1;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 1;
      mon_stats.spdef.nature_boost = 0.9;
      mon_stats.spd.nature_boost = 1;
    break;


//------------------BOLD---------------------//
    case 5:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 0.9;
      mon_stats.def.nature_boost = 1.1;
      mon_stats.spatk.nature_boost = 1;
      mon_stats.spdef.nature_boost = 1;
      mon_stats.spd.nature_boost = 1;
      break;


//------------------DOCILE---------------------//
    case 6:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 1;
      mon_stats.spdef.nature_boost = 1;
      mon_stats.spd.nature_boost = 1;
    break;


//------------------RELAXED---------------------//
    case 7:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1;
      mon_stats.def.nature_boost = 1.1;
      mon_stats.spatk.nature_boost = 1;
      mon_stats.spdef.nature_boost = 1;
      mon_stats.spd.nature_boost = 0.9;
    break;


//------------------IMPISH---------------------//
    case 8:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1;
      mon_stats.def.nature_boost = 1.1;
      mon_stats.spatk.nature_boost = 0.9;
      mon_stats.spdef.nature_boost = 1;
      mon_stats.spd.nature_boost = 1;
    break;


//------------------LAX---------------------//
    case 9:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1;
      mon_stats.def.nature_boost = 1.1;
      mon_stats.spatk.nature_boost = 1;
      mon_stats.spdef.nature_boost = 0.9;
      mon_stats.spd.nature_boost = 1;
    break;


//------------------TIMID---------------------//
    case 10:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 0.9;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 1;
      mon_stats.spdef.nature_boost = 1;
      mon_stats.spd.nature_boost = 1.1;
    break;


//------------------HASTY---------------------//
    case 11:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1;
      mon_stats.def.nature_boost = 0.9;
      mon_stats.spatk.nature_boost = 1;
      mon_stats.spdef.nature_boost = 1;
      mon_stats.spd.nature_boost = 1.1;
    break;


//------------------SERIOUS---------------------//
    case 12:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 1;
      mon_stats.spdef.nature_boost = 1;
      mon_stats.spd.nature_boost = 1;
    break;


//------------------JOLLY---------------------//
    case 13:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 0.9;
      mon_stats.spdef.nature_boost = 1;
      mon_stats.spd.nature_boost = 1.1;
    break;


//-------------------NAIVE--------------------//
    case 14:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 1;
      mon_stats.spdef.nature_boost = 0.9;
      mon_stats.spd.nature_boost = 1.1;
    break;


//------------------MODEST---------------------//
    case 15:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 0.9;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 1.1;
      mon_stats.spdef.nature_boost = 1;
      mon_stats.spd.nature_boost = 1;
    break;


//-------------------MILD--------------------//
    case 16:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1;
      mon_stats.def.nature_boost = 0.9;
      mon_stats.spatk.nature_boost = 1.1;
      mon_stats.spdef.nature_boost = 1;
      mon_stats.spd.nature_boost = 1;
    break;


//-------------------QUIET--------------------//
    case 17:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 1.1;
      mon_stats.spdef.nature_boost = 1;
      mon_stats.spd.nature_boost = 0.9;
    break;


//-------------------BASHFUL--------------------//
    case 18:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 1;
      mon_stats.spdef.nature_boost = 1;
      mon_stats.spd.nature_boost = 1;
    break;


//-------------------RASH--------------------//
    case 19:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 1.1;
      mon_stats.spdef.nature_boost = 0.9;
      mon_stats.spd.nature_boost = 1;
    break;


//-------------------CALM--------------------//
    case 20:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 0.9;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 1;
      mon_stats.spdef.nature_boost = 1.1;
      mon_stats.spd.nature_boost = 1;
    break;


//-------------------GENTLE--------------------//
    case 21:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 0.9;
      mon_stats.spdef.nature_boost = 1.1;
      mon_stats.spd.nature_boost = 1;
    break;


//-------------------SASSY--------------------//
    case 22:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 1;
      mon_stats.spdef.nature_boost = 1.1;
      mon_stats.spd.nature_boost = 0.9;
    break;


//-------------------CAREFUL--------------------//
    case 23:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 0.9;
      mon_stats.spdef.nature_boost = 1.1;
      mon_stats.spd.nature_boost = 1;
    break;


//--------------------QUIRKY-------------------//
    case 24:
      mon_stats.hp.nature_boost = 1;
      mon_stats.atk.nature_boost = 1;
      mon_stats.def.nature_boost = 1;
      mon_stats.spatk.nature_boost = 1;
      mon_stats.spdef.nature_boost = 1;
      mon_stats.spd.nature_boost = 1;
    break;

  }

  return mon_stats;
}

//------------- RAPPORTO TRA ATTACCO ATTACCANTE E DIFESA DEL DIFENSROE---------//
int atk_def_func (pokemon_stats_t atk_mon, pokemon_stats_t def_mon)
{
  int rapport = 1;

  //rapport = atk_mon. / def_mon;
}
