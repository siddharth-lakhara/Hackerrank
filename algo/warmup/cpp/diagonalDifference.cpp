#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, i, j;
    int temp, sum1 = 0, sum2 = 0;
    cin >> N;
    vector<vector<int>> mat(N, vector<int>(N));
    for (i = 0; i < N; i++)
    {
        vector<int> tempVector;
        for (j = 0; j < N; j++)
        {
            cin >> mat[i][j];
            if (i + j == N - 1)
                sum2 += mat[i][j];
            if (i == j)
                sum1 += mat[i][j];
        }
    }
    sum1 = abs(sum1 - sum2);
    cout << sum1;

    return 0;
}