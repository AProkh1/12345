#include "lab11.h"
#include <math.h>

double triangle_perimeter(Triangle* s) {
    double s1 = sqrt(pow(s->b.x - s->a.x, 2) + pow(s->b.y - s->a.y, 2));
    double s2 = sqrt(pow(s->b.x - s->c.x, 2) + pow(s->b.y - s->c.y, 2));
    double s3 = sqrt(pow(s->a.x - s->c.x, 2) + pow(s->a.y - s->c.y, 2));
    return s1+s2+s3;
}

double triangle_area(Triangle* s) {
    double s1 = sqrt(pow(s->b.x - s->a.x, 2) + pow(s->b.y - s->a.y, 2));
    double s2 = sqrt(pow(s->b.x - s->c.x, 2) + pow(s->b.y - s->c.y, 2));
    double s3 = sqrt(pow(s->a.x - s->c.x, 2) + pow(s->a.y - s->c.y, 2));
    double p = triangle_perimeter(s);
    return sqrt(p*(p-s1)*(p-s2)*(p-s3));
}

int main(){
    Triangle s;
    printf("Введите координаты x и y для вершины А: ");
    scanf("%d %d", &s.a.x, &s.a.y);
    printf("Введите координаты x и y для вершины B: ");
    scanf("%d %d", &s.b.x, &s.b.y);
    printf("Введите координаты x и y для вершины C: ");
    scanf("%d %d", &s.c.x, &s.c.y);

    double area = triangle_area(&s);
    double perimeter = triangle_perimeter(&s);
    printf("Площадь: %f\n", area);
    printf("Периметр: %f\n", perimeter);
    return 0;
}
