#include <stdio.h>

#define MODULO 2

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( min % MODULO != 0 ) {
        min += 1;
    }
    
    for ( int i = min; i <= max; i += MODULO ) {
        printf("%d\n", i);
    }
    
    return 0;
}


// Считать min, max. Вывести в столбик чётные числа от min до max включительно.

// Пример ввода
// 0 8
// Пример вывода
// 0
// 2
// 4
// 6
// 8