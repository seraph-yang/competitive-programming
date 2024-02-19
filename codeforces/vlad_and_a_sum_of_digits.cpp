#include <iostream>
#include <vector>
using namespace std;
 
int sumDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumDigits(n / 10);
}
 
int main() {
    int t;
    cin >> t;
    vector<int> numbers;
    int result = 0;
    for(int j = 1; j <= 200000; j++) {
        result += sumDigits(j);
        numbers.push_back(result);
    }
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << numbers[n - 1] << endl;
    }
}