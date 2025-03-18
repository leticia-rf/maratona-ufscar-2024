#include <stdio.h>

int main () {

    int n, manager[2000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &manager[i]);
    }

    int max_depth = 1;

    for (int i = 0; i < n; i++) {
        
        int depth = 1;

        for (int j = i; manager[j] != -1; j = manager[j] - 1) {
            depth++;
        }

        if (depth > max_depth) max_depth = depth;
    }

    printf("%d", max_depth);

    return 0;
}