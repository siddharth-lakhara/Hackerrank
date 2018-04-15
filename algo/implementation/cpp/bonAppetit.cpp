#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, K, i, C_charge;
    int sum = 0, sumK, temp;
    int C_actual;
    cin >> N >> K;
    for (i = 0; i < N; i++)
    {
        cin >> temp;
        sum += temp;
        if (i == K)
            sumK = temp;
    }
    cin >> C_charge;
    C_actual = (sum - sumK) / 2;
    if (C_actual == C_charge)
    {
        cout << "Bon Appetit";
    }
    else
    {
        cout << C_charge - C_actual;
    }
    return 0;
}
