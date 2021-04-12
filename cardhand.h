#ifndef CARDHAND_H
#define CARDHAND_H
#include "bundleofcards.h"


class Cardhand : public Bundleofcards
{
public:
    Cardhand();
    Card card(int nr);
    void placeCardInHand(Card card);
    int points();
};

#endif // CARDHAND_H
