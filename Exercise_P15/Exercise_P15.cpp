#include <iostream>
using namespace std;

#define SIZE 10

void bubbleSort(int * const array, const int size);
void swap(int *element1Ptr, int *element2Ptr);

int main()
{
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    cout << "Data items in original order\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << a[i] << " ";
    }

    bubbleSort(a, SIZE);

    cout << "\nData items in ascending order\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}

void bubbleSort(int * const array, const int size)
{
    for (int pass = 0; pass < size - 1; pass++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

void swap(int *element1Ptr, int *element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}
