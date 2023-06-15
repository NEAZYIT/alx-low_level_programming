# Doubly Linked Lists

## Project Description
This project aims to implement various functions for a doubly linked list data structure in C. The functions include printing the list, calculating the length, adding nodes at the beginning and end, freeing the list, getting a node at a specific index, and summing the data of the nodes.

## Requirements
- Allowed editors: vi, vim, emacs
- All files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All files should end with a new line
- A README.md file, at the root of the project folder, is mandatory
- The code should use the Betty style and will be checked using betty-style.pl and betty-doc.pl
- Global variables are not allowed
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, printf, and exit
- Prototypes of all functions should be included in the header file lists.h
- The header files should be include guarded

## Tasks

The following tasks are implemented in this repository:

1. Print list
2. List length
3. Add node
4. Add node at the end
5. Free list
6. Get node at index
7. Sum list
8. Insert node at index
9. Delete node at index
10. Reverse list

## Usage

To use the functions in this repository, you can include the `lists.h` header file in your code.

## Data Structure
The following structure is used to represent a node in the doubly linked list:

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

## Author
This folder was created by me NEAZYIT
