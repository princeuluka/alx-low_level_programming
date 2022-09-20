#include "main.h"
/**
* print_rev - function
* @s: first operand and pointer
*
* Description: print a string in reverse with a newline.
* Return: string
*/
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
