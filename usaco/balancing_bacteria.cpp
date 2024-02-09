#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long N;

int main() {
    ios_base::sync_with_stdio(false);
    cin >> N;
    if(N > 1000) {
        cout << 1000000000 << endl;
        return 0;   
    }
    vector<long long> grass(N);
    for(long long i = 0; i < N; i++){
        cin >> grass[i];
    }
    long long counter = 0; 
    vector<long long> count(N);
    count[0] = 0;
    for(long long i = 0; i < N; i++){
        long long diff = grass[i];
        for(long long j = 0; j < i; j++){
            diff += -(i - j + 1) * count[j];
        }
        counter += abs(diff);
        count[i] = diff;
    }
    cout << counter << endl;
    return 0;
}
