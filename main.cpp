#include <iostream>

using namespace std;
void minmax(int inputArr[], int low, int high, int &min, int &max);

int main()
{

    int size;

    cout << "Enter total number of elements: ";

    cin >> size;

    int inputArr[size];

    cout << "Enter elements of array\n";

    for (int i = 0; i < size; i++)
    {
        cin >> inputArr[i];
    }

    int max = INT_MIN, min = INT_MAX;
    minmax(inputArr, 0, size - 1, min, max);

    cout << "\nValue of Minimum element is: " << min << endl;
    cout << "Value of Maximum element is: " << max << endl;

    return 0;
}
void minmax(int inputArr[], int low, int high, int &min, int &max)
{

    if (low == high)
    {
        if (max < inputArr[low])
        {
            max = inputArr[low];
        }

        if (min > inputArr[high])
        {
            min = inputArr[high];
        }

        return;
    }


    if (high - low == 1)
    {
        if (inputArr[low] < inputArr[high])
        {
            if (min > inputArr[low])
            {
                min = inputArr[low];
            }

            if (max < inputArr[high])
            {
                max = inputArr[high];
            }
        }
        else
        {
            if (min > inputArr[high])
            {
                min = inputArr[high];
            }

            if (max < inputArr[low])
            {
                max = inputArr[low];
            }
        }
        return;
    }

    int mid = (low + high) / 2;

    minmax(inputArr, low, mid, min, max);

    minmax(inputArr, mid + 1, high, min, max);
}
