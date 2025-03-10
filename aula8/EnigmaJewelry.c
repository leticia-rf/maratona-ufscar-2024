#include <stdio.h>
#include <stdlib.h>
 
#define MAX 1000
 
int main() { 
 
    int n, menor = 10000;
    int linha, coluna;
    int matriz[MAX][MAX];
 
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
            scanf ("%d", &matriz[i][j]);
        
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }
 
    if (linha == 0) {
        if (coluna == 0) {
            printf("0");
        } else if (coluna == n-1) {
            printf("1");
        }
    } else if (linha == n-1) {
        if (coluna == 0) {
            printf("3");
        } else if (coluna == n-1) {
            printf("2");
        }
    }
    
    
    return 0;
}