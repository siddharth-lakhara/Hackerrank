#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    vector<string> list = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a, b;
    cin >> a >> b;
    
    for (int i=a; i<=b; i++) {
        if (i<=9) {
            cout << list[i-1];
        } else if (i%2 == 0){
            cout << "even";
        } else {
            cout << "odd";
        }
        cout << endl;
    }
    return 0;
}
