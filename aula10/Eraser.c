#include <stdio.h>

int removeBlackCells (int n, int k, char s[]) {
    int operations = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            operations++;
            i += k-1;
        }
    }

    return operations;
}

int main () {

    int n_tests;
    scanf("%d", &n_tests);

    while (n_tests--) {

        int n, k;
        scanf("%d %d", &n, &k);

        char string[n];
        scanf("%s", string);

        printf("%d\n", removeBlackCells(n, k, string));

    }

    return 0;
}