#include "main.h"
/**
*_islower - controls if a character is in lowercase
*@c: character to be verified
*Return: return 0 or 1
*/
int _islower(int c)
{
int i ;
for ( i = 97 ; i<=122 ; i++ )
{
if (c == i)
return(1);
else
return (0);
}
}
