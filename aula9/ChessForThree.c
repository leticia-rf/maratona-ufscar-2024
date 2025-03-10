#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
 
int MaxDraws (int a, int b, int c, int draws);
 
int main() {
 
    int n_cases;
    scanf("%d", &n_cases);
 
    int p1, p2, p3;
    for (int i = 0; i < n_cases; i++) {
        scanf("%d %d %d", &p1, &p2, &p3);
 
        int result = MaxDraws(p1, p2, p3, 0);
        printf("%d\n", result);
    }
 
    return 0;
}
 
 
int MaxDraws (int a, int b, int c, int draws) {
    
    // se dois forem zero e o outro for par, ja chegou no resultado
    if (a == 0 && b == 0 && c%2 == 0 ||
        a == 0 && b%2 == 0 && c == 0 ||
        a%2 == 0 && b == 0 && c == 0) {
        return draws;
    }
 
    // quando um deles chegar em um numero negativo, retorna -1
    if (a < 0 || b < 0 || c < 0) return -1;
 
    // escolhe qual jogador (1, 2 ou 3) tem menor pontuacao
    // 3 2 3
    int menor = 1;
    if (b < a) menor = 2;
    if (c < a && c < b) menor = 3;
 
    // descrementa 1 dos outros dois que nao sao o menor
    if (1 == menor) return MaxDraws (a, b-1, c-1, draws + 1);
    else if (2 == menor) return MaxDraws (a-1, b, c-1, draws + 1);
    else return MaxDraws (a-1, b-1, c, draws + 1);
}