#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: int
 *description - return 1 if upper or lower
 * Return: return 1 if alpabet and 0 on fail
*/
int _isalpha(int c)
{

	if (c >= 97 && c <= 122)

	{

		return (1);

	}

	else if (c >= 65 && c <= 90)

	{

		return (1);

	}

	else

	{

		return (0);

	}

}
