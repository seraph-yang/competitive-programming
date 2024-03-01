#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> lucky_numbers;
    
    for(int i = 1; i <= n; i++) {
        int copy = i;
        bool flag = false;
        while(copy > 0) {
            int last_digit = copy % 10;
            copy /= 10;
            if(last_digit == 4 || last_digit == 7) {
                flag = false;
            } else {
                flag = true;
                break;
            }
        }
        if(!flag) {
            lucky_numbers.push_back(i);
        }
    } 
    
    bool almost_lucky = false;
    for(int i:lucky_numbers) {
        if(n % i == 0) {
            almost_lucky = true;    
        }
    }
    
    if(almost_lucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}