int factorial(int n) {
    if ( n > 1 ) {
        return n * factorial(n-1);
    }
    if ( n < 0 ) {
        return -1;
    }
    return 1;
}

// оптимально по скорости, но лучше основной случай оставить на конец функции