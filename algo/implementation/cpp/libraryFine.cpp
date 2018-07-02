#include <iostream>
using namespace std;

int main()
{
    int dd1, mm1, yy1;
    int dd2, mm2, yy2;
    cin >> dd1 >> mm1 >> yy1; // return date
    cin >> dd2 >> mm2 >> yy2; // last date
    int fine;
    if (yy2 < yy1)
        fine = 10000;
    else if (yy1 == yy2 && mm2 < mm1)
        fine = 500 * (mm1 - mm2);
    else if (yy1 == yy2 && mm1 == mm2 && dd2 < dd1)
        fine = 15 * (dd1 - dd2);
    else
        fine = 0;

    cout << fine;

    return 0;
}
