#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 * Description: print alphaaa
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int n = 97;
while (n <= 122)
{
_putchar(n);
n++;
}
putchar('\n');
}
