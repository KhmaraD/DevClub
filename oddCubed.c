#include <stdio.h>

int main() {
    int min, max, result, resultMax;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 == 0 ) {
        min += 1;
    }
    if ( max % 2 == 0 ) {
        max -= 1;
    }
    
    for ( int i = min; i < max; i += 2 ) {
        result = i * i;
        printf("%d ", result*i);
    }
    
    resultMax = max * max;
    printf("%d\n", resultMax*max);
    
    return 0;
}
