# include<iostream>
# include<cmath>
# include<limits.h>
# include<cstring>

using namespace std;

// bool isPow2(int n)
// {
//     if(n==0){
//         return false;
//     }

//     while(n!=1){
//         if(n%2!=0){
//             return false;     
//         }
//         n =n/2;
//     }
//     return true;
// }

bool isPow2(int n)
{
    if(n==0){
        return false;
    }
    return ((n&(n-1)) ==0);  // Brian kerningam algorithm
}

    int main(){

        cout<<isPow2(1024);
    
return 0;
}