#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    
    bool caps_lock = true;
    
    for(int i = 0; i < s.size(); i++) {
        if(islower(s[i]) && i != 0) {
            caps_lock = false;
        }
    }
    
    if(caps_lock) {
        for(int i = 0; i < s.size(); i++) {
            if(islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
        cout << s << endl;
    } else {
        cout << s << endl;
    }
}