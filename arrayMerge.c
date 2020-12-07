#include <stdio.h>

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    int i = 0;
    int j = 0;
    int k = 0;
    
    for ( ; i < len1 && j < len2; k++ ) {
        if ( src1[i] <= src2[j] ) {
            target[k] = src1[i];
            i += 1;
        } else {
            target[k] = src2[j];
            j += 1;
        }
    }
    for ( ; i < len1; k++ ) {
        target[k] = src1[i];
        i += 1;
    }
    for ( ; j < len2; k++ ) {
        target[k] = src2[j];
        j += 1;
    }
}

void targetPrint(int target[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", target[i]);
    }
    printf("%d\n", target[last]);
}

int main() {
    int len1 = 7;
    int len2 = 6;
    int src1[] = {1, 3, 3, 7, 8, 9, 10};
    int src2[] = {2, 4, 8, 8, 9, 12};
    int target[len1+len2];
    
    arrayMerge(target, src1, len1, src2, len2);
    
    targetPrint(target, len1+len2);
    
    return 0;
}


// code works
// Написать функцию
// void arrayMerge(int target[], int src1[], int len1, int src2[], int len2)

// Массивы src1[] и src2[] (длиной len1 и len2 соответственно) отсортированы по неубыванию.
// Произвести слияние этих массивов в массив target[], также отсортированный по неубыванию.
// В случае равенства предпочтение отдаётся элементам из первого массива.
// Требуемая сложность: O(N)




// ???? После перестановки в 2 и 3 цикле i++ в конец цикла, заработало ????
// void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
//     int i = 0;
//     int j = 0;
//     int k = 0;
    
//     for ( ; i < len1 && j < len2; k++ ) {
//         if ( src1[i] <= src2[j] ) {
//             target[k] = src1[i];
//             i += 1;
//         } else {
//             target[k] = src2[j];
//             j += 1;
//         }
//     }
//     for ( ; i < len1; k++, i++ ) {
//         target[k] = src1[i];
//     }
//     for ( ; j < len2; k++, i++ ) {
//         target[k] = src2[j];
//     }
// }
