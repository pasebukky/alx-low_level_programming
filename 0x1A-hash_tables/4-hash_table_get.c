#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *tmp;

if (ht == NULL || key == NULL || *key == '\0')
	return (0);

index = key_index((const unsigned char *)key, ht->size);

tmp = ht->array[index];

if (tmp)
{
	while (strcmp(tmp->key, key) != 0)
		tmp = tmp->next;
	if (tmp)
		return (tmp->value);
}
return (NULL);
}
