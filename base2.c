#include <stdio.h>

int main() {
    int source, base;
    int max_power = 1;
    
    scanf("%d %d", &source, &base);
    
    if ( source < 0 ) {
        source *= -1;
        printf("%c", '-');
    }
    
    for ( int limit = source / base; max_power <= limit; max_power *= base );
    
    for ( ; max_power > 0; max_power /= base ) {
        int result = source / max_power;
        
        if ( result < 10 ) {
            printf("%d", result);
        } else {
            printf("%c", result+55);
        }
        
        source %= max_power;
    }
    
    printf("\n");
    
    return 0;
}




// code works
// Считать с клавиатуры целое число в десятичной системе счисления и основание новой системы счисления (целое число от 2 до 36).
// Вывести в консоль число, записанное в новой системе счисления.
// В качестве цифр, превышающих 9, использовать заглавные буквы латинского алфавита.
// Для решения можно пользоваться только циклами. Задача решается без массивов. Использовать только тип int.

// Пример ввода
// -255 16
// Пример вывода
// -FF


// #2

// #include <stdio.h>

// int powerOfN(int exponent, int number) {
//     int power = 1;
    
//     if ( number == 0 ) {
//         return 1;
//     }
//     for ( int i = 0; i < number; i++ ) {
//         power *= exponent;
//     }
//     return power;
// }

// int places(int number, int base) {
//     int count = 0;
    
//     for ( int i = number; i > 0; i /= base ) {
//         count += 1;
//     }
//     return count;
// }

// int main() {
//     int number;
//     int base;
    
//     scanf("%d %d", &number, &base);
//     if ( number < 0 ) {
//         printf("%c", '-');
//         number *= -1;
//     }
//     for ( int i = places(number, base) - 1; i >= 0; i-- ) {
//         int power = number / powerOfN(base, i);
        
//         if ( power < 10 ) {
//             printf("%d", power);
//         } else {
//             printf("%c", power+55);
//         }
//         number %= powerOfN(base, i);
//     }
//     printf("\n");
    
//     return 0;
// }


// #3

// #include <stdio.h>

// int pwr(int number, int power) {
//     int result = 1;
    
//     for ( int i = 1; i <= power; i++ ) {
//         result *= number;
//     }
//     return result;
// }

// int main() {
//     int number10, base;
//     int maxPower = 0;
    
//     scanf("%d %d", &number10, &base);
    
//     if ( number10 < 0 ) {
//         number10 *= -1;
//         printf("-");
//     }
    
//     for ( int dividend = number10/base; dividend > 0; dividend /= base ) {
//         maxPower += 1;
//     }
    
//     for ( int power = maxPower; power >= 0; power-- ) {
//         int basepower = pwr(base, power);
//         int digit = number10 / basepower;
        
//         if ( digit < 10 ) {
//             printf("%d", digit);
//         } else {
//             printf("%c", 55+digit);
//         }
//         number10 %= basepower;
//     }
//     printf("\n");
    
//     return 0;
// }