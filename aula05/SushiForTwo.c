#include <stdio.h>

#define MAX 100000

int Min(int a, int b) {
    return (a < b) ? a : b;
}

int Max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int n, sushi[MAX];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &sushi[i]);
    }

    int max_length = 0;
    int current_length = 1, prev_length = 0;

    for (int i = 1; i < n; i++) {
        if (sushi[i] == sushi[i - 1]) {
            current_length++;
        } else {
            int result = 2 * Min(current_length, prev_length);
            max_length = Max(max_length, result);

            prev_length = current_length;
            current_length = 1;
        }
    }

    int result = 2 * Min(current_length, prev_length);
    max_length = Max(max_length, result);

    printf("%d\n", max_length);

    return 0;
}