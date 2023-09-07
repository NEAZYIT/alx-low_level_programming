# Hash Tables

This repository contains C code for implementing hash tables along with various functions to create, manipulate, and delete hash tables.

## Requirements

- Allowed editors: vi, vim, emacs
- All code will be compiled on Ubuntu 20.04 LTS using gcc, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All code files should end with a newline character.
- A `README.md` file, located at the root of the project folder, is mandatory.
- The code should adhere to the Betty coding style, which will be checked using `betty-style.pl` and `betty-doc.pl`.
- The use of global variables is not allowed.
- Each C source file should contain no more than 5 functions.
- The C standard library is allowed.
- Prototypes for all functions should be included in the header file `hash_tables.h`.
- Don't forget to push your header file.
- All header files should have include guards.

## Data Structures

Please use the following data structures for this project:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;


## File: 0-hash_table_create.c

- Description: This C function creates a `hash_table_t` hash table.
- Returns: If the function fails, it returns NULL. Otherwise, it returns a pointer to the new hash table.

## 1. Implementing the djb2 Hashing Algorithm

### File: 1-djb2.c

- Description: This C function implements the djb2 hashing algorithm.

## 2. Finding the Index for Key-Value Pair

### File: 2-key_index.c

- Description: This C function returns the index at which a key/value pair should be stored in the array of a `hash_table_t` hash table.

## 3. Adding an Element to the Hash Table

### File: 3-hash_table_set.c

- Description: This C function adds an element to a `hash_table_t` hash table. The parameter `key` cannot be an empty string.
- Returns: It returns 1 on success, and 0 otherwise.

## 4. Retrieving a Value by Key

### File: 4-hash_table_get.c

- Description: This C function retrieves a value associated with a key in a `hash_table_t` hash table.
- Returns: If the key cannot be matched, it returns NULL. Otherwise, it returns the value associated with the key.

## 5. Printing a Hash Table

### File: 5-hash_table_print.c

- Description: This C function prints a `hash_table_t` hash table. It prints each key/value pair in the order they appear in the array of the hash table. It does not print anything if the hash table is NULL.

## 6. Deleting a Hash Table

### File: 6-hash_table_delete.c

- Description: This C function deletes a `hash_table_t` hash table.

## Author

- NEAZYIT
