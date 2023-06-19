# 0x18. Dynamic libraries

This repository contains solutions for the **0x18. Dynamic libraries** project of the ALX Low-Level Programming curriculum.

## Requirements

### C

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with the following options: -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A README.md file, at the root of the project folder, is mandatory
- Code should follow the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Not allowed to use global variables
- No more than 5 functions per file
- Not allowed to use the standard library. Functions like printf, puts, etc. are forbidden
- Allowed to use _putchar
- Don't push _putchar.c file, it won't be taken into account
- Prototypes of all functions and the _putchar function should be included in the main.h header file
- Don't forget to push the header file

### Bash

- Allowed editors: vi, vim, emacs
- All scripts will be tested on Ubuntu 20.04 LTS
- All files should end with a new line
- The first line of all files should be exactly `#!/bin/bash`
- A README.md file, at the root of the project folder, describing what each script does, is mandatory
- All files must be executable

## Tasks

### 0. A library is not a luxury but one of the necessities of life

Create the dynamic library `libdynamic.so` containing the provided functions.

nt _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);


### 1. Without libraries, what have we? We have no past and no future

Create a script that creates a dynamic library `liball.so` from all the .c files in the current directory.

### 2. Let's call C functions from Python

Create a dynamic library `100-operations.so` that contains C functions to be called from Python. Example usage is provided.

### 3. Code injection: Win the Giga Millions!

Create a shell script `101-make_me_win.sh` that, when run, will allow you to win the Giga Millions jackpot.

**Note:** The shell script should be maximum 3 lines long, not use forbidden characters, and have a maximum of two commands. Detailed instructions are provided in the task description.

## AUTHOR

NEAZYIT
