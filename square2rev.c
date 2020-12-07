#include <stdio.h>

int main() {
    int size, result, row;
    
    scanf("%d", &size);
    
    result = size * size;
    row = result - size + 1;
    
    for ( int col = result; col > 0; ) {
        for ( int j = row; j < col; j++ ) {
            printf("%d ", j);
        }
        printf("%d\n", col);
        row -= size;
        col -= size;
    }
    
    return 0;
}
