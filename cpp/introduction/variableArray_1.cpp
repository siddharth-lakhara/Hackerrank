// This solution uses vectors of vectors to create a matrix
// Other solution using pointers is available in file variableArray_2.cpp

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q, k, temp;
    int i, j;
    cin >> n >> q;
    vector< vector<int> > arr;
    
    for (int x=0; x<n; x++) {
        vector<int> tempVector;
        cin >> k;
        for (int y=0; y<k; y++) {
            cin >> temp;
            tempVector.push_back(temp);
        }
        arr.push_back(tempVector);
    }
    
    for (int x=0; x<q; x++) {
        cin >> i >> j;
        cout << arr[i][j] << endl;
    }
    
    return 0;
}
