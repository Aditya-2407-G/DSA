# include<iostream>
# include<cmath>

# include<cstring>

using namespace std;

int LCM(int a, int b)
{
    int res = max(a,b);

    while(true){
        if(res%a==0 && res%b==0){
            return res;
        }
        res++;
    }
    return res;
}

    int main(){

        cout<<LCM(3,7);
    
return 0;
}