#include <stdio.h>

int average(int a, int b) {
    if ( a * b < 0 ) {
        return (a / 2 + b / 2 + (a % 2 + b % 2) / 2) - 1;
    } else {
        return a / 2 + b / 2 + (a % 2 + b % 2) / 2;
    }
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d\n", average(a, b));
        
    return 0;
}


// переполнение ?

// 12/14 tests passed

// int average(int a, int b) {
//     if ( a * b < 0 ) {
//         return (a / 2 + b / 2 + (a % 2 + b % 2) / 2) - 1;
//     } else {
//         return a / 2 + b / 2 + (a % 2 + b % 2) / 2;
//     }
// }
