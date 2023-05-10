# include<iostream>
# include<cmath>

# include<cstring>

using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}

int LCM(int a, int b){
    return (a*b)/gcd(a,b);
    }

    int main(){

        cout<<LCM(2,8);
    
return 0;
}