#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: A pointer to the hash table
 * @key: the key to get the value of
 *
 * Return: NULL if the key cannot be matched
 *         The value associated with the key in ht
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	if (node == NULL)
		return (NULL);
	else
		return (node->value);
}
