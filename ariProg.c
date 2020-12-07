#include <stdio.h>

int main() {
    int value, step, counter;
    
    scanf("%d %d %d", &value, &step, &counter);
    
    for ( int i = 1; i < counter; i++ ) {
        printf("%d ", value);
        value += step;
    }
    printf("%d\n", value);
    
    return 0;
}


// Считать с клавиатуры три целых числа - первый член, шаг и количество членов арифметической прогрессии. Вывести в строку через пробел члены заданной прогрессии.
// Задаваемое количество больше нуля.

// Пример ввода
// 12 2 4
// Пример вывода
// 12 14 16 18



// рекурсия
// int ariProg(int first, int step, int index) {
//     if ( index == 0 ) {
//         return first;
//     }
//     return ariProg(first, step, index-1) + step;
// }