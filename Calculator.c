#include <stdio.h>
#include <stdlib.h>

int main() {
    // dynamic memory allocation calculator
    int* numberOne = NULL;
    int* numberTwo = NULL;
    float result;
    char operation;

    // memory allocation
    numberOne = (int*)malloc(sizeof(int));
    numberTwo = (int*)malloc(sizeof(int));

    // memory allocation verification
    if (numberOne == NULL || numberTwo == NULL) {
        printf("Memory not allocated.\n");
        return -1;
    }

    // first number input
    printf("Introduce the first number: \n");
    scanf("%d", numberOne); // read the first value in a pointer

    // second number input
    printf("Introduce the second number: \n");
    scanf("%d", numberTwo);

    // operation input
    printf("Introduce the operation (+, -, *, /): \n");
    while (getchar() != '\n'); // buffer cleaning
    scanf("%c", &operation);

    switch (operation) {
        case '+':
            result = *numberOne + *numberTwo; // de-reference
            printf("The sum is: %.2f\n", result);
            break;

        case '-':
            result = *numberOne - *numberTwo;
            printf("The result of the subtraction is: %.2f\n", result);
            break;

        case '*':
            result = *numberOne * *numberTwo;
            printf("The result of the multiplication is: %.2f\n", result);
            break;

        case '/':
            if (*numberTwo != 0) {
                result = (float)(*numberOne) / *numberTwo; 
                printf("The result of the division is: %.2f\n", result);
            } else {
                printf("Error: Division by zero not allowed.\n");
            }
            break;

        default:
            printf("Invalid operation.\n");
            break;
    }

    // free the allocated memory
    free(numberOne);
    free(numberTwo);

    return 0;
}
