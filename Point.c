#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} Point;

void pointPrint(Point a) {
    printf("(%g, %g)", a.x, a.y);
}

int pointEqual(Point a, Point b) {
    return a.x == b.x && a.y == b.y;
}

double pointDistance(Point a, Point b) {
    return hypot(a.x-b.x, a.y-b.y);
}



// almost win
// С помощью известных вам инструментов реализовать тип Point (точка на координатной плоскости) с координатами x, y типа double.

// Также реализовать следующие функции:

// void pointPrint(Point a) - печать точки в виде (x, y). 
// Воспользоваться шаблоном %g. Предусмотреть возможность печати вида (5, 7.8) not equal to (13.9, 25.3) 

// int pointEqual(Point a, Point b) - сравнение двух точек по координатам (равны или не равны).

// double pointDistance(Point a, Point b) - нахождение расстояния между двумя точками. Воспользоваться функцией hypot() из библиотеки math.h



void pointPrint(Point a) {
    
}

int pointEqual(Point a, Point b) {
    return a.x == b.x && a.y == b.y;
}

double pointDistance(Point a, Point b) {
    
}


void printAnimal(Animal animal) {
    //переменная animal — копия переданной в функцию структуры

    printf("%s is %d years old\n", animal.name, animal.age);
}

void printAnimal(Animal *animal) {
    printf("%s is %d years old, ", animal->name, animal->age);
    printf("located at (%d, %d)\n", animal->location.x, animal->location.y);
}

