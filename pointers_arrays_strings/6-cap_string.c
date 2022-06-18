#include "main.h"
/**
 * cap_string - Capitalizes first letter of all words of a string
 * @s: The string to check
 * Return: Pointer to string
 * ASCII values:
 * space( ): 32,	 tabulation(\t): 9,	new line(\n): 10,	comma(,): 44,
 * semicolon(;): 59,	 dot(.): 46,		exclamation mark(!): 33,
 * question mark(?): 63, double quote("): 34,	parenthesis((): 40,
 * parenthesis()): 41,	 curly braces({): 123,	curly braces(}): 125.
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (i == 0)
				s[i] = s[i] - 32;
			if (s[i - 1] == 32 || s[i - 1] == 9 || s[i - 1] == 10 || s[i - 1] == 44)
			{
				s[i] = s[i] - 32;
			}
			else if (s[i - 1] == 59 || s[i - 1] == 46 || s[i - 1] == 33)
			{
				s[i] = s[i] - 32;
			}
			else if (s[i - 1] == 63 || s[i - 1] == 34 || s[i - 1] == 40)
			{
				s[i] = s[i] - 32;
			}
			else if (s[i - 1] == 41 || s[i - 1] == 123 || s[i - 1] == 125)
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
