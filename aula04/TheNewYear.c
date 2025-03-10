#include <stdio.h>
#include <stdlib.h>
 
int main () {
 
  int posicao[3], i=1;
  int maior = -1, menor=1000;
  
  for (i=0; i < 3; i++) {
    scanf("%d", &posicao[i]);
 
    if (posicao[i] > maior) {
      maior = posicao[i];
    }
    if (posicao[i] < menor) {
      menor = posicao[i];
    }
  }
  
  printf("%d", maior-menor);
 
  return (0);
}