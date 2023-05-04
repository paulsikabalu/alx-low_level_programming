#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
    if (b == NULL)
        return 0;

    unsigned int ui = 0;
    for (int i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return 0;

        ui <<= 1;
        if (b[i] == '1')
            ui += 1;
    }

    return ui;
}

