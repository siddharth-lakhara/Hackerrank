#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    setprecision(6);
    int size, temp;
    float Neg = 0.0, Pos = 0.0, Zer = 0.0;
    cin >> size;
    //vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        if (temp < 0)
            Neg++;
        else if (temp > 0)
            Pos++;
        else
            Zer++;
    }
    cout << Pos / size << endl;
    cout << Neg / size << endl;
    cout << Zer / size << endl;
    return 0;
}
