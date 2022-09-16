#include <stdio.h>

/**
 * main - a function that prints an integer.
 *
 * Return: Always 0.
 */

int main() 

{   
    int number;
   
      putchar("Enter an integer: ");  
    
    // reads and stores input
    scanf("%d", &number);

    // displays output
    putchar("You entered: %d", number);
    
    return 0;
}
