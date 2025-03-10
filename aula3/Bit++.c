#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main () {
 
  int n, variable_x = 0;
  char statement[200][3];
 
  scanf("%d", &n);
 
  for (int i = 0; i < n; i++) {
    scanf("%s", statement[i]);
 
    if (statement[i][1] == '+') {
      variable_x++;
    } else if (statement[i][1] == '-'){
      variable_x--;
    }
  }
 
  printf("%d", variable_x);
  
  return (0);
}