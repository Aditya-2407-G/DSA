#include <bits/stdc++.h>
using namespace std;
// when there are two sorted arrays
void intersection(int a[], int b[], int m, int n)
{

    int i = 0, j = 0;

    while (i < m && j < n)
    {

        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}

void intersection_naive(int a[], int b[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            continue;
        }
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }
}

int main()
{

    int a[] = {3, 5, 10, 10, 10, 15, 15, 20};
    int b[] = {5, 10, 10, 15, 30};

    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    intersection_naive(a, b, m, n);

    return 0;
}