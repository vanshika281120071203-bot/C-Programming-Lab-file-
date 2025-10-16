1. Declare a global variable outside all functions and use it inside various functions
to understand its accessibility.

#include <stdio.h>

// Global variable declaration
int globalVar = 10;

// Function 1: Display the global variable
void display() {
    printf("Value of globalVar inside display(): %d\n", globalVar);
}

// Function 2: Modify the global variable
void modify() {
    globalVar += 5;
    printf("Value of globalVar inside modify(): %d\n", globalVar);
}

int main() {
    printf("Value of globalVar inside main() before modification: %d\n", globalVar);

    display();   // Access global variable
    modify();    // Modify global variable
    display();   // Access global variable after modification

    printf("Value of globalVar inside main() after modification: %d\n", globalVar);

    return 0;
}

