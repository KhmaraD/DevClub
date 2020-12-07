#include <stdio.h>

int main() {
    int total, result;
    
    scanf("%d", &total);
    
    result = 1;
    
    for ( int col = 1; col <= total; col++, result++ ) {
        for ( int row = 1; row < col; row++, result++ ) {
            printf("%d ", result);
        }
        printf("%d\n", result);
    }
    
    return 0;
}



#include <stdio.h>

int main() {
    int total;
    
    scanf("%d", &total);
    
    for ( int col = 1, result = 1; col <= total; col++, result++ ) {
        for ( int row = 1; row < col; row++, result++ ) {
            printf("%d ", result);
        }
        printf("%d\n", result);
    }
    
    return 0;
}
