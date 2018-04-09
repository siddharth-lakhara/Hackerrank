#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, temp;
    int sum = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        sum += temp;
    }
    cout << sum;
    return 0;
}