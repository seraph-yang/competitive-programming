#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int max = 0;
    if(a * b * c > max) max = a * b * c;
    if((a + b) * c > max) max = (a + b) * c;
    if(a * (b + c) > max) max = a * (b + c);
    if(a + b + c > max) max = a + b + c;
    if(a + (b * c) > max) max = a + (b * c);
    if((a * b) + c > max) max = (a * b) + c;
    
    cout << max << endl;
}