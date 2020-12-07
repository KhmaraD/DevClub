#include <stdio.h>

int main() {
    int cell, hours;
    
    scanf("%d %d", &cell, &hours);
    
    for ( int i = 1; i <= hours; i++ ) {
        cell *= 2;
        printf("%dh => %d amoeba(s)\n", i, cell);
    }
    
    return 0;
}
