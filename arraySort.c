void arraySort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < size; j++ ) {
            if ( array[j] > array[j+1] ) {
                int temp = array[j];
                
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}


// code works
// Написать функцию:
// void arraySort(int array[], int size)
// Отсортировать элементы в порядке неубывания.
// Настоятельно рекомендуется разработать алгоритм самостоятельно, без помощи гугла.

void arraySort(int array[], int size) {
    int unsorted = size;
    int temp;
    
    for ( ; 0 < unsorted; unsorted-- ) {
        for ( int i = 0; i < unsorted; i++ ) {
            if ( array[i] > array[i+1] ) {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }
}



void arraySort(int array[], int size) {
    for ( int i = size - 1; i > 0; i-- ) {
        int max = array[i];
        int index = i;
        
        for ( int j = 0; j < i; j++ ) {
            if ( array[j] > max ) {
                max = array[j];
                index = j;
            } 
        }
        array[index] = array[i];
        array[i] = max;
    }
}





