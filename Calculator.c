#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    // Variables
    char cont;
    int op;
    float num1, num2, result;

    do {

        printf("===========================\n");
        printf("====== C Calculator =======\n");
        printf("===========================\n");
    
        // Asks for the user input to select the operation.

        printf("Choose the respective number for the operation you want to make: \n");
        printf("1. Sum      \t 2. Subtraction \t 3. Multiplication\n");
        printf("4. Division \t 5. Exponential \t 6. Root\n");
        printf("Your answer: ");
            scanf("%d", &op);
        
            // Checks if the input can be supported

            if (op < 1 || op > 6) {
                printf("Invalid option! Please choose 1-6.\n");
                continue;
            }
        
        // Asks for the number

        printf("What is the first number you want to use?\n");
            scanf("%f", &num1);
        printf("And the second number? (Exponent or index if needed)\n");
            scanf("%f", &num2);

        switch (op) {
            case 1: // Sum
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2: // Subtraction
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3: // Multiplication
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4: // Division. If/else checks if the calculation can be made
                if (num2 == 0) {
                    printf("Error: 0 is not a valid input!\n");
                } 
                else {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;
            case 5: // Exponation
                result = pow(num1, num2);
                printf("Result: %.2f ^ %.2f = %.2f\n", num1, num2, result);
                break;
            case 6: // Root. If/else checks if the calculation is possible
                if (num2 == 0) {
                    printf("Error: The index cannot be 0!\n");
                } 
                else {
                    result = pow(num1, 1.0 / num2);
                    printf("Result: %.2f\n", result);
                }
                break;
            default: // Double checking on the user input
                printf("Invalid input!\n");
        }
    
        // Asks to continue for convenience
        printf("Want to continue? (Y/N): ");
            scanf(" %c", &cont);
        system("cls"); // Clears the screen before restarting
    } while (cont == 'y' || cont == 'Y');

    system("pause");
    return 0;
}