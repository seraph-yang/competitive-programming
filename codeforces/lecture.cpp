#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<string> language1(m);
    vector<string> language2(m);
    
    for(int i = 0; i < m; i++) {
        cin >> language1[i] >> language2[i];
    }
    
    vector<string> lecture_text(n);
    for(int i = 0; i < n; i++) {
        cin >> lecture_text[i];
    }
    
    string output = "";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(language1[j] == lecture_text[i]) {
                if(language2[j].size() < language1[j].size()) {
                    output += language2[j];
                } else {
                    output += language1[j];
                }
                output += " ";
            } 
        }
    }
    
    cout << output << endl;
}