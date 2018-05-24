#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int shared = 5;
    int liked = 0, total = 0;
    for (int i = 0; i < n; i++)
    {
        liked = shared / 2;
        total += liked;
        shared = liked * 3;
    }
    cout << total;
    return 0;
}