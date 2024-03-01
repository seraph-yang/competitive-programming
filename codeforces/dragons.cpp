#include <iostream>
#include <vector>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    
    vector<int> x(n);
    vector<int> y(n);
    
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    
    int key_x, key_y, j;
    for(int i = 0; i < n; i++) {
        key_x = x[i];
        key_y = y[i];
        j = i - 1;
        while(j >= 0 && x[j] > key_x) {
            x[j + 1] = x[j];
            y[j + 1] = y[j];
            j--;
        }
        x[j + 1] = key_x;
        y[j + 1] = key_y;
    }
    
    bool result = true;
    for(int i = 0; i < n; i++) {
        if(s > x[i]) {
            s += y[i];
        } else {
            result = false;
            break;
        }
    }
    
    if(result) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}