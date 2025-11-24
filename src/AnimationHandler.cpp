#include "AnimationHandler.h"
#include "globals_var.h"


void AnimationRollDice(uint8_t Result)
{
    text_sprites.clear();
    constexpr bn::fixed start_y = (-bn::display::height() / 2) + 100 + 1;
    bn::sprite_text_generator text_generator(common::variable_8x16_sprite_font);
    bn::fixed y = start_y;
    text_generator.set_bg_priority(0);
    text_generator.set_alignment(bn::sprite_text_generator::alignment_type::CENTER);
    if(DiceIndex == D2)
    {
        if(Result == 1)
            text_generator.generate(0, y, "Tail", text_sprites);
        else if(Result == 2)
            text_generator.generate(0, y, "Head", text_sprites);
    }
    else if(DiceIndex == D20)
        text_generator.generate(0, y, bn::to_string<32>(Result), text_sprites);
    IsRolling = true;
    bn::core::update();
    DimeSecreteValue = Result;
}
