#include <bits/stdc++.h>
using namespace std;

int sort_naive(int arr[], int n)
{

    int temp[n], i = 0;

    for (int j = 0; j < n; j++)
    {

        if (arr[j] == 0)
        {

            temp[i] = arr[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {

        if (arr[j] == 1)
        {

            temp[i] = arr[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {

        if (arr[j] == 2)
        {

            temp[i] = arr[j];
            i++;
        }
    }

    for (int j = 0; j < n; j++)
    {

        arr[j] = temp[j];
    }
}

int sort_eff(int arr[], int n){

    int low =0, mid=0, high =n-1;

    while(mid<=high){

        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }

        else if(arr[mid]== 1){

            mid++;
        }
        else{

            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{

    int arr[] = {0,1,1,2,0,1};

    int n = sizeof(arr)/sizeof(arr[0]);

    sort_eff(arr,n);

    for(int x : arr){

        cout<<x<<" ";
    }



    return 0;
}