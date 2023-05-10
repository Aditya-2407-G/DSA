#include <iostream>
#include <cmath>
#include <limits.h>
#include <cstring>
using namespace std;

int main()
{

    int arr[10000] = {7, 6, 2, 7};

    int sum = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        sum = sum + arr[i];
    }
    if (sum % 3 != 0)
    {
        cout << "false";
        exit(0);
    }

    int partSum = sum / 3;
    int tempSum = 0;
    int parts = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        tempSum = tempSum + arr[i];
        if (tempSum == partSum)
        {
            parts++;
            tempSum = 0;
        }
    }
    if (parts == 3)
    {
        cout << "true";
    }
    else{
        cout<<"false";
    }

    return 0;
}