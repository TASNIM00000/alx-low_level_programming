#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _islower - check the  lowercase.
 * Description: print if it is lc
 * 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character . 0 for the rest.
 */
int _islower(int c)
{
int n = c ;
for (int i = 97 ; i<=122 ; i++ )
{
if (n == i)
{
return(1);
}
else
{
return (0);
}
}
}
