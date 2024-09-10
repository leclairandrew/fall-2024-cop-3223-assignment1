#include <stdio.h>
#include <math.h>  //math function

#define pi 3.14159

// calculates the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2, distance;
    
    // Asking input from user
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    // calculates the distance between the points
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("The distance between the two points is: %.2lf\n", distance);
    
    return distance;
}

// calculates the perimeter of the circle
double calculatePerimeter() {
    double distance = calculateDistance();
    double radius = distance / 2.0; // distance is the diameter
    double perimeter = 2 * pi * radius; // using perimeter formula
    
    printf("The perimeter of the city encompassed by your request is: %.2lf\n", perimeter);
    
    return 5;
}

// calculates the area of the circle
double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2.0; // distance is the diameter
    double area = pi * pow(radius, 2); // using area formula
    
    printf("The area of the city encompassed by your request is: %.2lf\n", area);
    
    return 5;
}

// calculates the width of the city
double calculateWidth() {
    double distance = calculateDistance();

    // width is the distance/ diameter because it is a circle
    printf("The width of the city encompassed by your request is: %.2lf\n", distance);
    
    return 2;
}

// calculates the height of the city
double calculateHeight() {
    double distance = calculateDistance();

    // height is the distance/ diameter because it is a circle
    printf("The height of the city encompassed by your request is: %.2lf\n", distance);
    
    return 2;
}

// Main function
int main(int argc, char **argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}
