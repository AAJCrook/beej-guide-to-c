#include <stdio.h>

int main(void)
{
    // Sample of variables and slotting them into a printf
    int i = 2;
    float f = 3.14;
    char* str = "Hello World"; // You don't get strings in C, gotta use a char pointer

    /*
    The way printf works with %:
    When printf see's a percent in the quotes, it looks at the character next to it
    %s in this case, the s means string, so it'll read in the first variable, str in this case
    and slot it in where %s is. Same for %d and the second variable, and %f and the third variable
    */
    printf("%s i = %d and f = %f!\n", str, i, f);

    // Fun fact, no default bools or booleans in C. You can import <stdbool.h>, but it's a facade
    // Usually use ints as booleans.
    if(1)
    {
        printf("1 is True\n");
    }
    if(-4000)
    {
        printf("So is -4000\n");
    }
    if(0)
    {
        printf("But only 0 is false\n");
    }

    // +=, and the other arithmetic assignments are supported, (why does Python not allow ++!?)
    i += 2;
    i++;
    printf("Since i started at 2, had two added to it, and was incremented by 1, it should equal 5: %d\n", i);
}