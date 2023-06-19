#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> abc(7);

int main() {
  ios_base::sync_with_stdio(false);
  for(int i = 0; i < 7; i++) {
    cin >> abc[i];
  }

  sort(abc.begin(), abc.end());

  cout << abc[0] << ' ' << abc[1] << ' ';

  if(abc[0] + abc[1] == abc[2]) cout << abc[3];
  else cout << abc[2];
}