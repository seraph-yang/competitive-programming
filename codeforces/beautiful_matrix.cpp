#include <iostream>
using namespace std;

int matrix[5][5];

int main() {
  ios_base::sync_with_stdio(false);

  int coordinate_x, coordinate_y = 0;

  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      cin >> matrix[i][j];
      if(matrix[i][j] == 1) {
        coordinate_x = i + 1;
        coordinate_y= j + 1;
      }
    }
  }

  cout << abs(coordinate_x - 3) + abs(coordinate_y - 3);
}