#include <stdio.h>

int main() {
    int sequence;
    int source;
    
    scanf("%d", &sequence);
    
    for ( int i = 0; i < sequence; i++ ) {
        scanf("%d", &source);
        source ^= 42;
        printf("%d\n", source);
    }
    
    return 0;
}
