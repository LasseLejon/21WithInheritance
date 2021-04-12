#ifndef BANK_H
#define BANK_H
#include "baseplayer.h"


class Bank : public Baseplayer
{
public:
    Bank(Deck& deck);
    int playRound();
};

#endif // BANK_H
