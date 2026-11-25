#include <iostream>
using namespace std;

int main()
{
    int a;
    int *aPtr;

    a = 7;
    aPtr = &a;

    cout << "The address of a is " << &a << endl;
    cout << "The value of aPtr is " << aPtr << endl;

    cout << "\nThe value of a is " << a << endl;
    cout << "The value of *aPtr is " << *aPtr << endl;

    cout << "\nShowing that * and & are complements of each other.\n";
    cout << "&*aPtr = " << &*aPtr << endl;
    cout << "*&aPtr = " << *&aPtr << endl;

    return 0;
}