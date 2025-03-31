#include <stdio.h>

#define MAX 40

int main () {

    int t, n, array[MAX];
    int num_even = 0, num_odd = 0;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        int wrongs = 0;
        num_even = num_odd = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &array[i]);

            if (i % 2 != array[i] % 2) {
                wrongs++;
                if (array[i] % 2 == 0) num_even++;
                if (array[i] % 2 != 0) num_odd++;
            }
        }
        
        if (num_even != num_odd) printf ("-1\n");
        else printf("%d\n", wrongs/2);
    }

    return 0;
}