#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    vector<int> arr(n);
    vector<int> count(1000, 0);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        count[arr[i]]++;
    }
    int sz = n;
    sort(arr.begin(), arr.end());
    for (i = 0; i < n;)
    {
        cout << sz << endl;
        i += count[arr[i]]; /*
        while (arr[j]<=arr[i]){
            j++;
        }*/
        sz = n - i;
    }
    return 0;
}