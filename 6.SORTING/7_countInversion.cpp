#include <bits/stdc++.h>
using namespace std;

int naiveInversion(int arr[], int n)
{
    int res = 0;

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] > arr[j]){
                res++;
            }
        }
    }
    return res;
}

int Inversion(int arr[], int l, int m, int h)
{

    int n1 = m - l + 1, n2 = h - m;

    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[m + 1 + i];
    }

    int i =0, j =0 ,res =0 , k = l;

    while(i<n1 && j<n2){

        if(left[i]<= right[j]){
            arr[k] = left[i];
            i++;
        }

        else{
            arr[k] = right[j];
            j++;
            res = res + (n1-i);
        }
        k++;
    }

    while(i<n1){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = right[j];
        j++;
        k++;
    }
    return res;

}

int main()
{

    int arr[] = {2,5,8,11,3,6,9,13};
    int h = 7;
    int l =0;
    int m = 3;


    cout<<Inversion(arr,l,m,h);

    return 0;
}