#include <stdio.h>

int main(){
    printf("Hello World\n");

    int x = 50;
    int y; // declaration
    y = 10; // initialization

     /*/////////////   Conversion Characters   /////////////
        %c	Single character
        %d	Signed decimal integer (int)
        %e	Signed floating-point value in E notation
        %f	Signed floating-point value (float)
        %g	Signed value in %e or %f format, whichever is shorter
        %i	Signed decimal integer (int)
        %o	Unsigned octal (base 8) integer (int)
        %s	String of text
        %u	Unsigned decimal integer (int)
        %x	Unsigned hexadecimal (base 16) integer (int)
    src - http://www.java2s.com/Tutorial/C/0080__printf-scanf/TheprintfConversionCharactersandflags.htm*/


    printf("%s World!\n", "Hello");

    printf("The value of x is %d\n", x);
    printf("X: %d and Y: %d\n", x, y);

    printf("Give me a radius: ");
    int radius;

    scanf("%d", &radius); // address of operator (pointer)

    printf("You chose the value %d\n", radius);

    printf("What is your Name? (type) ");

    char name[20]; // char array of 20 characters. '\0' takes one spot to determine the end of the string
    scanf("%19s", name);

    printf("Your name: %s\n", name);

    return 0;
}