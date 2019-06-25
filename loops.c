#include <stdio.h>

int main(){

    // initialization
    // comparison
    // update 
    printf("=============================\n");
    printf("For Loop\n");
    printf("=============================\n");
    int size = 10;
    int ages[] = {12, 13, 14, 15, 16, 17, 18, 19, 20, 21};
    int calculatedSize = sizeof(ages) / sizeof(ages[0]);
    for(int i = 0; i <calculatedSize; i++){
        printf("ages[%d] = %d \n", i, ages[i]);
    }
    printf("=============================\n");
    printf("While Loop\n");
    printf("=============================\n");

    int i = 0;
    while (i < calculatedSize){
        printf("ages[%d] = %d \n", i, ages[i]);
        i++;
    }
    printf("=============================\n");
    printf("Do While Loop\n");
    printf("=============================\n");

    
    int input;
    do{
        printf("Choose a number between 0 and 9: ");
        scanf("%d", &input);
    }
    while(input < 0 || input > 9);
    printf("Your input was: %d\n", input);

    return 0;
 }