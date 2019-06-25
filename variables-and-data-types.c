#include <stdio.h>
#include <stdbool.h>

int main(){
    int a = 10;
    double b = 10.5;
    printf("%lu\n", sizeof(b)); // double : 64 bits
    float c = 10.5;  
    printf("%lu\n", sizeof(c)); // float : 32 bits
    char d = 'a';
    char e[] = "Easy way to define string";
    bool f = false;

    int zero = .9999; // 0
    printf("zero is %d\n", zero);

    int slices = 17;
    int people = 2;

    double slicesPerPerson = (double) slices / people; //
    printf("%lf\n", slicesPerPerson);

    double test1 = 25 / 2 * 2; //24.0
    double test2 = 25 / 2 * 2.0; //24.0

    double test3 = 25.0 / 2 * 2; //25.0
    double test4 = (double) 25 / 2 * 2; //25.0

    printf("test1: %lf, test2: %lf, test3: %lf, test4: %lf\n", test1, test2, test3, test4);

    return 0;
}