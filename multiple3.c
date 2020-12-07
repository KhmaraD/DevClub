#include <stdio.h>

int main() {
    int line;
    
    scanf("%d", &line);
    line -= line % 3;
    
    for ( int i = 0; i < line; i += 3 ) {
        printf("%d ", i);
    }
    
    printf("%d\n", line);
    
    return 0;
}
