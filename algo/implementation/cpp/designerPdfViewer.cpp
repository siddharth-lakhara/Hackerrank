#include <iostream>
#include <vector>
#include <string>
using namespace std;

int designerPdfViewer(vector<int> h, string word) {
  int max = 0;
  for (int i=0; i<word.size(); i++) {
    int index = int(word[i]-'a'+1);
    if (h[index-1] > max) { max = h[index-1]; }
  }
  return max*word.size();
}

int main() {
  vector<int> h(26);
  string word;
  for (int i=0; i<26; i++) {
    cin >> h[i];
  }
  cin >> word;
  cout << designerPdfViewer(h, word);
}