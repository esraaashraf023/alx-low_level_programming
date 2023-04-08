#include "main.h"
/**
 * _strspn - ironmen
 * @s: this is string
 * @accept: the string
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i, volue;

	for (j = 0; s[j] != '\0'; j++)
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (s[j] == accept[i])
			{
				volue++;
				break;
			}
			i++;
		}
		if (s[j] != accept[i])
			break;
	}
			return (j);
}
