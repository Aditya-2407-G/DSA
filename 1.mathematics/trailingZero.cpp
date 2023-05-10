

# include<iostream>
# include<cmath>

# include<cstring>

using namespace std;

int countTrailingZeros(int n)
{
    int rev = 0;

    for(int i = 5; i <=n; i =i*5)
    {
        rev = rev +n/i;
    }
    return rev;
}

    int main(){
        
        cout<<countTrailingZeros(10);
return 0;
}