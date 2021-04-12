#ifndef PLAYER_H
#define PLAYER_H
#include "baseplayer.h"
#include <iostream>


class Player : public Baseplayer
{
public:
    Player(Deck& deck);
    int playRound();
};
bool boolFranUppmaning3(const char uppmaning[]);

#endif // PLAYER_H
