#include <stdio.h>

#define MAX 150000

int main() {

    int num_planks, size;
    scanf("%d %d", &num_planks, &size);

    int fence[MAX];
    for (int i = 0; i < num_planks; i++) {
        scanf("%d", &fence[i]);
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += fence[i];
    }

    int min_sum = sum;
    int index_min_sum = 1;

    for (int i = 1; i <= (num_planks - size); i++) {

        sum = sum - fence[i-1] + fence[i-1+size];

        if (sum < min_sum) {
            min_sum = sum;
            index_min_sum = i + 1;
        }
    }

    printf("%d\n", index_min_sum);

    return 0;
}