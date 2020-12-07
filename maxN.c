#include <stdio.h>

int main() {
    int count, max, value;
    
    scanf("%d %d", &count, &max);
    
    for ( int i = 1; i < count; i++ ) {
        scanf("%d", &value);
        if ( value > max ) {
            max = value;
        }
    }
    
    printf("%d\n", max);
    
    return 0;
}
