#include <iostream>
using namespace std;

int n;

int main() {
  ios_base::sync_with_stdio(false);
  cin >> n;

  int result = 0;

  while(n--) {
    int p, v, t;
    cin >> p >> v >> t;

    int sure = 0;

    if(p == 1) sure++;
    if(v == 1) sure++;
    if(t == 1) sure++;
    if(sure >= 2) result++;
  }
  cout << result << endl;
}