#include "Dice.h"

bn::random Blackbox;
void InitDice()
{
    /*uint16_t seed = (DIV_REG << 8) | DIV_REG;
    initrand(seed);*/
    //bn::random::update();
}

int RollDice(int Sides)
{
    return Blackbox.get_int(1, Sides + 1);
}

int RollD2()
{
    return RollDice(TWO_SIDE_DICE);
}
int RollD4()
{
    return RollDice(FOUR_SIDE_DICE);
}
int RollD6()
{
    return RollDice(SIX_SIDE_DICE);
}
int RollD8()
{
    return RollDice(EIGHT_SIDE_DICE);
}
int RollD10()
{
    return RollDice(TEN_SIDE_DICE);
}
int RollD12()
{
    return RollDice(TWELVE_SIDE_DICE);
}
int RollD20()
{
    return RollDice(TWENTY_SIDE_DICE);
}
int RollD100()
{
    return RollDice(HUNDRED_SIDE_DICE);
}
