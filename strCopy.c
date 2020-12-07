#include <stdio.h>

void strCopy(char target[], char source[]) {
    int copy;
    
    for ( copy = 0; source[copy] != '\0'; copy++ ) {
        target[copy] = source[copy];
    }
    target[copy] = 0;
}


int main() {
    char str2[27];
    char str1[27];
    
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%s", str2);
    fclose(in);
    
    strCopy(str1, str2);
    
    fprintf(out, "%s", str1);
    fclose(out);
    
    return 0;
}


// void strCopy(char target[], char source[])

// Гарантируется, что строка target не короче строки source




// void strCopy(char target[], char source[]) {
//     for ( ; *source != '\0'; target++, source++ ) {
//         *target = *source;
//     }
//     *target = *source;
// }
