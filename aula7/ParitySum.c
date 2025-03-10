#include <stdio.h>
#include <stdlib.h>
 
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
 
int main() { 
 
    int t, n;
    long long int a;
    long long int pares[1000000];
 
    scanf("%d", &t);
 
    for (int i = 0; i < t; i++) {
 
        scanf ("%d", &n);
 
        long long int maior_impar = 0;
        int p = 0;
        int tem_par = 0, tem_impar = 0;
 
        for (int j = 0; j < n; j++) {
            scanf ("%lld", &a);
 
            if (a % 2 == 0) {
                tem_par = 1;
                pares[p] = a;
                p++; 
 
            } else {
                tem_impar = 1;
 
                if (a > maior_impar)
                    maior_impar = a;
            }
        }
 
        qsort(pares, p, sizeof(long long int), compare);
 
        for (int k = 0; k < p - 1; k++) {
            if (pares[k] < maior_impar) {
                maior_impar += pares [k];
            }
        }
 
        if (tem_par && tem_impar) {
            if (maior_impar < pares[p-1])
                printf("%d\n", p+1);
            else
                printf("%d\n", p);
        } else {
            printf("0\n");
        }
 
    }
    return 0;
}