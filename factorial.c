#include <stdio.h>

int main() {
    int counter, factorial;
    
    scanf("%d", &counter);
    
    factorial = 1;
    
    if ( counter > 0 ) {
        for ( int i = 2; i <= counter; i++ ) {
            factorial *= i;
        }
        printf("%d\n", factorial);
    } else if ( counter == 0 ) {
        printf("1\n");
    } else {
        printf("-1\n");
    }
    
    return 0;
}
