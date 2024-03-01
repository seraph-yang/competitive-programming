#include <iostream>
using namespace std;
 
int main() {
  int n, x;
  cin >> n >> x;
 
  int result = 0;
 
  for(int i = 1; i <= n; i++) {
    if(x % i == 0) {
      if(x / i <= n) {
        result++;
      }
    }
  }
 
  cout << result << endl;
}