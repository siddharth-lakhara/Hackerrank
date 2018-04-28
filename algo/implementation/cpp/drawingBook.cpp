#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int N, P;
    int results;
    cin >> N >> P;
    bool dir = (P > N/2);
    if (dir) { results = (N / 2) - (P / 2); }
    else { results = P / 2; }

    cout << results;
    return 0;
}
