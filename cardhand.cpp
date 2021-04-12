#include "cardhand.h"

Cardhand::Cardhand()
{

}
Card Cardhand::card(int nr)
{
    return m_deck[nr];
}
void Cardhand::placeCardInHand(Card card)
{
    m_deck.push_back(card);
}
int Cardhand::points(){
    int points=0;
    for(unsigned int i=0; i<m_deck.size(); i +=1){
        if(m_deck[i].getValue()==1)
            points+=14;
        else
            points+=m_deck[i].getValue();
        if(points>21)
            for(unsigned int ix = 0; ix < m_deck.size(); ix +=1)
                if(m_deck[ix].getValue()==1)
                    points-=13;
    }
    return points;
}
