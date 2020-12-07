#include <stdio.h>

int main() {
    int count, min, value;
    
    scanf("%d %d", &count, &min);
    
    for ( int i = 1; i < count; i++ ) {
        scanf("%d", &value);
        if ( value >= min ) {
            min = value;
        } else {
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    
    return 0;
}


// Считать с клавиатуры положительную длину числовой последовательности и саму последовательность. 
// Проверить, упорядочена ли последовательность по неубыванию. 
// Если упорядочена вывести на экран «yes», в противном случае вывести «no».

// Пример ввода
// 5
// -20 -15 0 12 15
// Пример вывода
// yes