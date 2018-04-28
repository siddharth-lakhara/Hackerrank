#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    string str;
    int N, level = 0, count = 0;
    cin >> N;
    cin.ignore();
    getline(cin, str);
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'U') { level++; }
        else {
            level--;
            if (level == -1) { count++; }
        }
    }
    cout << count;
    return 0;
}
