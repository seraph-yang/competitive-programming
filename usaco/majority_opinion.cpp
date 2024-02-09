#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int N;

int main() {
    ios_base::sync_with_stdio(false);
    
    cin >> N;
    
    for (int i = 0; i < N; ++i) {
        set<int> output;
        int M;
        cin >> M;
        vector<int> hay(M);
        
        for (int j = 0; j < M; ++j) {
            cin >> hay[j];
        }
        
        for (int j = 0; j < M - 2; ++j) {
            if (hay[j] == hay[j + 1] && hay[j] == hay[j + 2]) {
                continue;
            } else if (hay[j] == hay[j + 1] || hay[j] == hay[j + 2]) {
                output.insert(hay[j]);
            } else if (hay[j + 1] == hay[j + 2]) {
                output.insert(hay[j + 1]);
            }
        }
        
        if (output.empty()) {
            cout << -1 << endl;
        } else {
            vector<int> result(output.begin(), output.end());
            sort(result.begin(), result.end());
            for(int i = 0; i < result.size() - 1; i++) {
                cout << result[i] << " ";
            }
            cout << result[result.size() - 1];
            cout << endl;
        }
    }
    return 0;
}
