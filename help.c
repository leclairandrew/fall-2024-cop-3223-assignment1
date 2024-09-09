#include <stdio.h>
#include <math.h>

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv) {
    // Call the required functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    // Return 0 as specified
    return 0;
}

double calculateDistance() {
    double x1, y1, x2, y2;

    // Prompt the user for input
    printf("Enter the coordinates of Point #1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of Point #2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Compute the Euclidean distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output the results
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    // Return the computed distance
    return distance;
}

double calculatePerimeter() {
    // Get the width and height of the rectangle
    double width = calculateWidth();
    double height = calculateHeight();

    // Compute the perimeter
    double perimeter = 2 * (width + height);

    // Output the perimeter information
    printf("Point #1 entered: (Details already provided)\n");
    printf("Point #2 entered: (Details already provided)\n");
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    // Return the difficulty rating
    return 2.0; // Example difficulty rating
}

double calculateArea() {
    // Get the width and height of the rectangle
    double width = calculateWidth();
    double height = calculateHeight();

    // Compute the area
    double area = width * height;

    // Output the area information
    printf("Point #1 entered: (Details already provided)\n");
    printf("Point #2 entered: (Details already provided)\n");
    printf("The area of the city encompassed by your request is %.2f\n", area);

    // Return the difficulty rating
    return 3.0; // Example difficulty rating
}

double calculateWidth() {
    double x1, x2;

    // Prompt the user for input
    printf("Enter the coordinates of Point #1 (x1 y1): ");
    scanf("%lf %*lf", &x1); // Read x1, ignore y1

    printf("Enter the coordinates of Point #2 (x2 y2): ");
    scanf("%lf %*lf", &x2); // Read x2, ignore y2

    // Compute the width (difference in x-coordinates)
    double width = fabs(x2 - x1);

    // Output the width information
    printf("Point #1 entered: x1 = %.2f; (y1 ignored)\n", x1);
    printf("Point #2 entered: x2 = %.2f; (y2 ignored)\n", x2);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    // Return the width
    return width;
}

double calculateHeight() {
    double y1, y2;

    // Prompt the user for input
    printf("Enter the coordinates of Point #1 (x1 y1): ");
    scanf("%*lf %lf", &y1); // Read y1, ignore x1

    printf("Enter the coordinates of Point #2 (x2 y2): ");
    scanf("%*lf %lf", &y2); // Read y2, ignore x2

    // Compute the height (difference in y-coordinates)
    double height = fabs(y2 - y1);

    // Output the height information
    printf("Point #1 entered: (x1 ignored); y1 = %.2f\n", y1);
    printf("Point #2 entered: (x2 ignored); y2 = %.2f\n", y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);

    // Return the height
    return height;
}

