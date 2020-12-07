#include <stdio.h>

int main() {
    int speed, spdLimit;

    scanf("%d %d", &speed, &spdLimit);

    if ( speed > spdLimit ) {
        printf("violation\n");
    } else {
        printf("ok\n");
    }

    return 0;
}