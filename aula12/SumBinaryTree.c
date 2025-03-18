#include <stdio.h>

long long SumBinaryTree(long long n);

int main () {

    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;

        scanf("%lld", &n);

        printf("%lld\n", SumBinaryTree(n));
    }

    return 0;
}

long long SumBinaryTree(long long n) {
    if (n == 1) return 1;

    return n + SumBinaryTree(n/2);
}