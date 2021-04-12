#include "card.h"
#include <cassert>

Card::Card(Card::Suite suite,int value)
{
    assert(value>=1 && value <=13);
    m_suite=suite;
    m_value=value;
}
Card::Suite Card::getSuite()
{
    return m_suite;
}
int Card::getValue()
{
    return m_value;
}
std::string Card::text()
{
    std::string str;
    const char *tabS[] = {"clubs", "diamonds", "hearts","spades"};
    const char *tabV[] = {"doesn't exist", "ace","two","three","four",
                          "five","six","seven","eight","nine","ten","jack","queen","king"};
    str+=tabV[m_value];
    str+=" of ";
    str+=tabS[m_suite];
    return str;
}


