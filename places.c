#include <stdio.h>

int main() {
    int number;
    int places = 1;
    
    scanf("%d", &number);
    
    if ( number < 0 ) {
        number *= -1;
        places += 1;
    }
    
    for ( ; number > 9; number /= 10, places++ );
    
    printf("%d\n", places);
    
    return 0;
}

// Считать с клавиатуры целое число.
// Вывести на экран количество знакомест, нужных для вывода этого числа.

// Пример ввода
// 123
// Пример вывода
// 3