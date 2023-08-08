#include "main.h"

/**
* binary_to_uint - converts binaray to unsigned int
* @b: binary number to be converted
*
* Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
    int i;
    unsigned int res;

    if (b == NULL)
    {
        return (-1);
    }
    for (i = 0; b[i]; i++)
    {
        if (b[i] != '0' && b[i] != '1')
        {
            return (-1);
        }
    }
    while (*b)
    {
        if (b[i] == '1')
        {
            res += (pow(2, i));
        }
        i--;
        b++;
    }

return (res);
}
