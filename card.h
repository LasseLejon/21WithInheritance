#ifndef CARD_H
#define CARD_H
#include <string>


class Card
{

    public:
        enum Suite{
            clubs, diamonds, hearts, spades
        };
        Card(Suite=clubs,int value=1);
        Suite getSuite();
        int getValue();
        std::string text(); //returns the suite and value as a string ex, "ace of spaces"
    private:
        Suite m_suite;
        int m_value;


};
#endif // CARD_H
