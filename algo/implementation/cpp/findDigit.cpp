#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, n;
    int count;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int number = n;
        count = 0;
        int digit = 0;
        while (number)
        {
            digit = number % 10;
            if (digit != 0)
            {
                if (n % digit == 0)
                {
                    count++;
                }
            }
            number /= 10;
        }
        cout << count << endl;
    }
    return 0;
}