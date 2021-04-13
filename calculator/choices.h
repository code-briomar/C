#include <stdio.h>

int process_choices(int operator_choosen, int operandA, int operandB)
{
    switch (operator_choosen)
    {
    case 1:
        printf("You have choosen to sum %i and %i", operandA, operandB);
        printf("\n === > : ");
        printf("Your result is : %i", operandA + operandB);
        break;

    case 2:
        printf("You have choosen to subtract %i from %i", operandB, operandA);
        printf("\n === > : ");
        printf("Your result is : %i", operandA - operandB);
        break;

    case 3:
        printf("\n ---------------------------------------------------------- \n");
        printf("You have choosen to get the reminder when %i is divided by %i", operandA, operandB);
        printf("\n ---------------------------------------------------------- \n");
        printf("\n === > : ");
        printf("Your result is : %i", operandA % operandB);
        break;
    case 4:
        printf("You have choosen to divide %i by %i", operandA, operandB);
        printf("\n === > : ");
        printf("Your result is : %f", (float)operandA / operandB);
        break;
    case 5:
        printf("You have choosen to multiply %i by %i", operandA, operandB);
        printf("\n === > : ");
        printf("Your result is : %i", operandA * operandB);
        break;
    default:
        printf("Your choice is declared invalid");
        break;
    }
}
int arithmetic_operator_choice()
{
    int arithmetic_operator_choice;
    int operand_1;
    int operand_2;
    printf("Choose an arithmetic operator : ");
    printf("\n");
    printf("1. Plus ( + )");
    printf("\n");
    printf("2. Minus ( - )");
    printf("\n");
    printf("3. Modulus ( %% )");
    printf("\n");
    printf("4. Divide ( / )");
    printf("\n");
    printf("5. Multiply ( * )");
    printf("\n === > : ");
    scanf("%d", &arithmetic_operator_choice);
    printf("You choose : %i", arithmetic_operator_choice);
    printf("\n === > : ");
    printf("Enter your operand ( OPERAND 1 ) : ");
    printf("\n === > : ");
    scanf("%i", &operand_1);
    printf("Enter your operand ( OPERAND 2 ) : ");
    printf("\n === > : ");
    scanf("%i", &operand_2);
    printf("\n === > : ");
    process_choices(arithmetic_operator_choice, operand_1, operand_2);
    return 0;
}