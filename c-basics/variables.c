// Declaring (Creating) Variables
/* To create a variable, specify the type and assign it a value: */

/* Syntax must looks like 
type variableName = value; */ 

# include <stdio.h>

int main() {
    int myNum = 15;

    // or also we can declare it first and then assign a value to the variable

    int numVar;

    numVar = 1;

    // C format specifiers

    /* Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.
    A format specifier starts with a percentage sign %, followed by a character.
    For example, to output the value of an int variable, use the format specifier %d surrounded by double quotes (""), inside the printf() function: */

    int mNum = 10;
    printf("%d", mNum);

    // To print other types, use %c for char and %f for float:

    // create variables
    int num = 11;
    float flota = 11.11;
    char letter = 'J';

    // print variables
    printf("%d \n", num);
    printf("%f \n", flota);
    printf("%c \n", letter);


    // Print different types in a single printf()
    printf("My number is %d and my letter is %c", num, letter);
}