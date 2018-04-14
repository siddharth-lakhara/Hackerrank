#include <cmath>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, max;
    int temp;
    multiset<int> Myset;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        Myset.insert(temp);
    }
    if (!Myset.empty())
        max = *Myset.rbegin();

    cout << Myset.count(max) << endl;

    return 0;
}
