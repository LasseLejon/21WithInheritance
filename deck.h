#ifndef DECK_H
#define DECK_H
#include "bundleofcards.h"


class Deck : public Bundleofcards
{
public:
    Deck();
    Card giveCard();
    void resetDeck();
    void shuffle();
};

#endif // DECK_H
