#include <stdio.h>

int minRepaints (int n, int k, char s[]) {

    int min = 0;
    int repaints = 0;
    
    for (int i = 0; i < k; i++) {
        if (s[i] == 'W') min++;
    }

    repaints = min;

    for (int i = 0; i + k < n; i++) {
        if (s[i] == 'W') repaints--;
        if (s[i + k] == 'W') repaints++;

        if (repaints < min) min = repaints;
    }

    return min;
}

int main () {

    int n_tests;
    scanf("%d", &n_tests);

    while (n_tests--) {

        int n, k;
        scanf("%d %d", &n, &k);

        char string[n+1];
        scanf("%s", string);

        printf("%d\n", minRepaints(n, k, string));

    }

    return 0;
}