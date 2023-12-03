# C - Hash tables

Welcome to the fantastic world of hash tables! 🎉 In this project, I, **Ahmed Mahmoud** (GitHub: [gwaez](https://github.com/gwaez)), embarked on an exciting journey of learning about hashing by diving deep into the implementation of hash functions and hash tables in the C language.

## Tests :heavy_check_mark:

* [tests](./tests): A treasure trove of test files generously provided by the Holberton School.

## Header File :file_folder:

* [hash_tables.h](./hash_tables.h): This magical header file holds the secrets, containing definitions and prototypes for all the enchanting types and functions conjured up during this project.

### Meet the Wizards - Our Data Structures:

```c
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;
The Magical Spells - Function Prototypes:
File	Prototype
0-hash_table_create.c	hash_table_t *hash_table_create(unsigned long int size);
1-djb2.c	unsigned long int hash_djb2(const unsigned char *str);
2-key_index.c	unsigned long int key_index(const unsigned char *key, unsigned long int size);
3-hash_table_set.c	int hash_table_set(hash_table_t *ht, const char *key, const char *value);
4-hash_table_get.c	char *hash_table_get(const hash_table_t *ht, const char *key);
5-hash_table_print.c	void hash_table_print(const hash_table_t *ht);
6-hash_table_delete.c	void hash_table_delete(hash_table_t *ht);
100-sorted_hash_table.c	shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
Tasks :page_with_curl:
0. >>> ht = {} 🪄

0-hash_table_create.c: A spell to conjure a hash_table_t hash table.
Fails gracefully by returning NULL if the magic doesn't happen.
Successfully returns a pointer to the new hash table otherwise.
1. djb2 🌈

1-djb2.c: A spell to implement the djb2 hashing algorithm.
2. key -> index 🔑➡️📊

2-key_index.c: A spell to determine the index where a key/value pair should be stored in the array of a hash_table_t hash table.
3. >>> ht['betty'] = 'holberton' 🧙

3-hash_table_set.c: A spell to add an element to a hash_table_t table.
Ensures the key is never an empty string.
Returns 1 on success, 0 on failure.
4. >>> ht['betty'] 🕵️‍♂️

4-hash_table_get.c: A spell to retrieve a value associated with a key in a hash_table_t hash table.
Returns NULL if the key cannot be matched.
Otherwise, reveals the magical value associated with the key.
5. >>> print(ht) 🎨

5-hash_table_print.c: A spell to print a hash_table_t hash table.
Reveals each mesmerizing key/value pair in the order they appear in the array of the hash table.
Chooses to remain silent if the hash table is NULL.
6. >>> del ht 🗑️

6-hash_table_delete.c: A spell to gracefully delete a hash_table_t hash table.
7. $ht['Betty'] = 'Holberton' 💼💡

100-sorted_hash_table.c: Spells that define a sorted shash_table_t.
Functions identically to a hash_table_t hash table, but key/value pairs are inserted in alphabetical order based on the ASCII value of the key.
Prints key/value pairs in the enchanting order they are sorted.
Includes a spell shash_table_print_rev() to print the hash table in reverse order. 🔄
Feel free to explore the magical world of hash tables created with fun and excitement! ✨🚀🧙‍♂️


