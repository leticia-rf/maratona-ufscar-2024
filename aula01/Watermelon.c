#include <stdio.h>
 
int main() {
    int peso;
 
    scanf("%d", &peso);
 
    if((peso >=4) & (peso%2==0)) {
        printf("YES");
    } else {
        printf("NO");
    }
 
    return 0;
}