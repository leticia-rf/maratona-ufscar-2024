#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int n; //qntd
    int i; //interruptor
    int lampadaA=0, lampadaB=0;

    scanf("%d", &n);

    for(int k=0; k<n; k++) {
        scanf("%d ", &i);

        if(i==1){
            if(lampadaA==0){ //acende/apaga A
                lampadaA=1;
            } else
                lampadaA=0;        
        } else if (i==2){ //troca A e B de estado
            if(lampadaB==0){
                lampadaB=1;
            } else
                lampadaB=0;
            if(lampadaA==0){
                lampadaA=1;
            } else
                lampadaA=0;
        }
    }

    printf("%d\n%d", lampadaA, lampadaB); 
    
    return 0;
}