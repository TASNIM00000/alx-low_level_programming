#include "main.h"
/**
*print_last_digit - checkk if a character is in lowercase
*@n: integer
*Return: return n
*/
int print_last_digit(int n)
{
int lastdigit = n % 10;
if (lastdigit < 0)
lastdigit *= -1;

_putchar (lastdigit + '0');
return (lastdigit);
}
