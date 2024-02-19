#include <iostream>
using namespace std;

int n;

int main() {
  ios_base::sync_with_stdio(false);
  cin >> n;

  while(n--) {
    string word;
    cin >> word;
    
    if(word.size() > 10) {
      cout << word[0] << word.size() - 2 << word[word.size() - 1] << endl;
    } else {
      cout << word << endl;
    }
  }
}