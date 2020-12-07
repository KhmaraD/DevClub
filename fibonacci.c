#include <stdio.h>

int main() {
    int number, result;
    int first = 0;
    int second = 1;
    
    scanf("%d", &number);
    
    if ( number == 0 ) {
        result = first;
    } else if ( number == 1 || number == -1 ) {
        result = second;
    } else if ( number > 0 ) {
        for ( int i = 1; i < number; i++ ) {
            result = first + second;
            first = second;
            second = result;
        }
    } else {
        for ( int i = number + 1; i < 0; i++ ) {
            result = first - second;
            first = second;
            second = result;
        }
    }
    
    printf("%d\n", result);
    
    return 0;
}


//  code works
// Вывести число Фибоначчи с заданным целым номером, по модулю не превышающим 46.
// Пример ввода
// 8
// Пример вывода
// 21

