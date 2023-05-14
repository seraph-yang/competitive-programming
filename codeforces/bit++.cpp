#include <iostream>
using namespace std;

int n;

int main() {
  ios_base::sync_with_stdio(false);
  cin >> n;
  int x = 0;
  while(n--) {
    string statement;
    cin >> statement;
    if(statement == "X++" || statement == "++X") x++;
    else x--;
  }
  cout << x;
}