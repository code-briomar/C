#include <stdio.h>

void default_return(char error[]){
    printf("\n %s",error);
}
int topping(char meal[]){
    int choice_3;
    printf("\n 1. Syrup");
    printf("\n 2. Strawberries");
    printf("\n 3. Powdered Sugar");
    printf("\n Choose a topping : ");
    scanf("%i",&choice_3);

    switch(choice_3){
        case 1:
            printf("You choose %s with syrup",meal);
            break;
        case 2:
            printf("You choose %s with strawberries",meal);
            break;
        case 3:
            printf("You choose %s with powdered sugar",meal);
            break;
        default:
            default_return("We do not have not that topping");
    }
    return 0;
}
void pancakes(){
    printf("\n You choose pancakes");
    topping("pancakes");
}
void waffles(){
    printf("\n You choose waffles");
    topping("waffles");
}
void oatmeal(){
    printf("\n You choose oatmeal");
}
int eggs(){
    int choice_2;
    printf("\n 1. Wheat Toast");
    printf("\n 2. Sour Dough");
    printf("\n 3. Rye Toast");
    printf("\n 4. Pancakes");
    printf("\n Choose a type of bread : ");
    scanf("%d",&choice_2);

    switch(choice_2) {
        case 1:
            printf("You choose eggs with wheat toast");
            break;
        
        case 2:
            printf("You choose eggs with sour dough");
            break;

        case 3:
            printf("You choose eggs with rye toast");
            break;

        case 4:
            printf("You choose eggs with pancakes");
            break;
        
        default:
            default_return("We have eggs but not that kind of bread");
            break;
    }
    return 0;
}

int choice(){
    int choice_1;
    printf("BREAKFAST MENU : ");
    printf("\n 1. Pancakes.");
    printf("\n 2. Eggs.");
    printf("\n 3. Waffles");
    printf("\n 4. Oatmeal");
    printf("\n Choose a breakfast item : ");
    scanf("\n %i",&choice_1);
    switch (choice_1){
        case 1 :
            pancakes();
            break;
        case 2:
            eggs();
            break;
        case 3 :
            waffles();
            break;
        case 4:
            oatmeal();
            break;
        default :
            default_return("We don't serve that kind of breakfast item");
            break;
    }
    return 0;
}