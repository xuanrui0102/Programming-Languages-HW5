#include <iostream>
using namespace std;

int recursiveBinarySearch(const int array[],
                          int start, int end, int key);

int main()
{
    const int SIZE = 10;
    int a[SIZE] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    int searchKey;

    cout << "Enter a number to search: ";
    cin >> searchKey;

    int result = recursiveBinarySearch(
        a, 0, SIZE - 1, searchKey
    );

    if (result != -1)
    {
        cout << "Found value at index "
             << result << endl;
    }
    else
    {
        cout << "Value not found" << endl;
    }

    return 0;
}

int recursiveBinarySearch(const int array[],
                          int start, int end, int key)
{
    if (start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if (array[mid] == key)
    {
        return mid;
    }
    else if (key < array[mid])
    {
        return recursiveBinarySearch(
            array, start, mid - 1, key
        );
    }
    else
    {
        return recursiveBinarySearch(
            array, mid + 1, end, key
        );
    }
}