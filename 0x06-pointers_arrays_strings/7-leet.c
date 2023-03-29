#include "main.h"

/**
 * leet_replacer - Replaces the leters in AEDTL and aedtl with 43071.
 *
 * @str: Input string to be modified.
 * @i: integer marking the position of the character to be modified relative
 * to the start of string.
 *
 * Return: pointer to modified string.
 */

char *leet_replacer(char *str, int i)
{
	char caps[] = "AEOTL";
	char lows[] = "aeotl";
	char nums[] = "43071";
	int n;

	for (n = 0; caps[n]; n++)
		if (caps[n] && (str[i] == caps[n] || str[i] == lows[n]))
			str[i] = nums[n];

	return (str);
}
/**
 * leet - changes Aa, Ee, Oo, Tt, Ll to 4, 3, 0, 7, 1 respectively.
 *
 * @str: input string.
 *
 * Return: pointer to modified string.
 */

char *leet(char *str)
{
	int i = 0;

	while (str[i])
	{
		str = leet_replacer(str, i);
	}
	return (str);
}
