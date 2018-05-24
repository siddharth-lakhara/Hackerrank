#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int pickNumbers(auto numbers) {
    int max = 0;
    for (int i = 0; i < 100; i++) {
        int diff = numbers[i] + numbers[i + 1];
        max = diff > max ? diff : max;
    }
    return max;
}

int main() {
    int N, temp;
    cin >> N;
    vector<int> numbers(100, 0);
    for (int i = 0; i < N; i++) {
        cin >> temp;
        numbers[temp] += 1;
    }
    cout << pickNumbers(numbers);
    return 0;
}