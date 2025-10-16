1. WAP a C program to calculate the area and perimeter of a rectangle based on
its length and width.
#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    // Take input from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Display the results
    printf("\nArea of the rectangle = %.2f\n", area);
    printf("Perimeter of the rectangle = %.2f\n", perimeter);

    return 0;
}

2. WAP a C program to Convert temperature from Celsius to Fahrenheit using the
formula: F = (C * 9/5) + 32.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Take temperature in Celsius from user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
