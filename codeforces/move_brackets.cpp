#include <iostream>
using namespace std;
 
int main() {
  int t;
  cin >> t;
 
  while(t--) {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int offset = 0;
    int max_offset = offset;
    for(int i = 0; i < n; i++) {
      if(s[i] == '(') offset++;
      else offset--;
      if(offset < max_offset) max_offset = offset;
    }
 
    cout << abs(max_offset) << endl;
  }
}