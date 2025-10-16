1. WAP to enter numbers till the user wants. At the end, it should display the
count of positive, negative, and Zeroes entered

#include <stdio.h>

int main() {
    int num;
    int positive = 0, negative = 0, zero = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        // Count positive, negative, zero
        if(num > 0)
            positive++;
        else if(num < 0)
            negative++;
        else
            zero++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);  // note the space before %c to consume newline
    } while(choice == 'y' || choice == 'Y');

    // Display the results
    printf("\nCount of positive numbers: %d\n", positive);
    printf("Count of negative numbers: %d\n", negative);
    printf("Count of zeros: %d\n", zero);

    return 0;
}

2. WAP to print the multiplication table of the number entered by the user. It
should be in the correct formatting. Num * 1 = Num

#include <stdio.h>

int main() {
    int num;

    // Input number
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);

    // Loop to print table from 1 to 10
    for(int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}

4. The population of a town is 100000. The population has increased steadily at
the rate of 10% per year for the last 10 years. Write a program to determine
the population at the end of each year in the last decade

#include <stdio.h>

int main() {
    double population = 100000; // Initial population
    double rate = 10.0;         // Annual growth rate in percent

    printf("Year\tPopulation\n");

    for(int year = 1; year <= 10; year++) {
        population = population + (population * rate / 100); // Increase by 10%
        printf("%d\t%.0f\n", year, population);
    }

    return 0;
}





