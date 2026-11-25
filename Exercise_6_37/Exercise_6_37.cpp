#include <iostream>
using namespace std;

int recursiveMaximum(const int array[], int size);

int main()
{
    int a[] = {12, 45, 8, 97, 23};
    int size = 5;

    cout << "Array elements: ";

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    int maximum = recursiveMaximum(a, size);

    cout << "Maximum value: " << maximum << endl;

    return 0;
}

int recursiveMaximum(const int array[], int size)
{
    if (size == 1)
    {
        return array[0];
    }

    int max = recursiveMaximum(array, size - 1);

    if (array[size - 1] > max)
    {
        return array[size - 1];
    }
    else
    {
        return max;
    }
}
