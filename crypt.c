#include <stdio.h>

int main() {
    int plain1, encrypted1;
    int plain2, encrypted2;
    int length;
    int keyA, keyB;
    int encrypted, plain;
    
    scanf("%d %d", &plain1, &encrypted1);
    scanf("%d %d", &plain2, &encrypted2);
    
    keyA = (encrypted2 - encrypted1) / (plain2 - plain1);
    keyB = encrypted1 - keyA * plain1;
    
    scanf("%d", &length);
    
    for ( int i = 1; i < length; i++ ) {
        scanf("%d", &encrypted);
        plain = (encrypted - keyB) / keyA;
        printf("%d ", plain);
    }
    scanf("%d", &encrypted);
    plain = (encrypted - keyB) / keyA;
    printf("%d\n", plain);
    
    return 0;
}
