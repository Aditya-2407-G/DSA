#include <iostream>
#include <cmath>
#include <limits.h>
#include <cstring>

using namespace std;

void printPrimeFactor(int n)
{
    if (n <= 1)
        return;

    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }

    if (n > 1)
    {

        cout << n << " ";
    }
    cout << endl;
}

int main()
{

    printPrimeFactor(450);

    return 0;
}