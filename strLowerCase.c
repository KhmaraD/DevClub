void strLowerCase(char str[]) {
    for ( char *s = str; *s != '\0'; s++ ) {
        if ( *s >= 65 && *s <= 90 ) {
            *s += 32;
        }
    }
}

// code works


// #2
void strLowerCase(char str[]) {
    for ( char *s = str; *s != 0; s++ ) {
        if ( *s >= 'A' && *s <= 'Z' ) {
            *s += 32;
        }
    }
}

// #3
void strLowerCase(char str[]) {
    for ( ; *str != '\0'; str++ ) {
        if ( *str > 64 && *str < 91 ) {
            *str += 32;
        }
    }
}
