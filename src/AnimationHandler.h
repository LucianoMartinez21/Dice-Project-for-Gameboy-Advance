#pragma once
#include "globals_var.h"
#include "bn_core.h"
#include "Dice.h"
#include <stdint.h>
#include <bn_sprite_ptr.h>
#include "bn_sprite_items_d20.h"
#include "bn_sprite_items_d2.h"
#include "bn_sprite_animate_actions.h"
#include "common_info.h"
#include "common_variable_8x16_sprite_font.h"
#include "bn_display.h"
#include "bn_sprite_text_generator.h"
#include <iostream>
#include <string>
#include "bn_timers.h"
#include <bn_timer.h>
#include "bn_string.h"

void AnimationRollDice(uint8_t Result);
