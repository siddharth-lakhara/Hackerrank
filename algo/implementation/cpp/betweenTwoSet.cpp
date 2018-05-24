#include <iostream>
#include <vector>
using namespace std;

int calcGCD(int num1, int num2){
    while (num2 > 0){
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int getGCD(vector<int> a){
    int init = a[0];
    for (int i = 0; i < a.size(); i++){
        init = calcGCD(init, a[i]);
    }
    return init;
}

int getLCM(vector<int> b){
    int init = b[0];
    for (int i = 0; i < b.size(); i++){
        int temp = calcGCD(init, b[i]);
        init = init * (b[i] / temp);
    }
    return init;
}

int getTotalX(vector<int> a, vector<int> b){
    int gcd = getGCD(b);
    int lcm = getLCM(a);
    int total = 0;

    for (int i = 1; i * lcm <= gcd; i++){
        if (gcd % (i * lcm) == 0) { total++; }
    }
    return total;
}

int main() {
    int n, m, temp;
    cin >> n >> m;
    vector<int> a, b;

    for (int i = 0; i < n; i++){
        cin >> temp;
        a.push_back(temp);
    }

    for (int i = 0; i < m; i++){
        cin >> temp;
        b.push_back(temp);
    }

    int results = getTotalX(a, b);
    cout << results;
    return 0;
}
