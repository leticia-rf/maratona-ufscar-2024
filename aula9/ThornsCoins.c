#include <stdio.h>
#include <string.h>

int main() {
    int n_cases, n;

    scanf("%d", &n_cases);

    for (int i = 0; i < n_cases; i++) {
        scanf("%d", &n);
        getchar();

        char path[n + 1];
        fgets(path, n + 1, stdin); 
        getchar();

        int coins = 0, thorns = 0;

        for (int j = 0; j < n; j++) {
            if (path[j] == '*') {
                thorns++;
            } else if (path[j] == '@') {
                coins++; thorns = 0;
            } else if (path[j] == '.') {
                thorns = 0;
            }

            if (thorns >= 2) {
                break;
            }
        }

        printf("%d\n", coins);
    }

    return 0;
}