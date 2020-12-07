#include <stdio.h>

#define MODULO 5

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( min <= 0 ) {
        min -= min % MODULO;
    } else if ( min % MODULO != 0 && min > 0 ) {
        min -= min % MODULO;
        min += MODULO;
    }
    for ( ; min <= max; min += MODULO ) {
        printf("%d\n", min);
    }
    
    return 0;
}



// Считать min, max. Вывести в столбик кратные пяти числа от min до max включительно.

// Пример ввода
// 0 15
// Пример вывода
// 0
// 5
// 10
// 15