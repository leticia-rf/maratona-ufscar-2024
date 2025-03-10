#include <stdio.h>

int main () {

    int n, card[1000];
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &card[i]);
    }

    int score_sereja = 0, score_dima = 0;
    int left = 0, right = n-1;
    int card_chosen, round = 0;

    while (left <= right) {
        if (card[left] > card[right]) {
            card_chosen = card[left];
            left++;
        }
        else {
            card_chosen = card[right];
            right--;
        }

        (round % 2 == 0) ? (score_sereja += card_chosen) : (score_dima += card_chosen);
        round++;
    }

    printf("%d %d\n", score_sereja, score_dima);

    return 0;
}