#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bubbleSort_Optimized(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool counter = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);

                counter = true;
            }
        }
        if (counter == false)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}


