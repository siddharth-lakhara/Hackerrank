#include <iostream>
#include <algorithm>
using namespace std;

int utopianTree(int n) {
    if (n == 0) { return 1; }

    // if n is odd
    if (n & 1) { return 2 * utopianTree(n - 1); }
    // if n is even
    else { return 1 + utopianTree(n - 1); }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int temp;
        cin >> temp;
        cout << utopianTree(temp) << endl;
    }
    return 0;
}