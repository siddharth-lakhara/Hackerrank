#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int temp;
    cin >> n;
    vector<int> arr(n, 0);
    vector<int> result(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr[temp - 1] = i;
    }
    for (int i = 0; i < n; i++)
    {
        int index = arr[i];
        cout << arr[index] + 1 << endl;
    }
    return 0;
}