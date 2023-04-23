#include <iostream>
using namespace std;

int w;

int main() {
  ios_base::sync_with_stdio(false);
  cin >> w;

  if(w == 1 || w == 2) {
    cout << "NO" << endl;
  } else {
    cout << (w % 2 == 0 ? "YES" : "NO") << endl;
  }
}