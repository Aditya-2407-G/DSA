#include <bits/stdc++.h>
using namespace std;

int naiveDiff(int arr[], int n){

    int res = INT_MAX;

    for(int i =1; i<n; i++){

        for(int j =0 ; j <i; j++){

            res = min(res,abs(arr[j]- arr[i]));
        }
    }
    return res;
}

int lomuto(int arr[], int l ,int h){

    int pivot = arr[h];

    int i = l-1;

    for(int j =l; j<=h; j++){

        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[h]);

    return (i+1);


}

void Qsort(int arr[] ,int l ,int h ){

    if(l<h){

        int p = lomuto(arr, l, h);

        Qsort(arr, l ,p-1);
        Qsort(arr, p+1, h);
        
    }
}

int quickDiff(int arr[], int n){
    
    int res = INT_MAX;

    for(int i =1; i <n; i++){
        res = min(res , arr[i] - arr[i-1]);
    }
    return res;
}

int simpleDiff(int arr[], int n){

    int res = INT_MAX;

    sort(arr, arr+n);

    for(int i = 1; i<n; i++){

        res = min(res , arr[i] - arr[i-1]);
    }
    return res;
}
int main(){

    int arr[] = {5,15,1,8,5};
    int l =0;
    int n =sizeof(arr)/sizeof(arr[0]);
    int h = n-1;

    Qsort(arr,l,h);

    cout<<"The Sorted Array: ";

    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"The minimum diffrence is: "<<simpleDiff(arr, n)<<endl;
    cout<<"The minimum diffrence is: "<<naiveDiff(arr, n)<<endl;
    cout<<"The minimum diffrence is: "<<quickDiff(arr, n)<<endl;


    
    
    return 0;
}