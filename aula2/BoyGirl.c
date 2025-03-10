#include <stdio.h>
#include <string.h>
 
#define GIRL "CHAT WITH HER!"
#define BOY "IGNORE HIM!"
 
int main() {
 
  char username[100];
  int alphabet[26] = {0}, distinct_characters = 0;
 
  scanf("%s", username);
  
  int lenght = strlen(username);
 
  for (int i = 0; i < strlen(username); i++) {
    alphabet[username[i] - 'a']++;
  }
 
  for (int j = 0; j < 26; j++) {
    if (alphabet[j] > 1) {
      alphabet[j]=1;
    }
    distinct_characters += alphabet[j];
  }
 
  if (distinct_characters % 2 ==0 )
    printf(GIRL);
  else
    printf(BOY);
  return 0;
}