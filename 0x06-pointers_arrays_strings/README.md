1 ) This function concatenates two strings by appending the source string to the destination string. It overwrites the terminating null byte of the destination string and then adds a terminating null byte to the resulting string.

2 ) This function concatenates two strings by appending the source string to the destination string. It differs from _strcat() in that it only uses at most n bytes from the source string and the source string does not need to be null-terminated if it contains n or more bytes.

3 ) This function copies a string from the source to the destination. It works exactly like strncpy(), which means it copies at most n characters from the source string to the destination string. If the length of the source string is less than n, the remaining characters in the destination string are filled with null bytes.

4 ) This function compares two strings lexicographically. It works exactly like strcmp(), which means it compares the characters of the two strings until it finds a difference or reaches the end of one or both strings.

5 ) This function reverses the content of an array of integers by swapping the elements at the beginning and the end of the array, then moving inward until all elements have been swapped.

6 ) This function changes all lowercase letters of a string to uppercase. It returns a pointer to the resulting string.

7 ) This function capitalizes all the words in a string by iterating through the characters and checking for the start of a word. Words are defined as sequences of characters separated by spaces, tabs, newlines, commas, semicolons, periods, exclamation marks, question marks, quotes, parentheses, and braces. The function then capitalizes the first character of each word.

8 ) This function encodes a string into 1337 by replacing certain letters with numbers according to the following rules:

Letter a and A are replaced with 4
Letter e and E are replaced with 3
Letter o and O are replaced with 0
Letter t and T are replaced with 7
Letter l and L are replaced with 1
The function returns a pointer to the resulting string.
