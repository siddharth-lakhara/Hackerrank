#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    long long int A, sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A;
        sum += A;
    }
    cout << sum;
    return 0;
}
