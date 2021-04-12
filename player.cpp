#include "player.h"
Player::Player(Deck& deck) :Baseplayer(deck)
{    
}
bool boolFranUppmaning3(const char uppmaning[]){
    std::cout << uppmaning;
    while(true){
        char svar;
        std::cout << ":";
        std::cin >> svar;
        if(svar=='y')
            return true;
        if(svar=='n')
            return false;
        if(svar!='j'&&svar!='n'){
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
            std::cout << std::endl;
        }


    }
}
int Player::playRound(){
    m_hand.clearDeck();
    while(m_hand.points()<21){
        bool takeCard=boolFranUppmaning3("Do you want another card?");
        if(!takeCard)
            break;
        else{
            Card card = m_deck.giveCard();
            m_hand.placeCardInHand(card);
            std::cout << card.text() << std::endl << "Player total points: " << m_hand.points() << std::endl;

        }
    }
    return m_hand.points();

}
