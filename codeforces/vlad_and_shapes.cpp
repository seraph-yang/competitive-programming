#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        
        int matrix[n][n];
        vector<int> num_ones(n);
        for(int j = 0; j < n; j++) {
            string s;
            cin >> s;
            int ones = 0;
            for(int k = 0; k < n; k++) {
                matrix[j][k] = int(s[k] - 48);
                if(matrix[j][k] == 1) {
                    ones++;
                }
            }
            num_ones.push_back(ones);
        }
        
        bool square = true;
        for(int i:num_ones) {
            if(i == 1) {
                square = false;
            }
        }
        
        if(square) {
            cout << "SQUARE" << endl;
        }
        else {
            cout << "TRIANGLE" << endl;
        }
    }
}