#include <stdio.h>
#define MAX 100

int main () {

    int t, k, q;
    int sequence[MAX];

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {

        scanf("%d %d", &k, &q);

        for (int j = 0; j < k; j++) scanf("%d", &sequence[j]);

        while (q--) {
            int n;
            scanf ("%d", &n);

            if (n < sequence[0]) printf("%d ", n);
            else printf("%d ", sequence[0] - 1);

            printf("\n");
        }

    }

    return 0;
}