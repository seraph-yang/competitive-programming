#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
  long long n, m;
  cin >> n >> m;
 
  vector<long long> tasks(m);
  long long time = 0;
 
  for(long long i = 0; i < m; i++) {
    cin >> tasks[i];
  }
 
  for(long long i = 1; i < m; i++) {
    if(tasks[i - 1] <= tasks[i]) {
      time += tasks[i] - tasks[i - 1];
    } else {
      time += n - (tasks[i - 1] - tasks[i]);
    }
  }
  time += tasks[0] - 1;
  cout << time << endl;
}