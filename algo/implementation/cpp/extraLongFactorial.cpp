#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> multiply(vector<int> ans, int i)
{
    int carry = 0;
    int sz = ans.size();
    int temp;
    for (int j = 0; j < ans.size(); j++)
    {
        temp = ans[j] * i + carry;
        ans[j] = temp % 10;
        carry = temp / 10;
    }

    while (carry)
    {
        ans.push_back(carry % 10);
        carry /= 10;
    }
    return ans;
}

int main()
{
    vector<int> ans;
    int n, i;
    cin >> n;
    ans.push_back(1);
    for (i = 2; i <= n; i++)
    {
        ans = multiply(ans, i);
    }

    for (i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }
}
