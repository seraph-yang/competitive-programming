#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    vector<int> numbers;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1') numbers.push_back(1);
        if(s[i] == '2') numbers.push_back(2);
        if(s[i] == '3') numbers.push_back(3);
    }
    
    sort(numbers.begin(), numbers.end());
    
    for(int i = 0; i < numbers.size() - 1; i++) {
        cout << numbers[i] << "+";
    }
    cout << numbers[numbers.size() - 1];
}