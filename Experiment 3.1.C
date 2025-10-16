1. WAP to take check if the triangle is valid or not. If the validity is established, do
check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides
of the triangle as input from a user

#include <stdio.h>

int main() {
    float a, b, c;

    // Taking sides as input
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check triangle validity (Triangle Inequality Theorem)
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The triangle is valid.\n");

        // Check for Equilateral
        if (a == b && b == c)
            printf("It is an Equilateral triangle.\n");

        // Check for Isosceles
        else if (a == b || b == c || a == c)
            printf("It is an Isosceles triangle.\n");

        // Check for Right-angled triangle (using Pythagoras theorem)
        else if ((a * a == b * b + c * c) ||
                 (b * b == a * a + c * c) ||
                 (c * c == a * a + b * b))
            printf("It is a Right-angled triangle.\n");

        // Otherwise, it’s Scalene
        else
            printf("It is a Scalene triangle.\n");
    } 
    else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}

2. WAP to compute the BMI Index of the person and print the BMI values as per
the following ranges. You can use the following formula to compute BMI= ?

#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Take input from the user
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Display BMI value
    printf("\nYour BMI is: %.2f\n", bmi);

    // Determine BMI category
    if (bmi < 15)
        printf("Category: Starvation\n");
    else if (bmi >= 15.1 && bmi <= 17.5)
        printf("Category: Anorexic\n");
    else if (bmi >= 17.6 && bmi <= 18.5)
        printf("Category: Underweight\n");
    else if (bmi >= 18.6 && bmi <= 24.9)
        printf("Category: Ideal\n");
    else if (bmi >= 25 && bmi <= 25.9)
        printf("Category: Overweight\n");
    else if (bmi >= 30 && bmi <= 39.9)
        printf("Category: Obese\n");
    else if (bmi >= 40)
        printf("Category: Morbidly Obese\n");
    else
        printf("Invalid input range.\n");

    return 0;
}

3. WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.

#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;

    // Input coordinates
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter coordinates of third point (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    // Check collinearity using area of triangle formula
    // If area is 0, points are collinear
    float area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);

    if (area == 0)
        printf("The points are collinear.\n");
    else
        printf("The points are not collinear.\n");

    return 0;
}

4. According to the gregorian calendar, it was Monday on the date 01/01/01. If
Any year is input through the keyboard write a program to find out what is the
day on 1st January of this year.

#include <stdio.h>

int main() {
    int year, day;

    // Input year
    printf("Enter the year: ");
    scanf("%d", &year);

    // Formula to find day of 1st January
    day = (year + (year - 1)/4 - (year - 1)/100 + (year - 1)/400) % 7;

    // Display day using switch-case
    printf("1st January of year %d is a ", year);
    switch(day) {
        case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid\n");
    }

    return 0;
}

5. WAP using ternary operator, the user should input the length and breadth of a
rectangle, one has to find out which rectangle has the highest perimeter. The
minimum number of rectangles should be three.

#include <stdio.h>

int main() {
    int n = 3; // minimum 3 rectangles
    float length, breadth, perimeter;
    float maxPerimeter = 0;
    int rectangleNumber = 0;

    for(int i = 1; i <= n; i++) {
        printf("Enter length and breadth of rectangle %d: ", i);
        scanf("%f %f", &length, &breadth);

        perimeter = 2 * (length + breadth);

        // Check if this perimeter is the maximum so far
        if(perimeter > maxPerimeter) {
            maxPerimeter = perimeter;
            rectangleNumber = i;
        }
    }

    printf("Rectangle %d has the highest perimeter of %.2f\n", rectangleNumber, maxPerimeter);

    return 0;
}


