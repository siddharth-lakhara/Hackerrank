#include <iostream>
#include <cstdlib>
using namespace std;

int rev(int n) {
    int reversedNumber = 0;
    while (n) {
        int remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n = n / 10;
    }
    return reversedNumber;
}

int main() {
    int i, j, k;
    cin >> i >> j >> k;
    int count = 0;
    for (int start = i; start <= j; start++) {
        int reverse = rev(start);
        if (abs(reverse - start) % k == 0) {
            count += 1;
        }
    }
    cout << count;
    return 0;
}