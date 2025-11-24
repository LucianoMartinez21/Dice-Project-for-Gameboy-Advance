#include "bn_core.h"
#include "bn_sprite_text_generator.h"
#include <bn_sprite_ptr.h>
#include "bn_sprite_items_d20.h"
#include "bn_sprite_items_d2.h"
#include "bn_sprite_items_credits1.h"
#include "bn_sprite_items_credits2.h"
#include "bn_sprite_items_credits3.h"
#include "bn_sprite_animate_actions.h"
#include "bn_keypad.h"
#include "bn_regular_bg_ptr.h"
#include "bn_regular_bg_items_mainbg.h"
#include "bn_regular_bg_items_creditsbg.h"
#include "common_info.h"
#include "common_variable_8x16_sprite_font.h"
#include "bn_display.h"
#include "bn_bg_palettes.h"
#include <bn_vector.h>
#include "globals_var.h"
#include "JoypadHandler.h"
int main()
{
    bn::core::init();
    InitSprites();

    /*bn::sprite_ptr CreditsSprite = bn::sprite_items::credits1.create_sprite(-80,90);
    bn::sprite_ptr CreditsSprite2 = bn::sprite_items::credits2.create_sprite(-16,90);
    bn::sprite_ptr CreditsSprite3 = bn::sprite_items::credits3.create_sprite(48,90);*/

    bn::sprite_animate_action<4> Action1 = bn::create_sprite_animate_action_forever(
            global_sprites.at(2), 10, bn::sprite_items::credits1.tiles_item(), 0, 1, 2, 3
        );
    bn::sprite_animate_action<4> Action2 = bn::create_sprite_animate_action_forever(
            global_sprites.at(3), 10, bn::sprite_items::credits2.tiles_item(), 0, 1, 2, 3
        );
    bn::sprite_animate_action<4> Action3 = bn::create_sprite_animate_action_forever(
            global_sprites.at(4), 10, bn::sprite_items::credits3.tiles_item(), 0, 1, 2, 3
        );
    bn::sprite_animate_action<30> ActionAnimation = bn::create_sprite_animate_action_forever(
            global_sprites.at(0), 4, bn::sprite_items::d20.tiles_item(), 0, 0
        );
    bn::regular_bg_ptr MainBackground = bn::regular_bg_items::mainbg.create_bg(0,0);
    bn::regular_bg_ptr CreditsBackground = bn::regular_bg_items::creditsbg.create_bg(0,0);
    MainBackground.set_priority(1);
    CreditsBackground.set_priority(1);
    CreditsBackground.set_visible(false);



    while(true)
    {

        JoypadHandler();
        if (Credits) {
            CreditsBackground.set_visible(Credits);
            MainBackground.set_visible(!Credits);
            text_sprites.clear();
            global_sprites.at(2).set_visible(Credits);
            global_sprites.at(3).set_visible(Credits);
            global_sprites.at(4).set_visible(Credits);
            global_sprites.at(0).set_visible(!Credits);
            global_sprites.at(1).set_visible(!Credits);
        }
        else {
            CreditsBackground.set_visible(Credits);
            MainBackground.set_visible(!Credits);
            global_sprites.at(2).set_visible(Credits);
            global_sprites.at(3).set_visible(Credits);
            global_sprites.at(4).set_visible(Credits);
            if(DiceIndex == D2)
            {
                global_sprites.at(0).set_visible(Credits);
                global_sprites.at(1).set_visible(!Credits);
            }
            if(DiceIndex == D20)
            {
                global_sprites.at(0).set_visible(!Credits);
                global_sprites.at(1).set_visible(Credits);
            }
        }
        if(text_sprites.size() > 1)
            text_sprites.pop_back();
        if(IsRolling)
        {
            if(DiceIndex == D2)
            {
                ActionAnimation = bn::create_sprite_animate_action_once(
                        global_sprites.at(1), 4, bn::sprite_items::d2.tiles_item(), 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19
                    );
                if(DimeSecreteValue == 2)
                {
                    ActionAnimation = bn::create_sprite_animate_action_once(
                            global_sprites.at(1), 4, bn::sprite_items::d2.tiles_item(), 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
                        );
                }
            }
            else if (DiceIndex == D20)
            {
                ActionAnimation = bn::create_sprite_animate_action_once(
                        global_sprites.at(0), 4, bn::sprite_items::d20.tiles_item(), 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
                    );
            }
            IsRolling = false;
        }
        if (!ActionAnimation.done())
            ActionAnimation.update();
        else if(ActionAnimation.done() && !IsRolling)
        {
            ActionAnimation.reset();
            if(DiceIndex == D2)
            {
                if(DimeSecreteValue == 1)
                {
                    ActionAnimation = bn::create_sprite_animate_action_once(
                            global_sprites.at(1), 4, bn::sprite_items::d2.tiles_item(), 0, 0
                        );
                }
                else if(DimeSecreteValue == 2)
                {
                    ActionAnimation = bn::create_sprite_animate_action_once(
                            global_sprites.at(1), 4, bn::sprite_items::d2.tiles_item(), 10, 10
                        );
                }

            }
            else if (DiceIndex == D20)
            {
                ActionAnimation = bn::create_sprite_animate_action_once(
                        global_sprites.at(0), 4, bn::sprite_items::d20.tiles_item(), 0, 0
                    );
            }
        }
        Action1.update();
        Action2.update();
        Action3.update();
        bn::core::update();

    }
}
