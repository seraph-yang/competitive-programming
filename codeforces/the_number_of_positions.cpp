#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    
    int counter = 0;
    for(int i = 0; i <= n; i++) {
        if(i > a && i >= (n - b)) counter++;
    }
    
    cout << counter << endl;
}
