#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: pointer to the destination string
* @src: pointer to the source string
* @n: number of bytes to print
* Return: pointer to the resulting string dest
*/

char *_strcat(char *dest, const char *src) {
char *p = dest;
while (*p) {
++p;
}
while (*src) {
*p++ = *src++;
}
*p = '\0';
return dest;
}
