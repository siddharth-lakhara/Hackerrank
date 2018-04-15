#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, temp;
    vector<int> square;
    int d, m;
    int count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        square.push_back(temp);
    }
    cin >> d >> m;

    for (int i = 0; i <= n - m; i++)
    {
        int sum = 0;
        for (int j = i; j < i + m; j++)
        {
            sum += square[j];
        }
        if (sum == d)
        {
            count += 1;
        }
    }

    cout << count;
    return 0;
}
