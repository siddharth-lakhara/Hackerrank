#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    int i, j, count = 0;
    cin >> N >> K;
    int a[N];
    for (i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if ((a[i] + a[j]) % K == 0)
                count++;
        }
    }
    cout << count;
    return 0;
}
