#include <bits/stdc++.h>
using namespace std;

int part_lomuto(int arr[], int l, int h)
{ // Lomuto partition

    int pivot = arr[h];

    int i = l - 1;

    for (int j = l; j <= h - 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return (i + 1);
}

int part_hoare(int arr[], int l, int h)
{ // hoare partition

    int pivot = arr[l];

    int i = l - 1, j = h + 1;

    while (true)
    {

        do
        {
            i++;
        } while (arr[i] < pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
        {
            return j;
        }

        swap(arr[i], arr[j]);
    }
}

void Qsort_lomuto(int arr[], int l, int h)
{ // Qsort using lomuto

    if (l < h)
    {
        int p = part_lomuto(arr, l, h);

        Qsort_lomuto(arr, l, p - 1);
        Qsort_lomuto(arr, p + 1, h);
    }
}
void Qsort_hoare(int arr[], int l, int h)
{ // Qsort using  hoare

    if (l < h)
    {
        int p = part_hoare(arr, l, h);

        Qsort_hoare(arr, l, p);
        Qsort_hoare(arr, p + 1, h);
    }
}

int main()
{

    int arr[] = {5, 3, 8, 4, 2, 7, 1, 10};
    int l = 0;
    int h = 7;

    Qsort_lomuto(arr, l, h);

    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    Qsort_hoare(arr, l, h);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}