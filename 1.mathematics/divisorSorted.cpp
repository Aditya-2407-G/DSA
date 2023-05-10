#include <iostream>
#include <cmath>
#include <limits.h>
#include <cstring>

using namespace std;

void divisorSorted(int n)
{
    int i=1;

    for(i; i*i<n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for(i; i>=1; i--){
        if(n%i==0){
            cout<<(n/i)<<" ";
        }
    }
}

int main()
{

    int n = 15;

    divisorSorted(n);

    return 0;
}