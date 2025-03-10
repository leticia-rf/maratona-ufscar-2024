#include <stdio.h>
#include <stdlib.h>
 
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
 
int main() { 
 
    int t, n;
    int x = 0;
    int vetor[1000000];
 
    scanf("%d", &t);
 
    for (int i = 0; i < t; i++) {
 
        scanf ("%d", &n);
 
        for (int j = 0; j < n; j++) {
            scanf ("%d", &vetor[j]);
        }
 
        qsort(vetor, n, sizeof(int), compare);
 
        x = vetor[0];
        
        for (int j = 1; j < n; j++) {
            x += vetor[j];
            x /= 2;
        }
 
        printf("%d\n", x);
 
    }
    return 0;
}