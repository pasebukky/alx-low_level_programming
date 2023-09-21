#include "lists.h"

/**
 * folktale - Prints a specific message
 */

void folktale(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}


/**
 * print_folktale - Prints message from folktale
 * before the main function is executed using attribute
 */

__attribute__((constructor))
void print_folktale(void)
{
folktale();
}
