#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int temp;
    vector<int> clouds;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        clouds.push_back(temp);
    }

    int cur_pos = 0;
    int energy = 100;
    for (int i = 0;; i++)
    {
        cur_pos = (cur_pos + k) % n;
        energy = clouds[cur_pos] ? energy - 3 : energy - 1;
        if (cur_pos == 0)
        {
            break;
        }
    }
    cout << energy << endl;
    return 0;
}