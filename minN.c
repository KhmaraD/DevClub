#include <stdio.h>

int main() {
    int count, min, value;
    
    scanf("%d %d", &count, &min);
    
    for ( int i = 1; i < count; i++ ) {
        scanf("%d", &value);
        if ( value < min ) {
            min = value;
        }
    }
    
    printf("%d\n", min);
    
    return 0;
}
