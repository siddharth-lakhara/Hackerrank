#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    int n, k;
    for (int i = 0; i < t; i++) {
        cin >> n >> k;
        int temp;
        int count = 0;
        for (int j = 0; j < n; j++) {
            cin >> temp;
            if (temp <= 0)
                count += 1;
        }
        if (count >= k) { cout << "NO"; }
        else { cout << "YES"; }
        cout << endl;
    }

    return 0;
}