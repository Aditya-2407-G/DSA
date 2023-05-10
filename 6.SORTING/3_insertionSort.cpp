#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[] ,int n)
{
    for(int  i =1; i<n; i++)
    {
        int key = arr[i];

        int j = i -1;

        while(j>= 0 && arr[j] > key)
        {
            arr[j+1] =arr[j];
            j--;
        }
        arr[j+1] = key;
    }   
}

int main(){

    int arr[] = {77,22,55,44,88,11,33,66};

    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,n);

    for(auto x: arr){
        cout<<x<<" ";
    }
    
    return 0;
}