#include <stdio.h>
 
int main() {
    int qntd;
    char cores[100];
    int resposta = 0;
 
    scanf("%d", &qntd);
 
    for (int i = 0; i < qntd; i++) {
        scanf(" %c", &cores[i]);
    }
 
    for (int i = 0; i < qntd-1; i++) {
        if(cores[i] == cores[i+1]) {
            resposta++;
        }
    }
 
    printf("%d", resposta);
 
    return 0;
}