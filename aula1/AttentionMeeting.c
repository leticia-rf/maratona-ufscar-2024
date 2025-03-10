#include <stdio.h>
 
int main() {
 
    int n, k;
 
    scanf("%d\n%d", &n, &k);
 
    printf("%d", (k - (n-1))/n );
 
    return 0;
}