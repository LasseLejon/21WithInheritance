#include "bundleofcards.h"

Bundleofcards::Bundleofcards()
{
}
void Bundleofcards::clearDeck()
{
    while(!m_deck.empty())
        m_deck.pop_back();
}
int Bundleofcards::amountOfCardsInDeck()
{
    return m_deck.size();
}




