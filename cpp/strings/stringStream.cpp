#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> retVector;
    int temp;
    char ch;
    while (ss) {
        ss >> temp;
        ss >> ch; // skips ','
        retVector.push_back(temp);
    }
    return retVector;
    
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

