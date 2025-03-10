#include <stdio.h>
 
int main() { 
 
    int t_cases, n_people, limit;
    int gold;
 
    scanf("%d", &t_cases);
 
    for (int i=0; i < t_cases; i++) {
 
        int total = 0, helps = 0;
                
        scanf("%d %d", &n_people, &limit);
 
        for (int i=0; i < n_people; i++) {
            scanf("%d", &gold);
 
            if (gold >= limit) {
                total += gold;
            }
 
            if (gold == 0 && total > 0) {
                total --;
                helps ++;
            }
        }
 
        printf("%d\n", helps);
    }
 
 
    return 0;
}