#include <bits/stdc++.h>
using namespace std;

int lomuto(int arr[], int l, int h)
{

    int pivot = arr[h];

    int i = l - 1;

    for (int j = l; j <= h; j++)
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

int main()
{

    int arr[] = {10,4,5,8,11,26,6};
    int l =0; int h =6;

    lomuto(arr,l,h);

    for(int x : arr){
        cout<<x<<" ";
    }

    return 0;
}