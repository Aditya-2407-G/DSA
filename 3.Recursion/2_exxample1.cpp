#include <iostream>
#include <cmath>
#include <limits.h>
#include <cstring>

using namespace std;

void fun1(int n)
{

    if (n == 0)
    {
        return;
    }

    cout << "GFG" << endl;

    fun1(n - 1);
}

int main()
{

    fun1(8);

    return 0;
}