#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

void prefix_sum(int n, int array[], long long prefix[]);
int compare(const void *a, const void *b);

int main () {
    int n;
    int stones1[MAX+1] = {0}, stones2[MAX+1] = {0};

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &stones1[i]);
        stones2[i] = stones1[i];
    }

    qsort(stones2 + 1, n, sizeof(int), compare);

    long long prefix1[MAX+1] = {0}, prefix2[MAX+1] = {0};

    prefix_sum(n, stones1, prefix1);
    prefix_sum(n, stones2, prefix2);

    int n_quest;
    scanf("%d", &n_quest);

    for (int i = 0; i < n_quest; i++) {

        int quest, l, r;
        scanf ("%d %d %d", &quest, &l, &r);

        if (quest == 1)
            printf("%lld\n", prefix1[r] - prefix1[l-1]);
        else
            printf("%lld\n", prefix2[r] - prefix2[l-1]);
    }

    return 0;
}

// pre-fixed calculation of sums
void prefix_sum (int n, int array[], long long prefix[]) {
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] + array[i];
    }
}

// non-decreasing order
int compare (const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}