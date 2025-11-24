#include "JoypadHandler.h"
#include "Dice.h"
#include "globals_var.h"


void JoypadHandler()
{
    if(!Credits)
    {
        if(bn::keypad::a_pressed())
        {
            if(DiceIndex == D2)
                AnimationRollDice(RollD2());
            if(DiceIndex == D20)
                AnimationRollDice(RollD20());
        }
        else if(bn::keypad::left_pressed())
        {
            DiceIndex--;
            text_sprites.clear();
            DiceIndex = DiceIndex % 2;
            if (DiceIndex == 255)
                DiceIndex = MAX_LENGHT-1;
            if(DiceIndex == D2)
            {
                global_sprites.at(0).set_visible(false);
                global_sprites.at(1).set_visible(true);
            }
            if(DiceIndex == D20)
            {
                global_sprites.at(0).set_visible(true);
                global_sprites.at(1).set_visible(false);
            }
        }
        else if(bn::keypad::right_pressed())
        {
            DiceIndex++;
            text_sprites.clear();
            DiceIndex = DiceIndex % 2;
            if (DiceIndex > MAX_LENGHT-1)
                DiceIndex = 0;
            if(DiceIndex == D2)
            {
                global_sprites.at(0).set_visible(false);
                global_sprites.at(1).set_visible(true);
            }
            if(DiceIndex == D20)
            {
                global_sprites.at(0).set_visible(true);
                global_sprites.at(1).set_visible(false);
            }
        }
    }
    if(bn::keypad::select_pressed())
        Credits = !Credits;
}
