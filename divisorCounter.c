#include <stdio.h>

int main() {
    int divisor, counter;
    
    scanf("%d", &divisor);
    counter = 0;
    
    for ( int i = 1; i <= divisor; i++ ) {
        if ( divisor % i == 0 ) {
            counter += 1;
        }
    }
    printf("%d\n", counter);
    
    return 0;
}
