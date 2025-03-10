#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void insertionsort (int numeros[], int n);
 
int main () {
 
  int numeros[100], ordenado[100], i=1;
  char soma;
 
  scanf("%d", &numeros[0]);
 
  while (1) {
    scanf("%c", &soma);
 
    if (soma == '\n') break;
 
    scanf("%d", &numeros[i]);
    i++;
  }
 
  insertionsort (numeros, i);
 
  printf("%d", numeros[0]);
 
  for (int j = 1; j < i; j++) {
    printf("+%d", numeros[j]);
  }
 
  return (0);
}