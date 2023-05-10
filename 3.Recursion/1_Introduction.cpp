# include<iostream>
# include<cmath>
# include<limits.h>
# include<cstring>

using namespace std;

void fun1()
{
    cout<<"fun1 \n";

}

void fun2()
{
    cout<<"Before fun1 \n";
    fun1();
    cout<<"After fun1 \n";
}



    int main(){
    

    cout<<"Before fun 2 \n";
    fun2();
    cout<<"After fun 2 \n";
return 0;
}