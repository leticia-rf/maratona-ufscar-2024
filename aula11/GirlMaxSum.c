#include <stdio.h>
#include <stdlib.h>

#define MAX 200000

int compare(const void *a, const void *b);

int main() {
    
    int n, queries, a, b;
    int array[MAX+1] = {0};
    long long freq[MAX+1] = {0}, sum = 0;

    scanf("%d %d", &n, &queries);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < queries; i++) {
        scanf("%d %d", &a, &b);

        freq[a]++;
        if (b < n) freq[b+1]--;
    }

    for (int i = 1; i <= n; i++) {
        freq[i] += freq[i-1];
    }

    qsort(array + 1, n, sizeof(int), compare);
    qsort(freq + 1, n, sizeof(long long), compare);

    for (int i = 1; i <= n; i++) {
        sum += array[i] * freq[i];
    }

    printf("%lld\n", sum);

    return 0;
}

int compare (const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}