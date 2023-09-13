#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase.
 * Description: print alphaaa ten times.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
int n = 97;
while (n <= 122)
{
_putchar(n);
n++;
}
_putchar('\n');
}
}

