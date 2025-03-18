#include <stdio.h>

#define MAX 200000

int main () {

    int n, router[MAX] = {0}, path[MAX];

    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        scanf("%d", &router[i]);
    }

    int p = 0;
    for (int i = n; router[i] >= 1; i = router[i], p++) {
        path[p] = i;
    }
    path[p] = 1;

    for (int i = p; i >= 0; i--) {
        printf("%d ", path[i]);
    }

    return 0;
}