#include <bits/stdc++.h>
using namespace std;

int part(int arr[] , int l ,int h){

    int p = arr[h];

    int i = l-1;

    for(int j =l; j<= h-1; j++){         

        if(arr[j]<p){
            i++;
        }
    }
    swap(arr[i+1], arr[h]);

    return (i+1);


}


int kSmallest(int arr[], int n ,int k){a

    int low =0 , high = n-1;

    while(low<=high){

        int p = part(arr, low, high);

        if(p == k-1){
             return arr[p];
        }
        else if(p>k-1){
            high = p-1;
        }
        else{
            low =p+1;
        }

        
    }


}
int main(){

    int n;

    cout<<"Imput the size of array:";
    cin>>n;
    cout<<"Input the array"<<endl;
    
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i]; 
    }
    int size = sizeof(arr)/sizeof(arr[0]);

    int k;
    cout<<"Enter the nTh element to be found:";
    cin>>k;
    
   

    cout<<"The "<<k <<"th smallest element in the array is: "<<kSmallest(arr,size,k);
    
    
    return 0;
}