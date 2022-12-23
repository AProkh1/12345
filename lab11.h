#ifndef lab11
#define lab11

#include <math.h>

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point a;
    Point b;
    Point c;
} Triangle;

double triangle_area(Triangle* s);
double triangle_perimeter(Triangle* s);
#endif
