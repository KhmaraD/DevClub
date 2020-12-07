#include <stdio.h>

int main() {
    int div;
    
    scanf("%d", &div);
    
    for ( int maxDiv = div; maxDiv > 1; maxDiv-- ) {
        if ( div % maxDiv == 0 && maxDiv != div ) {
            printf("%d\n", maxDiv);
            return 0;
        }
    }
    
    printf("0\n");
    return 0;
}
