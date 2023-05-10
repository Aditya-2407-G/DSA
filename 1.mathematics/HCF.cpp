# include<iostream>
# include<cmath>

# include<cstring>

using namespace std;

int gcd(int a,int b)
{
    int res = min(a,b);
    while(res>0)
    {
        if(a%res==0 && b%res==0)
        {
            break;
        }
        else 
        {
          res--;  
        }
        
    }
    return res;
}

    int main(){

        cout<<gcd(350,85);
    
return 0;
}