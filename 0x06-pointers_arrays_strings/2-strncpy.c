#include "main.h"

/**
* _strncpy - copies a string up to n
* @dest: Destination of the pointer to the string
* @src: Source of the pointer to the string to copy
* @n: Number of bytes to copy.
* Return: Pointer to the destination string.
*/

char *_strncpy(char *dest, const char *src, size_t n) {
char *p = dest;
while (n-- && (*p++ = *src++));
while (n--) {
*p++ = '\0';
}
return dest;
}
