#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, i, temp;
    vector<int> V(6);
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> temp;
        V[temp]++;
    }
    vector<int>::iterator It = max_element(V.begin(), V.end());
    int ans = It - V.begin();
    cout << ans;
    return 0;
}
