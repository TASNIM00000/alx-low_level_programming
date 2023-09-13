#include "main.h"
/**
*_islower - checkk if a character is in lowercase or upppc
*@c: character if it alphaaa
*Return: return 0 or 1
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 90))
return (1);

return (0);
}
