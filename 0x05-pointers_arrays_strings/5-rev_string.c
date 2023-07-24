#include "main.h"
/**
 * rev_string - Function that reverses string
 * @s: String
 * Return 0
 */
void rev_string(char *s)
{
int i = 0;
int j;
char str;
while (s[i] != '\0')
{
	i++;
}
for (j = 0; j < i / 2; j++)
{
	str = s[j];
	s[j] = s[i - 1 - j];
	s[i - 1 - j] = str;
}
}
