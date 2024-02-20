#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cin >> name;
    
    int characters[26];
    for(int i = 0; i < 26; i++) {
        characters[i] = 0;
    }
    
    for(int i = 0; i < name.size(); i++) {
        characters[(int)(name[i] - 97)]++;
    }
    
    int result = 0;
    for(int i:characters) {
        if(i > 0) {
            result++;
        }
    }
    
    if(result % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;        
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}