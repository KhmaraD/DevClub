void strUpperCase(char str[]) {
    for ( char *s = str; *s != '\0'; s++ ) {
        if ( *s >= 97 && *s <= 122 ) {
            *s -= 32;
        }
    }
}
// code works


// #2

void strUpperCase(char str[]) {
    for ( ; *str != '\0'; str++ ) {
        if ( *str >= 97 && *str <= 122 ) {
            *str -= 32;
        }
    }
}


// #3 замена 97 и 122 на 'a' 'z'

void strUpperCase(char str[]) {
    for ( char *s = str; *s != 0; s++ ) {
        if ( *s >= 'a' && *s <= 'z' ) {
            *s -= 32;
        }
    }
}





#include <stdio.h>

// void strUpperCase(char str[]) {
//     for ( ; *str != '\0'; str++ ) {
//         if ( *str >= 97 && *str <= 122 ) {
//             *str -= 32;
//         }
//     }
// }

void strUpperCase(char str[]) {
    for ( char *s = str; *s != '\0'; s++ ) {
        if ( *s >= 97 && *s <= 122 ) {
            *s -= 32;
        }
    }
}

int main() {
    char str[5];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%s", str);
    strUpperCase(str);
    
    fprintf(out, "%s", str);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
