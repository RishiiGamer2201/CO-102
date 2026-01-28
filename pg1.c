/*Implement C program to calculate the area of:
a. Trapezium
b. Rhombus
c. Parallelogram
d. Rectangle
e. Isosceles triangle
f. Circle*/

#include <stdio.h>
#define PI 3.14159
int main() {

    float side1_trapezium, side2_trapezium, h, area_trapezium;
    printf("Enter the lengths of the two parallel sides and height of the trapezium: ");
    scanf("%f %f %f", &side1_trapezium, &side2_trapezium, &h);
    area_trapezium = 0.5 * (side1_trapezium + side2_trapezium) * h;
    printf("Area of Trapezium: %.2f\n", area_trapezium);

    float diagonal1_rhombus, diagonal2_rhombus, area_rhombus;
    printf("Enter the lengths of the two diagonals of the rhombus: ");
    scanf("%f %f", &diagonal1_rhombus, &diagonal2_rhombus);
    area_rhombus = 0.5 * diagonal1_rhombus * diagonal2_rhombus;
    printf("Area of Rhombus: %.2f\n", area_rhombus);

    float base_parallelogram, height_parallelogram, area_parallelogram;
    printf("Enter the base and height of the parallelogram: ");
    scanf("%f %f", &base_parallelogram, &height_parallelogram);
    area_parallelogram = base_parallelogram * height_parallelogram;
    printf("Area of Parallelogram: %.2f\n", area_parallelogram);

    float length_rectangle, width_rectangle, area_rectangle;
    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &length_rectangle, &width_rectangle);
    area_rectangle = length_rectangle * width_rectangle;
    printf("Area of Rectangle: %.2f\n", area_rectangle);

    float base_triangle, height_triangle, area_isosceles_triangle;
    printf("Enter the base and height of the isosceles triangle: ");
    scanf("%f %f", &base_triangle, &height_triangle);
    area_isosceles_triangle = 0.5 * base_triangle * height_triangle;
    printf("Area of Isosceles Triangle: %.2f\n", area_isosceles_triangle);

    float radius_circle, area_circle;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius_circle);
    area_circle = PI * radius_circle * radius_circle;
    printf("Area of Circle: %.2f\n", area_circle);

    return 0;
}
