#include <stdio.h>
#include <stdlib.h>
/*
 * @key : The key, string
 * The key is unique in the HashTable
 * 
 * @value : The value corresponding to a key
 * 
 * @next : A pointer to the next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/*
 * @size: The size of the array
 * 
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_strdup(char *str);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
