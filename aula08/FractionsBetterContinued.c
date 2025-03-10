#include <stdio.h>
#include <stdlib.h>
 
#define MAX 1000
 
int main() { 
 
    int n, anterior = 1, atual = 1, fib = 0;
 
    scanf("%d", &n);
 
    if (n == 1) {
        fib = 1;
    } else if (n == 2) {
        fib = 2;
    } else {
        for (int i = 1; i < n; i++) {
            fib = anterior + atual;
            anterior = atual;
            atual = fib;
        }
    }
    
    printf("%d", fib);
     
    return 0;
}