#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

void encontrarIndice(int vetor[], int n, int *iMenor, int *iMaior);

int main() {

    int n_cases;

    scanf("%d", &n_cases);

    for (int i = 0; i < n_cases; i++) { 

        int n;
        int vetor[100];
        int iMenor, iMaior;

        scanf("%d", &n);

        for (int j = 0; j < n; j++) {
            scanf("%d", &vetor[j]);
        }

        //calcular indices dos elementos chaves
        encontrarIndice(vetor, n, &iMenor, &iMaior);

        int possibilidade[3];

        //possibilidades: duas pontas, pelo início, pelo final
        possibilidade[0] = (iMenor + 1) + (n - iMaior);
        possibilidade[1] = iMaior + 1;
        possibilidade[2] = n - iMenor;

        int resultado = possibilidade[0];

        //escolher possibilidade de menor quantidade
        for (int k = 1; k < 3; k++) {
            if (possibilidade[k] < resultado) {
                resultado = possibilidade[k];
            }
        }

        printf("%d\n", resultado);
    }

    return 0;
}

void encontrarIndice(int vetor[], int n, int *iMenor, int *iMaior) {
    *iMenor = 0; *iMaior = 0;

    int vMenor = vetor[0], vMaior = vetor[0];

    for (int i = 1; i < n; i++) {
        if (vetor[i] > vMaior) {
            vMaior = vetor[i]; 
            *iMaior = i;
        }
        if (vetor[i] < vMenor) {
            vMenor = vetor[i];
            *iMenor = i;
        }
    }

    if (*iMenor > *iMaior) {
        int aux;
        aux = *iMenor;
        *iMenor = *iMaior;
        *iMaior = aux;
    }
}