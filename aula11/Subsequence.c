#include <stdio.h>
#include <string.h>

#define MAX 1000

int calculateMinCost(char string[]);
int min(int a, int b);

int main() {

    int t;
    scanf("%d", &t);

    while (t--) {

        char string[MAX+1];
        scanf("%s", string);
        
        printf("%d\n", calculateMinCost(string));
    }

    return 0;
}

int calculateMinCost (char string[]) {

    int tam = strlen(string);

    int total_1s = 0, total_0s = 0;
    int counted_1s = 0, counted_0s = 0;

    int cost1, cost2;
    int min_cost = tam;

    for (int i = 0; i < tam; i++) {
        if (string[i] == '1') total_1s++;
        else total_0s++;
    }

    for (int i = 0; i < tam; i++) {

        if (string[i] == '1') counted_1s++;
        else counted_0s++;

        // (11..00 -> 1ª possibility of good string)
        // converts the previous 0s to 1s and the remaining 1s to 0s
        cost1 = counted_0s + (total_1s - counted_1s);

        // (00..11 -> 2ª possibility of good string)
        // converts the previous 1s to 0s and the remaining 0s to 1s
        cost2 = counted_1s + (total_0s - counted_0s);

        min_cost = min(min_cost, min(cost1, cost2));
    }
    
    return min_cost;
}

int min (int a, int b) {
    return (a < b) ? a : b;
}