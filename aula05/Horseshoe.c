#include <stdio.h>

int main () {

    int colors[4], new_horseshoe = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &colors[i]);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (colors[i] == colors[j]) {
                new_horseshoe++;
                break;
            }
        }
    }

    printf("%d", new_horseshoe);

    return 0;
}