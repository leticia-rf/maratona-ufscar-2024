#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int P, R;
	scanf("%d %d",&P, &R);

    if(P==0) {
        printf("C");
    } else if(P==1) {
        if(R==1)
            printf("A");
        if(R==0)
            printf("B");
    }
    
    return 0;
}