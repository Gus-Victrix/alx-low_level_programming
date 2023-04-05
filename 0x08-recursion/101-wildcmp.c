#include "main.h"

/**
 * wildcmp - Compares two strings allowing for * as a wildcard.
 *
 * @s1: Base string offering comparison template.
 * @s2: String to be compared to template string.
 *
 * Return: 1 if strings are identical, 0 otherwise, -1 if null pointer entered.
 */

int wildcmp(char *s1, char *s2)
{
	/*Case Strings empty*/
	if (!*s1 && !*s2)
		return (1);

	/*Case similar*/
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/*Case wildcard*/
	/*Case with consequtive * in s2*/
ADJUSTMENT:
	if (*s2 == '*' && *(s2 + 1) == '*')
	{
		s2++;
		goto ADJUSTMENT;
	}
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	/*Case dissimilar*/
	return (0);
}
