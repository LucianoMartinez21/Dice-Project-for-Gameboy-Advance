#include "globals_var.h"
bn::vector<bn::sprite_ptr, 5> global_sprites;
bn::vector<bn::sprite_ptr, 32> text_sprites;
uint8_t DiceIndex = 0;
bool IsRolling = false;
uint8_t DimeSecreteValue = 1;
bool Credits = false;
void InitSprites()
{

    global_sprites.push_back(bn::sprite_items::d20.create_sprite(0,0));
    global_sprites.push_back(bn::sprite_items::d2.create_sprite(0,0));
    global_sprites.push_back(bn::sprite_items::credits1.create_sprite(-80,90));
    global_sprites.push_back(bn::sprite_items::credits2.create_sprite(-16,90));
    global_sprites.push_back(bn::sprite_items::credits3.create_sprite(48,90));

    /*dice*/
    global_sprites.at(0).set_bg_priority(0);
    global_sprites.at(0).set_z_order(1);
    /*dimes*/
    global_sprites.at(1).set_bg_priority(0);
    global_sprites.at(1).set_z_order(1);
    /*Credits*/
    global_sprites.at(2).set_bg_priority(0);
    global_sprites.at(2).set_z_order(1);
    global_sprites.at(2).set_visible(false);

    global_sprites.at(3).set_bg_priority(0);
    global_sprites.at(3).set_z_order(1);
    global_sprites.at(3).set_visible(false);

    global_sprites.at(4).set_bg_priority(0);
    global_sprites.at(4).set_z_order(1);
    global_sprites.at(4).set_visible(false);
}
