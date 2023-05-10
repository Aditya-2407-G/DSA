// #include <bits/stdc++.h>
// using namespace std;

// int sort(int arr[], int l ,int h){

//     int pivot = arr[l];

//     int i = l-1;
//     int j = h+1;

//     while(true){

//         do{
//             i++;

//         }while(arr[i] < 0);

//         do{
//             j--;

//         }while(arr[j] >= 0);

//         if(i>=j){
//             return j;
//         }

//         swap(arr[i], arr[j]);
//     }
// }

// int main(){

//     int arr[] = {-11,25,11,-4,2};

//     int n = sizeof(arr)/sizeof(arr[0]);

//     int l = 0;

//     int h = n-1;

//     sort(arr,l,h);

//     for(int x: arr){
//         cout<<x<<" ";
//     }

//     return 0;
// }
