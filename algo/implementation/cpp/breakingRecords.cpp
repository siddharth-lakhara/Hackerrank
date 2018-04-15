#include <bits/stdc++.h>
using namespace std;

vector<int> breakingRecords(vector<int> score)
{
    int countMax = 0;
    int countMin = 0;
    int max = score[0];
    int min = score[0];
    vector<int>::iterator it;
    for (it = score.begin(); it != score.end(); it++)
    {
        if (*it > max)
        {
            max = *it;
            countMax += 1;
        }
        if (*it < min)
        {
            min = *it;
            countMin += 1;
        }
    }
    vector<int> results{countMax, countMin};
    return results;
}