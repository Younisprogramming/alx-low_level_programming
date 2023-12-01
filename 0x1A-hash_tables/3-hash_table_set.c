#include "hash_tables.h"
/**
 * create_item - allocate memory
 * @key: the key
 * @value: value
 * Return: the pointer to the item
 */
hash_node_t *create_item(char *key,  char *value)
{
	hash_node_t *item = (hash_node_t *) malloc(sizeof(hash_table_t));

	item->key = (char *) malloc(strlen(key) + 1);
	item->value = (char *) malloc(strlen(value) + 1);

	strcpy(item->key, (char *)key);
	strcpy(item->value, (char *)value);

	return (item);
}
/**
 * handle_collision - adds a node at the beginning of a hash at a given index
 *
 * @head: head of the hash linked list
 * @k: key of the hash
 * @v: value to store
 * Return: head of the hash
 */
hash_node_t *handle_collision(hash_node_t **head, char *k, const char *v)
{
	hash_node_t *tmp;

	tmp = *head;

	while (tmp != NULL)
	{
		if (strcmp(k, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(v);
			return (*head);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(hash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(k);
	tmp->value = strdup(v);
	tmp->next = *head;
	*head = tmp;

	return (*head);
}
/**
 * hash_table_set - adds a hash (key, value) to a given hash table
 *
 * @ht: pointer to the hash table
 * @key: key of the hash
 * @value: value to store
 * Return: 1 if successes, 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = create_item((char *)key, (char *)value);

	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	hash_node_t *current_item = ht->array[index];

	if (current_item == NULL)
	{
		ht->array[index] = item;
		return (1);
	}
	else
	{
		if (strcmp(current_item->key, (char *)key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		else
		{
			if (handle_collision(&(ht->array[index]), (char *)key, value) == NULL)
				return (0);
			else
				return (1);
		}
	}
	return (0);
}
