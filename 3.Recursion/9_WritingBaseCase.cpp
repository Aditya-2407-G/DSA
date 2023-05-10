// # include<iostream>
// # include<cmath>
// # include<limits.h>
// # include<cstring>

// using namespace std;

// int fac(int n)
// {
//     if (n==0){
//         return 1;
//     }
//     return n* fac(n-1);
// }

//     int main(){
//        cout<<fac();
    
// return 0;
// }

# include<iostream>
# include<cmath>
# include<limits.h>
# include<cstring>

using namespace std;

int fib(int n)
{
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1)+ fib(n-2);
}

    int main(){

        cout<<fib(3);
    
return 0;
}