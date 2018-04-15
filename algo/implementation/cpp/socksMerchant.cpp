#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, count = 0;
    int i, temp;
    set<int> socks;
    set<int>::iterator It;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> temp;
        It = find(socks.begin(), socks.end(), temp);
        if (It == socks.end())
        {
            socks.insert(temp);
        }
        else
        {
            count++;
            socks.erase(It);
        }
    }
    cout << count;
    return 0;
}