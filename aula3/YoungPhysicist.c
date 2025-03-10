#include <stdio.h>
 
int main () {
 
  int n, matriz[100][100];
  int soma_x = 0, soma_y = 0, soma_z = 0;
 
  scanf("%d", &n);
 
  for (int j = 0; j < n; j++) {
    for (int i = 0; i < 3; i++) {
      scanf(" %d", &matriz[j][i]);
    }
  }
 
  for (int j = 0; j < n; j++) {
    soma_x += matriz[j][0];
    soma_y += matriz[j][1];
    soma_z += matriz[j][2];
  }
 
  if (soma_x == 0 && soma_y == 0 && soma_z == 0)
    printf("YES");
  else
    printf("NO");
 
  return (0);
}