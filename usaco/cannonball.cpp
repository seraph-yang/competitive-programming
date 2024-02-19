#include <iostream>
#include <vector>
using namespace std;

int N, S;

int main() {
  ios_base::sync_with_stdio(false);
  int v = 1, count = 0, turn = 0;
  bool pos_direction = true;
 
  cin >> N >> S;

  vector<int> pad_type(N);
  vector<int> power(N);
  vector<bool> broken(N);

  for(int i = 0; i < N; i++) {
	cin >> pad_type[i] >> power[i];
	broken[i] = false;
  }
    
  while(true) {
	turn++;
	if(!broken[S - 1]) {
      	if(v >= power[S - 1] && pad_type[S - 1] == 1) {
          	count++;
          	broken[S - 1] = true;
      	}
      	if(pad_type[S - 1] != 1) {
        	if(pos_direction) {
              	pos_direction = false;
          	    v += power[S - 1];
        	} else {
              	pos_direction = true;
              	v += power[S - 1];
        	}
      	}
	}
	if(pos_direction) { S += v; }
	else { S -= v; }

	if(S > N || S <= 0) {
    	break;
	}
	if(turn > 10000000) break;
  }

  cout << count;
}
