#include <stdio.h>

int main() {
    int source, base;
    int max_power = 1;
    
    scanf("%d %d", &source, &base);
    
    for ( int limit = source / base; max_power <= limit; max_power *= base );
    
    for ( ; max_power > 1; max_power /= base ) {
        int result = source / max_power;
        
        if ( result ) {
            source %= max_power;
        }
        
        printf("%d", result);
    }
    
    printf("%d\n", source/max_power);
    
    return 0;
}


// code works

// Считать с клавиатуры целое неотрицательное число в десятичной системе счисления и основание новой системы счисления (целое число от 2 до 10).
// Вывести в консоль число, записанное в новой системе счисления.
// Задача решается без массивов.

// Пример ввода
// 8 3
// Пример вывода
// 22


int main() {
    int number, base;
    int power = 1;
    
    scanf("%d %d", &number, &base);
    
    for ( int tmp = number/base; power <= tmp; power *= base);
    
    for ( ; power >= base; power /= base ) {
        printf("%d", number/power);
        number %= power;
    }
    
    printf("%d\n", number/power);
    
    return 0;
}
