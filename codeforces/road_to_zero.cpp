#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while(t--) {
    long long x, y, a, b;
    cin >> x >> y >> a >> b;
 
    if((a * 2) < b) {
      cout << a * (x + y) << endl;
    } else {
      if(x == y) {
        cout << b * x << endl;
      } else if(x < y) {
        cout << (b * x) + ((y - x) * a) << endl;
      } else {
        cout << (b * y) + ((x - y) * a) << endl;
      }
    }
  }
}