#include <stdio.h>

int main() {
    int power, result;
    
    result = 1;
    
    scanf("%d", &power);
    
    for ( int i = 1; i <= power; i++ ) {
        printf("%d ", result);
        result *= 2;
    }
    printf("%d\n", result);
    
    return 0;
}
