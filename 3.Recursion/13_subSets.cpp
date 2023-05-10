#include <iostream>
#include <cmath>
#include <limits.h>
#include <cstring>

using namespace std;

void subSet(string str, string curr , int index)
{
    if (index == str.length())
    {

        cout << curr << " ";
        return;
    }
    subSet(str, curr, index + 1);
    subSet(str, curr + str[index], index + 1);
}

int main()
{
    string str = "ABC";

    subSet(str, " ", 0);

    return 0;
}