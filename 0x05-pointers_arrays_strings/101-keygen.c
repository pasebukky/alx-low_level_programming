#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENTH_OF_PASSWORD 10

/**
 * main - Generates random password and prints it using putchar.
 *
 * Return: Always 0.
 */
int _putchar(char c);
int main(void)
{
    int i;
    
    char password[LENTH_OF_PASSWORD + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    srand(time(0));

    for (i = 0; i < LENTH_OF_PASSWORD; i++)
    {
        int random_index = rand() % (sizeof(charset) - 1);
        password[i] = charset[random_index];
    }

    password[LENTH_OF_PASSWORD] = '\0';

    for (i = 0; i < LENTH_OF_PASSWORD; i++)
    {
        _putchar(password[i]);
    }
    _putchar('\n');

    return 0;
}
