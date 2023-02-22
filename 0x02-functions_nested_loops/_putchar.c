#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character to c output
 * charactor to string
 *
 * Return: Always 0.
 * on error return 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
