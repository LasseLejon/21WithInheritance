#ifndef BUNDLEOFCARDS_H
#define BUNDLEOFCARDS_H
#include "card.h"

#include <vector>


class Bundleofcards
{
public:
    Bundleofcards();
    void clearDeck();
    int amountOfCardsInDeck();
protected:
    std::vector<Card> m_deck;
};

#endif // BUNDLEOFCARDS_H
