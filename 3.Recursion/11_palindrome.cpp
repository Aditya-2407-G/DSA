# include<iostream>
# include<cmath>
# include<limits.h>
# include<cstring>

using namespace std;

isPal(string str , int start ,int end)
{
    if(start>=end){
        return true;
    }

    return (str[start]== str[end]) && isPal(str, start+1, end-1);
}

    int main(){

        string A = "babb";
        cout<<isPal(A,0,A.length() - 1);
    
return 0;