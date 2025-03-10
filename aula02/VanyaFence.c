#include <stdio.h>
 
int main() {
    int QntdAmigos, AlturaMuro;
    int AlturaAmigo;
    int Largura = 0;
 
    scanf("%d %d", &QntdAmigos, &AlturaMuro);
 
    for (int i = 0; i < QntdAmigos; i++) {
        scanf("%d", &AlturaAmigo);
        if (AlturaAmigo > AlturaMuro) {
            Largura += 2;
        } else {
            Largura ++;
        }
    }
 
    printf("%d", Largura);
 
    return 0;
}