# include<iostream>
# include<cmath>
# include<limits.h>
# include<cstring>

using namespace std;

int power(int x, int n)
{
    int res =1;

    for(int i =0; i<n; i++)
    {
        res = res*x;
    }
    return res;
}

    int main(){

        cout<<pow(5,9);
    
return 0;
}