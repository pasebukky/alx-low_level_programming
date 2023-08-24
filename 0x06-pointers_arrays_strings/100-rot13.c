#include "main.h"
#include <string.h>

/**
 * rot13 - Encode a string using ROT13 cipher.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */

char *rot13(char *str)
{
    char *ptr = str;
    char *charSeen;
    int index;
    char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char rot13_letters[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    for (; *ptr != '\0'; ptr++)
    {
        charSeen = strchr(letters, *ptr);
        if (charSeen != NULL)
        {
            index = charSeen - letters;
            *ptr = rot13_letters[index];
        }
    }

    return str;
}
