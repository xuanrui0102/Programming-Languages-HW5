#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13],
          const char *wFace[],
          const char *wSuit[]);

int main()
{
    const char *suit[4] = {
        "Hearts", "Diamonds", "Clubs", "Spades"
    };

    const char *face[13] = {
        "Ace", "Deuce", "Three", "Four",
        "Five", "Six", "Seven", "Eight",
        "Nine", "Ten", "Jack", "Queen", "King"
    };

    int deck[4][13] = {0};

    srand(static_cast<unsigned int>(time(0)));

    shuffle(deck);
    deal(deck, face, suit);

    return 0;
}

void shuffle(int wDeck[][13])
{
    int row;
    int column;

    for (int card = 1; card <= 52; card++)
    {
        do
        {
            row = rand() % 4;
            column = rand() % 13;
        }
        while (wDeck[row][column] != 0);

        wDeck[row][column] = card;
    }
}

void deal(const int wDeck[][13],
          const char *wFace[],
          const char *wSuit[])
{
    for (int card = 1; card <= 52; card++)
    {
        for (int row = 0; row < 4; row++)
        {
            for (int column = 0; column < 13; column++)
            {
                if (wDeck[row][column] == card)
                {
                    cout << wFace[column]
                         << " of "
                         << wSuit[row] << "\t";

                    if (card % 2 == 0)
                        cout << endl;
                }
            }
        }
    }
}
