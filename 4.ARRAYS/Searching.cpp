# include <iostream>
# include <cmath>
# include <limits.h>
# include <cstring>
using namespace std;

int search(int arr[] ,int n,int k)
{
    for(int i =0; i<n; i++)
    {
        if(k == arr[i])
        {
            cout<<"Found at index "<<i;
            exit(0);
        }
    }
    cout<<"Not found"<<endl;
}

int main(){

    int arr[4] ={20,5,7,25};
    int n =4;
    int k = 25  ;

    search(arr,n,k);
    
    return 0;
}