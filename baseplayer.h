#ifndef BASEPLAYER_H
#define BASEPLAYER_H
#include "deck.h"
#include "cardhand.h"


class Baseplayer
{
public:
    Baseplayer(Deck& deck);
protected:
    Deck& m_deck;
    Cardhand m_hand;
};

#endif // BASEPLAYER_H
