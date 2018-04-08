#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    vector<int> arr;
    int temp;
    for (int i=0; i<N; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    
    for (int i=N-1; i>=0; i--) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
