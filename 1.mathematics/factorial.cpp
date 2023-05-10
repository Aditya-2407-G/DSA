# include<iostream>
# include<cmath>

# include<cstring>

using namespace std;

int fac (int n)
{
    int i = 1, fact =1;

    while (i <=n)
    {
        fact = fact *i;
        i++;
    }
    return fact;
}

    int main(){


        

        int n;
        cout<<"Enter number:";

        cin>>n;
        int a =fac(n);
        
        int count = 0;
        while (a%10==0)
        {
            count++;
            a = a /10;
        }
        cout<<count<<endl;
        cout<<fac(n);

    
return 0;
}