#include "main.h"

/**
 * binary_to_uint - binary can be converted through unsigned int
 * @b: A string that takes binary number or numbers
 * Return: A numbers that are coverted
 */

unsigned int binary_to_uint(const char *b)
{
        int i;
        unsigned int dev_val = 0;

        if (!b)
                return (0);
        for (j = 0; b[j]; j++)
        {
                if (b[j] < '0' || b[j] > '1')
                        return (0);
		dec_val = 2 * dec_val + (b[j] - '0');
        }
        return (dec_val);
}
