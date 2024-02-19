#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    
    string res1 = "", res2 = "";
    for(auto s:s1) {
        res1 += (char)tolower(s);
    }
    for(auto s:s2) {
        res2 += (char)tolower(s);
    }
    
    if(res1 == res2) cout << "0";
    if(res1 < res2) cout << "-1";
    if(res1 > res2) cout << "1";
}