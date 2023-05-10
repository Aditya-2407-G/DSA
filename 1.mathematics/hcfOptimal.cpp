// # include<iostream>
// # include<cmath>

// # include<cstring>

// using namespace std;
// int gcd (int a, int b)
// {
//     while(a !=b)
//     {
//         if (a>b)
//         {
//          a=a-b;  
//         }
//         else 
//         {
//             b=b-a;
//         } 
//     }
//     return a;
// }

//     int main(){
//         cout<<gcd(15,45);
    
// return 0;
// }



# include<iostream>
# include<cmath>

# include<cstring>

using namespace std;
int gcd (int a , int b)
{
    if (b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}

    int main(){

        cout<<gcd(15,45);
    
return 0;
}