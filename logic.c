#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 17;
    if(age > 17){
        printf("This is adult\n");
    }else{
        printf("This is not adult\n");
    }

    switch(age){
        case 17 : 
        printf("age is 17\n");
        break;

        case 18 : 
        printf("age is 18\n"); 
        break;
        case 19 : 
        printf("age is 19\n"); 
        break;
        default: printf("age is not 17, 18 or 19\n");
    }

    age > 17 ? printf("This is adult\n") : printf("This is not adult\n");

    return 0;
} 