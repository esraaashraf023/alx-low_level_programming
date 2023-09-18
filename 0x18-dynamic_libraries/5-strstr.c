#include "main.h"
/**
 * _strstr - frist occurrence of the substring
 * @haystack: type the string
 * @needle: type the string
 * Return:  pointer to the beginning of the located substring, or NUL
 */
char *_strstr(char *haystack, char *needle)
{
char *num1, *num2;

while (*haystack != '\0')
{
	num1 = haystack;
	num2 = needle;

	while (*haystack != '\0' && *num2 != '\0' && *haystack == *num2)
	{
		haystack++;
		num2++;
	}
	if (*num2 == '\0')
		return (num1);
	haystack = num1 + 1;
}
return (0);
}
