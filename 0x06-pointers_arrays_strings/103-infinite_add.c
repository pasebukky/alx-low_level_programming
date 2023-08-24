#include "main.h"
#include <string.h>

/**
 * infinite_add - Adds 2 numbers that are strings
 * @n1: 1st number.
 * @n2: 2nd number.
 * @r: Buffer holding the results
 * @size_r: Buffer size.
 *
 * Return: Pointer to buffer holding result or 0
 * if the result cannot be stored in the buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int length_n1 = 0, length_n2 = 0;
    int cv = 0, sum, idx_r = 0;

    while (n1[length_n1] != '\0')
        length_n1++;
    while (n2[length_n2] != '\0')
        length_n2++;

    if (length_n1 >= size_r || length_n2 >= size_r)
        return (0);

    r[size_r - 1] = '\0';
    length_n1--;
    length_n2--;

    while (length_n1 >= 0 || length_n2 >= 0 || cv)
    {
        sum = cv;
        if (length_n1 >= 0)
            sum += n1[length_n1] - '0';
        if (length_n2 >= 0)
            sum += n2[length_n2] - '0';
        
        r[size_r - idx_r - 2] = (sum % 10) + '0';
        cv = sum / 10;

        if (length_n1 >= 0)
            length_n1--;
        if (length_n2 >= 0)
            length_n2--;
        idx_r++;
    }

    return (r + size_r - idx_r - 1);
}

