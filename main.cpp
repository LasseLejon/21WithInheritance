#include <iostream>
#include "player.h"
#include "bank.h"
#include "deck.h"
#include "cardhand.h"
#include <time.h>

using namespace std;



int main()
{
    cout << "Welcome to the card game 21" << endl;
    srand(time(0));
    Deck deck;
    Player player(deck);
    Bank bank(deck);
    deck.resetDeck();
    deck.shuffle();
    while(true){
        if(!boolFranUppmaning3("New game?"))
            break;
        int pPoints=player.playRound();
        if(pPoints>21)
            cout << "YOU LOST" << endl;
        else if(pPoints==21)
            cout << "YOU WON" << endl;
        else{
            int bPoints=bank.playRound();
            if(bPoints<=21 && bPoints >=pPoints)
                cout << "YOU LOST" << endl;
            else
                cout << "YOU WON" << endl;
        }

        }
    }
