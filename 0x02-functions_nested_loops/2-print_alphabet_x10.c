#include "main.h"
/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	int line, k;



	for (line = 0; line <= 9; ++line)

	{

		for (k = 'a'; k <= 'z'; ++k)



			_putchar(k);



		_putchar('\n');

	}

}
