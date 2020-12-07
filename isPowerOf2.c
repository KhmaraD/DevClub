// Побитовый сдвиг
// (2) 0010 << 1   ->   (4) 0100 -> & (*)

// (2) 0010 * (умножить)
// (4) 0100
// 0000 == 0 (no, false)

// (3) 0011 *
// (6) 0110
// (2) 0010 == 2, (1) true не 0 тоесть yes



#include <stdio.h>

int main() {
    int power;
    
    scanf("%d", &power);
    
    if ( (power << 1 & power) ) {
        printf("no\n");
    } else {
        printf("yes\n");
    }
    
    return 0;
}

// Цикл

// #include <stdio.h>

// int main() {
//     int power;
    
//     scanf("%d", &power);
    
//     for ( ; power % 2 == 0; power /= 2 );
    
//     if ( power == 1 ) {
//         printf("yes\n");
//     } else {
//         printf("no\n");
//     }
    
//     return 0;
// }
