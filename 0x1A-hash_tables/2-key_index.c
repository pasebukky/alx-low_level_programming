#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 *
 * @key: is the key
 * @size: is the size of the hash table
 * Return: the index at which the key/value pair should
 * be stored in the array of the hash table
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index, hash;

hash = hash_djb2(key);
index = hash % size;

return (index);
}
