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
    for (i = 0; b[i] != "\0"; i++)
    {
        if (b[i] != 1 && b[i] != 0)
        {
            return (-1);
        }
    }
    while (*b != "\0")
    {
        if (b[i] == "1")
        {
            res += (pow(2, i));
        }
        i--;
    }

}
