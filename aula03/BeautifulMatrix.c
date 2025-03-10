#include <stdio.h>
#include <stdlib.h>
 
int main () {
 
  int matrix[100][100];
  int index_row, index_column;
 
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      scanf("%d ", &matrix[i][j]);
      if (matrix[i][j] == 1) {
        index_row = i;
        index_column = j;
      }
    }
  }
 
  int moves = abs(index_row - 2) + abs(index_column - 2);
 
  printf("%d", moves);
  
  return (0);
}