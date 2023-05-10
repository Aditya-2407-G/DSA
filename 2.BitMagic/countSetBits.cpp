#include <iostream>
#include <cmath>
#include <limits.h>
#include <cstring>

using namespace std;

// int countBits(int n)
// {
//     int count = 0;

//     while(n>0)
//     {
//         if((n&1)==1)
//         {
//             count++;
//         }
//         n=n>>1;
//     }

//         cout<<count;

// }

int countBits(int n)
{
    int count =0;

    while(n>0)
    {
        n=(n&(n-1));
        count++;
    }
    cout<< count;
}


int main()
{

    countBits();

    return 0;
}