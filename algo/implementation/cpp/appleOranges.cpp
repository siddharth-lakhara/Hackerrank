#include <bits/stdc++.h>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    vector<int>::iterator it;
    int scores_apples = 0;
    int scores_oranges = 0;
    int left_corner = min(s, t);
    int right_corner = max(s, t);

    for (it = apples.begin(); it != apples.end(); it++)
    {
        int dist = a + (*it);
        if (dist >= left_corner && dist <= right_corner)
        {
            scores_apples++;
        }
    }

    for (it = oranges.begin(); it != oranges.end(); it++)
    {
        int dist = b + (*it);
        if (dist >= left_corner && dist <= right_corner)
        {
            scores_oranges++;
        }
    }

    cout << scores_apples << endl
         << scores_oranges;
}