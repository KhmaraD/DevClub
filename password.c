#include <stdio.h>

int main() {
    int password;
    
    for ( int i = 1; i <= 6; i++ ) {
        scanf("%d", &password);
        if ( password == 1488 ) {
            printf("accepted\n");
            return 0;
        } else {
            if ( i < 6 ) {
                printf("incorrect password\n");
            } else if ( i == 6 ) {
                printf("denied\n");
            }
        }
    }
    
    return 0;
}
