#include <stdio.h>

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d<%d is %d\n", x, y, 1);
    printf("%d>%d is %d\n", x, y, 0);
    printf("%d<=%d is %d\n", x, y, 1);
    printf("%d>=%d is %d\n", x, y, 0);
    printf("%d==%d is %d\n", x, y, 0);
    printf("%d!=%d is %d\n", x, y, 1);

    return 0;
}