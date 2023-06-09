#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with a key.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: the value associated with the element,
 * 		or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	hash_node_t *node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return node->value;
		node = node->next;
	}

	return (NULL);
}
