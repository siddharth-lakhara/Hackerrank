#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int hh, ss, mm;
    string str;
    char ch;
    cin >> hh >> ch >> mm >> ch >> ss >> str;
    if (str == "PM" && hh != 12)
    {
        hh += 12;
    }
    if (str == "AM" && hh == 12)
        hh = 0;
    cout << setw(2) << setfill('0');
    cout << hh << ":";
    cout << setw(2) << setfill('0');
    cout << mm << ":";
    cout << setw(2) << setfill('0') << ss;
    return 0;
}