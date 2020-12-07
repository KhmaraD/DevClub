#include <stdio.h>

int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }    
    return gcd(b, a%b);
}


int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d\n", gcd(a, b));
    
    return 0;
}


// Написать функцию, которая находит наибольший общий делитель.
// int gcd(int a, int b)

// Передаваемые значения больше нуля.



// code works
// int gcd(int a, int b) {
//     for ( int modulo = 1; modulo != 0; a = b, b = modulo ) {
//         modulo = a % b;
//     }
//     return a;
// }


// epic win
// int gcd(int a, int b) {
//     if ( b == 0 ) {
//         return a;
//     }    
//     return gcd(b, a%b);
// }

