#include "main.h"
/**
* puts_half - function
* @str: string operand
*
* Description: prints half of a string
* Return: string
*/
void puts_half(char *str)
{
	int counter = 0, i, d;

	for (i = 0; str[i]; i++)
		counter++;
		if (counter % 2 == 0)
		{
			i = counter / 2;
		}
		else
		{
			d = (counter - 1) / 2;
			i = counter - d;
		}
	for ( ; i < counter; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
