#pragma once
#define MAX_LENGHT 2
#include "bn_core.h"
#include <bn_sprite_ptr.h>
#include "bn_sprite_items_d20.h"
#include "bn_sprite_items_d2.h"
#include "bn_sprite_items_credits1.h"
#include "bn_sprite_items_credits2.h"
#include "bn_sprite_items_credits3.h"
#include <bn_vector.h>
#include <stdint.h>
#include "bn_sprite_animate_actions.h"

extern uint8_t DiceIndex;
extern bn::vector<bn::sprite_ptr, 5> global_sprites;
extern bn::vector<bn::sprite_ptr, 32> text_sprites;
enum DiceTypes
{
    D2,
    D20
};
extern bool IsRolling;
extern bool Credits;
extern uint8_t DimeSecreteValue;

void InitSprites();
