#include <stdio.h>
#include <stdlib.h>

int main(){    	

    int n=1, maior=0;

    while(n) {
        scanf("%d", &n);
        if(n>maior) {
            maior=n;
        }
    }

    printf("%d", maior);

    return 0;
}