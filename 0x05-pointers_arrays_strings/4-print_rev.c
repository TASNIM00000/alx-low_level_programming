#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*print_rev - checkk if a character is in lowercase
*@s: pointer
*Return: void
*/
void print_rev(char *s)
{
int l;
int i;
l = strlen(s);
for (i = l-1 ; i >= 0 ; i--)
{
putchar(s[i]);
}
putchar('\n');
}
