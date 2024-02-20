#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    
    long long flagstone_x, flagstone_y;
    if(n % a == 0) {
        flagstone_x = (n / a);
    } else {
        flagstone_x = (n / a) + 1;
    }
    
    if(m % a == 0) {
        flagstone_y = (m / a);
    } else {
        flagstone_y = (m / a) + 1;
    }
    
    cout << flagstone_x * flagstone_y << endl;
}