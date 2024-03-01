#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
  int n, t;
  cin >> n >> t;
 
  string answer = "";
  if(t == 10) {
    if(n == 1) {
      answer = to_string(-1);
    } 
    else {
      for(int i = 0; i < n - 1; i++) {
        answer += '1';
      }
      answer += '0';
    }
  } else {
    for(int i = 0; i < n; i++) {
      answer += to_string(t);
    }
  }
  cout << answer << endl;
}