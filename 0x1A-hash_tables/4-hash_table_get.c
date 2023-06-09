#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: the key to look for
 * Return: the value or NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ptr;
	hash_node_t *node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	ptr = key_index((unsigned char *) key, ht->size);

	if (ht->array[ptr] == NULL || ht->array[ptr] == 0)
		return (NULL);

	if (strcmp(ht->array[ptr]->key, key) == 0)
		return (ht->array[ptr]->value);

	node = ht->array[ptr];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return node->value;
		node = node->next;
	}

	return (NULL);
}
