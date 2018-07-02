#include <iostream>
#include <cmath>
using namespace std;

int calcSquares(int start, int end)
{
    int count = 0;
    float first = sqrt(start);
    if (first - floor(first) == 0)
    {
        count = 1;
    }
    int first_int = int(first);
    int second = sqrt(end);
    return count + (second - first_int);
}

int main()
{
    int T;
    int A, B;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> A >> B;
        cout << calcSquares(A, B) << endl;
    }

    return 0;
}