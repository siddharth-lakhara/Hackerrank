#include <vector>
#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    vector<string> list = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (number > 9) {
        cout << "Greater than 9";
    } else {
        cout << list[number-1];
    }
    
    return 0;
}
