#include "deck.h"

Deck::Deck()
{

}
Card Deck::giveCard()
{
   Card card=m_deck.back();
   m_deck.pop_back();
   return card;
}
void Deck::resetDeck()
{
    clearDeck();
    for(int suite=0;suite<4;suite+=1)
        for(int v=1;v<14;v+=1)
            m_deck.push_back(Card(Card::Suite(suite),v));
}
void Deck::shuffle()
{
    for(unsigned int i=0; i < m_deck.size(); i+=1)
        std::swap(m_deck[i],m_deck[i+(rand() % (m_deck.size()-i))]);
}
