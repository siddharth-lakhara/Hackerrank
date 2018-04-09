#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int a[3], temp, b[3], A = 0, B = 0, i;
    for (i = 0; i < 3; i++)
        cin >> a[i];
    for (i = 0; i < 3; i++)
    {
        cin >> temp;
        if (a[i] > temp)
            A++;
        else if (a[i] < temp)
            B++;
    }
    cout << A << " " << B;
    return 0;
}