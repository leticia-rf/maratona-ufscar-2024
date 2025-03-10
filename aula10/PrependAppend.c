#include <stdio.h>

int originalStringLength (int n, char string[]) {
    int left = 0, right = n-1;

    while (left < right) {
        if (string[left] == string[right]) break;
        
        left++;
        right--;
        n-=2;
    }
    return n;
}

int main () {

    int n_tests;
    scanf("%d", &n_tests);

    while (n_tests--) {

        int length;
        scanf("%d", &length);

        char string[2001];
        scanf("%s", string);

        printf("%d\n", originalStringLength(length, string));

    }

    return 0;
}