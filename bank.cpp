#include "bank.h"
#include <iostream>

Bank::Bank(Deck& deck):Baseplayer(deck)
{
}


int Bank::playRound(){
    m_hand.clearDeck();
    while(m_hand.points()<17){
        Card card = m_deck.giveCard();
        m_hand.placeCardInHand(card);
        std::cout << card.text() << std::endl << "Bank total points: " << m_hand.points() << std::endl;
    }

    return m_hand.points();
}
