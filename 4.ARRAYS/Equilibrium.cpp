#include <iostream>
#include <cmath>
#include <limits.h>
#include <cstring>
using namespace std;

int NaiveEqui(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int l = 0, r = 0;

        for (int j = 0; j < i; j++) /* NAIVE METHOD WITH COMPLEXITY OF
                                        O(n^2)*/
        {
            l += arr[j];
        }

        for (int k = i + 1; k < n; k++)
        {
            r += arr[k];
        }

        if (l = r)
        {
            return true;
        }
    }
    return false;
}
int effEqui(int arr[], int n)
{
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        r = r + arr[i];
    } // optimized time complexity O(n )
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        r = r - arr[i];
        if (l == r)
        {
            return true;
        }
        l = l + arr[i];
    }
    return false;
}

int part(int arr[], int n)
{
    int Tsum = 0;
    for (int i = 0; i < n; i++)
    {
        Tsum = Tsum + arr[i];
    }

    if (Tsum % 3 != 0)
    {
        return false;
    }
    
    int target = Tsum;
    return target;
}

int main()
{

    int arr[11] = {0,2,1,-6,6,-7,9,1,2,0,1};
    int n = 11;

    cout << part(arr, n);

    return 0;
}
