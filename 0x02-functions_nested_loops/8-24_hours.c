#include "main.h"
/**
*jack_bauer - checkk if a character is in lowercase
*desc
*Return;
*/
void jack_bauer(void)
{
int m;
int h;
for (h = 0 ; h <= 23 ; h++)
{
for (m = 0 ; m <= 59 ; m++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar(10);
}
}
}
