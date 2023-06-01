#include "main.h"
/**
* _strlen - string length
* @s: input string
* Return: integer length
*/
int _strlen(char *s)
{
int i, len;
len = 0;

for (i = 0; s[i] != '\0'; i++)
{
len++;
}
return (len);
}

