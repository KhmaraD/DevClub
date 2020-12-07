#include <stdio.h>

#define MAX_PRICE 1000

int main() {
    int farmerQuantity;
    int amount, price;
    int farmersHave = 0;
    unsigned long long minPrice = 0;
    unsigned long long amountNeeded;
    int milkPrices[MAX_PRICE+1];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d %llu", &farmerQuantity, &amountNeeded);
    
    for ( int i = 0; i <= MAX_PRICE; i++ ) {
        milkPrices[i] = 0;
    }
    for ( int i = 0; i < farmerQuantity; i++ ) {
        fscanf(in, "%d %d", &amount, &price);
        milkPrices[price] += amount;
        farmersHave += amount;
    }
    fclose(in);
    
    if ( farmersHave >= amountNeeded ) {
        for ( int i = 1; i <= MAX_PRICE; i++ ) {
            if ( milkPrices[i] != 0 ) {
                if ( amountNeeded > milkPrices[i] ) {
                    amountNeeded -= milkPrices[i];
                    minPrice += milkPrices[i] * i;
                } else {
                    minPrice += amountNeeded * i;
                    amountNeeded = 0;
                }
            }
        }
    }
    fprintf(out, "%llu\n", minPrice);
    fclose(out);
    
    return 0;
}


// code works

// Молочная компания каждый день покупает молоко у фермеров. У каждого из <farmerQuantity> фермеров есть <amount> литров молока по цене <price>.
// Найти минимальную стоимость <minPrice>, за которую возможно приобрести <amountNeeded> литров молока. 
// В случае, если у фермеров недостаточно молока, вывести в качестве <minPrice> значение 0.

// В файле task.in заданы целые числа:
// <farmerQuantity> <amountNeeded>
// <amount1> <price1>
// <amount2> <price2>
// .....
// <amountN> <priceN>

// Вывести minPrice в task.out.

// Ограничения:
// 0 <= farmerQuantity <= 100 000 000
// 0 <= amountNeeded <= 300 000 000
// 0 <= amount <= 300 000 000
// 1 <= price <= 1 000

// Пример ввода
// 3 10
// 5 1
// 8 2
// 8 3
// Пример вывода
// 15

