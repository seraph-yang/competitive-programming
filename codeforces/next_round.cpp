#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> scores(n);
    for(int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    int advance = scores[k-1];
    
    sort(scores.begin(), scores.end());
    
    int count = 0;
    for(int i:scores) {
        if(i >= advance && i != 0) count++;
    }
    
    cout << count << endl;
}
