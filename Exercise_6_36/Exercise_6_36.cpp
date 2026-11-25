#include <iostream>
using namespace std;

void stringReverse(const char str[]);

int main()
{
    char text[100];

    cout << "Enter a string: ";
    cin.getline(text, 100);

    cout << "Reversed string: ";
    stringReverse(text);

    cout << endl;

    return 0;
}

void stringReverse(const char str[])
{
    if (str[0] == '\0')
    {
        return;
    }

    stringReverse(str + 1);

    cout << str[0];
}