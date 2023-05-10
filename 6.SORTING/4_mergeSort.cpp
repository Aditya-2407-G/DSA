#include <bits/stdc++.h>
using namespace std;
// Merge function for merge sort

void merge(int a[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left[n1];
    int right[n2];

    for (int i = 0; i < n1; i++)
    {
        left[i] = a[low + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = a[mid + i + 1];
    }

    // for(int i =0; i<n1; i++)
    // {
    //     cout<<left[i]<<" ";

    // }
    // for(int i =0; i<n2; i++)
    // {
    //     cout<<right[i]<<" ";

    // }

    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2)
    {

        if (left[i] <= right[j])
        {
            a[k] = left[i];
            k++;
            i++;
        }
        else
        {
            a[k] = right[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = right[j];
        j++;
        k++;
    }
}
void mergeSort(int a[], int low, int high)
{
    if (high > low)
    {
        int m = low + (high - low) / 2;

        mergeSort(a, low, m);
        mergeSort(a, m + 1, high);
        merge(a, low, m, high);
    }
}


int main()
{
    int a[] = {10, 15, 20, 544, 8, 11, 55};
    
    int low = 0;
    int high = 6;

    mergeSort(a,low, high);
    for(int x : a){
        cout<<x<<" ";
    }
    // merge(a, n, low, mid, high);

    return 0;
}