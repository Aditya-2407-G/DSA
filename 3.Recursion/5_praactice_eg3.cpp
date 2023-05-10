# include<iostream>
# include<cmath>
# include<limits.h>
# include<cstring>

using namespace std;


int fun(int n)
{
    if(n==1)
    {
        return 0;
    }
    else
    {
        return 1 + fun(n/2);
    }
}

    int main(){

       cout<< fun(19);
    
return 0;
}