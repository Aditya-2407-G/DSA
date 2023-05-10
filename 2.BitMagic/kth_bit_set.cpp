# include<iostream>
# include<cmath>
# include<limits.h>
# include<cstring>

using namespace std;

void kbit_left(int n ,int k)
{
    if( (n & (1<<(k-1))) != 0)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}

void kbit_right(int n, int k)
{
    if(n>>(k-1) & 1 == 1){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}

    int main(){

        kbit_left(5,3);
        kbit_right(13,1);
    
return 0;
}