#include "main.h"
/**
* swap_int - controls if a character is in lowercase
*@a:pointer
*@b:pointer
*Return: void
*/
void swap_int(int *a, int *b)
{
int x;
x = *a;
*b = x;
*a = *b;
}
