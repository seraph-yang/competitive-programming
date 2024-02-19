#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        
        int coins = 0;
        
        bool thorns = false;
        
        vector<char> cells(n);
        for(int i = 0; i < n; i++) {
            cin >> cells[i];
            if(cells[i-1] == '*' && cells[i] == '*') {
                thorns = true;
            }
            if(cells[i] == '@' && thorns == false) {
                coins++;
            }
        }
        cout << coins << endl;
    }
}