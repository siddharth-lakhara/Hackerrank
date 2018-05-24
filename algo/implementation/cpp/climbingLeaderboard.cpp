#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> scores;
    int scores_count, curr, prev = -1;
    cin >> scores_count;
    for (int i = 0; i < scores_count; i++) {
        cin >> curr;
        if (curr != prev) {
            scores.push_back(curr);
            prev = curr;
        }
    }

    int alice_count;
    cin >> alice_count;
    int limit = scores.size();
    for (int i = 0; i < alice_count; i++) {
        cin >> curr;
        int j = 0;
        for (j = limit - 1; j >= 0; j--) {
            if (curr < scores[j]) {
                limit = j + 1;
                break;
            }
        }
        cout << j + 2 << endl;
    }

    return 0;
}