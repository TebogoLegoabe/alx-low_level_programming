#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: the key to look for
 * Return: the value or NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *temporal = NULL;

	if (!key)
		return (NULL);

	if (ht)
	{
		index = key_index((const unsigned char *)key, ht->size);
		temporal = ht->array[index];
		while (temporal)
		{
			if (strcmp(temporal->key, key) == 0)
				return (temporal->value);
			temporal = temporal->next;
		}
	}
	return (NULL);
}
