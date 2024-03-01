#include <iostream>
#include <map>
 
using namespace std;
 
int main() {
  int n;
  cin >> n;
 
  map<string, int> scores;
 
  for(int i = 0; i < n; i++) {
    string scoring_team;
    cin >> scoring_team;
 
    if(scores.find(scoring_team) == scores.end()) {
      scores[scoring_team] = 1;
    } else {
      scores[scoring_team]++;
    }
  }
 
  string winning_team = "";
  int points = 0;
  for(auto i:scores) {
    if(i.second > points) {
      points = i.second;
      winning_team = i.first;
    }
  }
 
  cout << winning_team << endl;
}