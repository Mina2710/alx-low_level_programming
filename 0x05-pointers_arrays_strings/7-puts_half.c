#include "main.h"

/**
* puts_half - Prints out the first half of a string.
* @str: input string to print.
* Return: Nothing
*/

void puts_half(char *str)
{
int i;
int j;
i = j = 0;
while (str[i] != '\0')
{
i++;
}
if (i % 2  == 0)
{
j = i / 2;
}
else
{
j = (i + 1) / 2;
}
while (j < i)
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
