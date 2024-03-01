#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
  int n, m;
  cin >> n >> m;
 
  int one, two;
  if(n % 2 == 0) {
    two = n / 2;
    one = 0;
  } else {
    two = floor(n / 2);
    one = 1;
  }
 
  bool flag = false;
  if((one + two) % m == 0) flag = true;
  while((one + two) % m != 0) {
    two--;
    one += 2;
    if((one + two) % m == 0) {
      flag = true;
      break;
    }
    if(two == 0) {
      break;
    }
  }
  if(n < m) flag = false;
  if(flag) {
    cout << one + two << endl;
  } else {
    cout << -1 << endl;
  }
}