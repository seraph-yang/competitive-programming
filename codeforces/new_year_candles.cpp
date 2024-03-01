#include <iostream>
using namespace std;
 
int main() {
  int a, b;
  cin >> a >> b;
 
  int candles = a;
  int result = 0;
  while(candles > 0) {
    candles--;
    result++;
    if(result % b == 0) {
      candles++;
    }
  }
 
  cout << result << endl;
}