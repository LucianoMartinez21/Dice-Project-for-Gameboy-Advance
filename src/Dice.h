#pragma once
#include <bn_random.h>
#include "bn_core.h"

#define TWO_SIDE_DICE 2
#define FOUR_SIDE_DICE 4
#define SIX_SIDE_DICE 6
#define EIGHT_SIDE_DICE 8
#define TEN_SIDE_DICE 10
#define TWELVE_SIDE_DICE 12
#define TWENTY_SIDE_DICE 20
#define HUNDRED_SIDE_DICE 100


void InitDice();
int RollDice(int Sides);
int RollD2();
int RollD4();
int RollD6();
int RollD8();
int RollD10();
int RollD12();
int RollD20();
int RollD100();
extern bn::random Blackbox;
