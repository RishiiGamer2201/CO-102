/*Implement C program to calculate the surface area, volume of:
a. Cube
b. Cuboid.
c. Cone
d. Sphere*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main() {

    // Cube
    float side_cube, surface_area_cube, volume_cube;
    printf("Enter the side length of the cube: ");
    scanf("%f", &side_cube);
    surface_area_cube = 6 * side_cube * side_cube;
    volume_cube = side_cube * side_cube * side_cube;
    printf("Surface Area of Cube: %.2f\n", surface_area_cube);
    printf("Volume of Cube: %.2f\n", volume_cube);

    // Cuboid
    float length_cuboid, width_cuboid, height_cuboid;
    float surface_area_cuboid, volume_cuboid;
    printf("Enter the length, width and height of the cuboid: ");
    scanf("%f %f %f", &length_cuboid, &width_cuboid, &height_cuboid);
    surface_area_cuboid = 2 * (length_cuboid * width_cuboid + width_cuboid * height_cuboid + height_cuboid * length_cuboid);
    volume_cuboid = length_cuboid * width_cuboid * height_cuboid;
    printf("Surface Area of Cuboid: %.2f\n", surface_area_cuboid);
    printf("Volume of Cuboid: %.2f\n", volume_cuboid);

    // Cone
    float radius_cone, height_cone, slant_height_cone;
    float surface_area_cone, volume_cone;
    printf("Enter the radius and height of the cone: ");
    scanf("%f %f", &radius_cone, &height_cone);
    slant_height_cone = pow(radius_cone * radius_cone + height_cone * height_cone, 0.5);
    surface_area_cone = PI * radius_cone * (radius_cone + slant_height_cone);
    volume_cone = (1.0/3.0) * PI * radius_cone * radius_cone * height_cone;
    printf("Surface Area of Cone: %.2f\n", surface_area_cone);
    printf("Volume of Cone: %.2f\n", volume_cone);

    // Sphere
    float radius_sphere;
    float surface_area_sphere, volume_sphere;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius_sphere);
    surface_area_sphere = 4 * PI * radius_sphere * radius_sphere;
    volume_sphere = (4.0/3.0) * PI * radius_sphere * radius_sphere * radius_sphere;
    printf("Surface Area of Sphere: %.2f\n", surface_area_sphere);
    printf("Volume of Sphere: %.2f\n", volume_sphere);

    return 0;
}
