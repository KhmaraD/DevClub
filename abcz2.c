#include <stdio.h>

int main() {
    int a, multiple;
    
    scanf("%d", &a);
    
    if ( a % 2 == 0 ) {
        printf("alpha\n");
        multiple = 1;
    }
    if ( a % 3 == 0 ) {
        printf("bravo\n");
        multiple = 1;
    }
    if ( a % 5 == 0 ) {
        printf("charlie\n");
        multiple = 1;
    }
    if ( multiple != 1 ) {
        printf("zulu\n");
    }
    
    return 0;
}
