# include<iostream>
# include<cmath>
# include<limits.h>
# include<cstring>

using namespace std;

void fun(int n)
{
    if(n==0)
    {
        return;
    }
    fun(n/2);
    cout<<(n%2)<<endl;
}

    int main(){


        fun (32);
    
return 0;
}