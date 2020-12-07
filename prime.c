#include <stdio.h>

int isPrime(int n) {
    if ( n == 3 ) {
        return 1;
    }
    
    for ( int i = 2; i < n / 2; i += 1 ) {
        if ( n % i == 0 ) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int score;
    
    scanf("%d", &score);
    
    if ( score < 1 ) {
        printf("-1\n");
        return 0;
    }
    if ( score == 1 ) {
        printf("2\n");
        return 0;
    }
    
    for ( int number = 3, counter = 2; counter <= score; number += 2 ) {
        if ( isPrime(number) == 1 ) {
            if ( score == counter ) {
                printf("%d\n", number);
                return 0;
            } else {
                counter += 1;
            }
        }
    }
    
    return 0;
}

