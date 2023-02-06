#include<stdio.h>

double areaOfCircle(double r) {
    return 3.14 * r * r;
}

int main() {
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    printf("Area of the circle: %lf", areaOfCircle(radius));
    return 0;
}
