#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    int q;
    int sum1, sum2;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> x >> y >> z;
        sum1 = abs(x - z);
        sum2 = abs(y - z);
        if (sum1 == sum2)
            cout << "Mouse C" << endl;
        else if (sum1 > sum2)
            cout << "Cat B" << endl;
        else
            cout << "Cat A" << endl;
    }
    return 0;
}
