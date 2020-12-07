#include <stdio.h>

int main() {
    int size, result;
    
    scanf("%d", &size);
    
    for ( int col = 1, result = 1; col <= size; col++, result++ ) {
        for ( int row = 1; row < size; row++, result++ ) {
            printf("%d ", result);
        }
        printf("%d\n", result);
    }
    
    return 0;
}



//  тоже воркс
#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int col = 1, result = 1; col <= size; col++, result++ ) {
        for ( int row = 1; row < size; row++, result++ ) {
            printf("%d ", result);
        }
        printf("%d\n", result);
    }
    
    return 0;
}
