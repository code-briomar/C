#include "choices.h"
#include <stdio.h>

int main()
{
    int closure_key;
    printf("This is a simple calculator app.");
    printf("\n");
    arithmetic_operator_choice();
    printf("\n === > : Enter a closure key : ( hint : 3 )");
    printf("\n === > : ");
    scanf("%i", &closure_key);
    return 0;
}