#include <stdio.h>

int main() {
    int team1, team2;
    
    scanf("%d %d", &team1, &team2);
    
    if ( team1 > team2 ) {
        printf("Home team wins\n");
    } else if ( team1 < team2 ) {
        printf("Away team wins\n");
    } else {
        printf("Draw\n");
    }
    
    return 0;
}
