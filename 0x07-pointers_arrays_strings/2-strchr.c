#include "main.h"
#include <stddef.h>
/**
 * _strchr - character in the string
 *
 * @s: input
 * @c: frist occurrence of the character
 *Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
		return (s);

	return (NULL);
}
