#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long n, m, s;
    long chair;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m >> s;
        chair = (s + m - 1) % n;
        if (chair % n == 0)
        {
            cout << n;
        }
        else
        {
            cout << chair;
        }
        cout << endl;
    }
    return 0;
}