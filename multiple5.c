#include <stdio.h>

int main() {
    int multipleOfFive;

    scanf("%d", &multipleOfFive);
    multipleOfFive -= multipleOfFive % 5;

    for ( int i = 0; i < multipleOfFive; i += 5 ) {
        printf("%d ", i);
    }
    printf("%d\n", multipleOfFive);

    return 0;
}
