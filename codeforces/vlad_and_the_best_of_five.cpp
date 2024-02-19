#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        string s;
        cin >> s;
        
        int A = 0, B = 0;
        
        for(int j = 0; j < 5; j++) {
            if(s[j] == 'A') {
                A++;
            } 
            else {
                B++;
            }
        }
        
        if(A > B) {
            cout << "A" << endl;
        }
        else {
            cout << "B" << endl;
        }
    }
}