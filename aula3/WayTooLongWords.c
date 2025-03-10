#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main () {
 
  int n, length;
  char word[100][100];
 
  scanf("%d", &n);
 
  for (int i = 0; i < n; i++) {
    scanf("%s", word[i]);
    
    length = strlen(word[i]);
 
    if (length <= 10) {
      printf("%s\n", word[i]);
    } else {
      printf("%c%d%c\n", word[i][0], length-2, word[i][length-1]);
    }
  }
  
  return (0);
}