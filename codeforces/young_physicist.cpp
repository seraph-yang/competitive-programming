#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> x, y, z;
    
    for(int i = 0; i < n; i++) {
        int xi, yi, zi;
        cin >> xi >> yi >> zi;
        
        x.push_back(xi);
        y.push_back(yi);
        z.push_back(zi);
    }
    int result = 0;
    bool zero = true;
    
    for(int j:x) {
        result += j;
    }
    if(result != 0) {
        zero = false;
    }
    
    for(int j:y) {
        result += j;
    }
    if(result != 0) {
        zero = false;
    }
    
    for(int j:z) {
        result += j;
    }
    if(result != 0) {
        zero = false;
    }
    
    if(zero) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}