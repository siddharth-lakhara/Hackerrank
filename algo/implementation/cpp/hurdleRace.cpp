#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, K;
    int temp, max = 0, ans = 0;
    cin >> N >> K;
    for (int i = 0; i < N; i++){
        cin >> temp;
        if (temp > max) { max = temp; }
    }
    if (max > K) { ans = max - K; }
    cout << ans;
    return 0;
}
