#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k, q;
    int temp, index;
    cin >> n >> k >> q;
    k = k % n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++)
    {
        cin >> temp;
        index = (temp - k + n) % n;
        cout << arr[index] << endl;
    }
    return 0;
}