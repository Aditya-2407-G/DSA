#include <bits/stdc++.h>
using namespace std;

void part(int arr[], int l, int h , int p){

    int temp [h-l+1], index =0;

    for(int i =l; i<=h; i++){

        if(arr[i] <= arr[p]){
            temp[index] = arr[i];
            index++;
        }
    }

    for(int i =l; i<=h;i++){
        if(arr[i]>arr[p]){
            temp[index] = arr[i];
            index++;
        }
    }

    for(int i =l; i<=h;i++){
        arr[i] = temp[i-l];
    }
}

int main(){

    int arr[] = {3,8,6,12,10,7};
    int n = 6;
    int l= 0;
    int h = 5;
    int p =5;

    part(arr, l,h,p);

    for(auto x : arr){
        cout<<x<<" ";
    }
    
    return 0;
}