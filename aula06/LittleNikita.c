#include <stdio.h>

int main () {

    int t, moves, cubes;

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &moves, &cubes);

        if ( (moves >= cubes) && ((moves%2) == (cubes%2)) ) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}