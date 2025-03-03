#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration:
    //A block of memmory of the correct size is allocated by the compiler.
    int a;
    int c;
    //Variable declaration and initialisation
    int b = 3;

    a = 2;
    c = a + b;

    //%d formater specifier for decimal representation of a variable.
    printf("The sum of %d and %d is %d\n", a, b, c);
    return EXIT_SUCCESS;
}