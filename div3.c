#include <stdio.h>

#define MODULO 3

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


// Считать min, max. Вывести в столбик кратные тройке числа от min до max включительно.

// Пример ввода
// 0 9
// Пример вывода
// 0
// 3
// 6
// 9
