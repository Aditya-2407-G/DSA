#include <bits/stdc++.h>
using namespace std;

void selectSort(int arr[], int n)
{

    int temp[n];

    for (int i = 0; i < n; i++)
    {
        int min_ind = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }
                swap(arr[i], arr[min_ind]);
    }
}

int main()
{

    int arr[] = {24,86,12,5,3,4,6};
    int n = 7;
    selectSort(arr, n);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}