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


    fun(n-1);
    cout<<n<<endl;
    fun(n-1);
}
    int main(){

        fun(3);
    
return 0;
}