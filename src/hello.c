// Standard Hello World Program

// # means preprocessor (pre-compiler actions) usually are either #include or #define
// stdio.h is a header file, Standard I/O (Input/Output)
#include <stdio.h>

int main(void)
{
    // How do we know where printf comes from? Type in man 3 printf to a linux terminal for a manual
    printf("Hello World\n");
    /*
    How to compile and *use* this code?

    Output to a file named hello, the code from hello.c
    gcc -o hello hello.c

    Execute a file named hello
    ./hello

    Fun example of compiling multiple source code files into one executable
    Output a file named awesomegame from multiple .c files:
    gcc -o awesomegame ui.c characters.c npc.c items.c
    */
}