#include <stdio.h>

int main() {
    int base, power, result;
    
    result = 1;
    
    scanf("%d %d", &base, &power);
    
    for ( int i = 1; i <= power; i++ ) {
        printf("%d ", result);
        result *= base;
    }
    printf("%d\n", result);
    
    return 0;
}

// Считать с клавиатуры целое основание и целый неотрицательный показатель. Вывести через пробел степени числа основания от нулевой до заданной.

// Пример ввода
// 2 3
// Пример вывода
// 1 2 4 8