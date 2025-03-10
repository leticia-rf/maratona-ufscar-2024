#include <stdio.h>
 
int main () {
 
  int n, linha[1000] = {1, 0};
 
  scanf("%d", &n);
 
  for (int j = 1; j <= n; j++) {
    for (int i = 1; i <= n; i++) {
      linha[i] += linha[i-1];
    }
  }
 
  printf("%d", linha[n-1]);
 
 
  return (0);
}