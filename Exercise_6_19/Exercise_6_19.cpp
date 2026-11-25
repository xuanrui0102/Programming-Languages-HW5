#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int SIZE = 13;
    const int ROLLS = 36000;

    int frequency[SIZE] = {0};

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < ROLLS; i++)
    {
        int die1 = 1 + rand() % 6;
        int die2 = 1 + rand() % 6;

        int sum = die1 + die2;

        frequency[sum]++;
    }

    cout << "Sum" << setw(15) << "Frequency" << endl;

    for (int sum = 2; sum <= 12; sum++)
    {
        cout << setw(3) << sum
             << setw(15) << frequency[sum]
             << endl;
    }

    return 0;
}