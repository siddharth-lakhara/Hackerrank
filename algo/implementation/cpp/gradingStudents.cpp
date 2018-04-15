#include <bits/stdc++.h>
using namespace std;

vector<int> gradingStudents(vector<int> grades)
{
    vector<int>::iterator It;
    for (It = grades.begin(); It != grades.end(); It++)
    {
        if (*It >= 38 && *It % 5 >= 3)
        {
            int multiplier = *It / 5;
            *It = (multiplier + 1) * 5;
        }
    }
    return grades;
}