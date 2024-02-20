#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string hello = "hello";
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == hello[0]) {
            hello.erase(0, 1);
        }
    }
    
    if(hello.size() == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}