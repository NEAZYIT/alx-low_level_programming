1 )Function to Update the Value of a Pointer
This program contains a function called reset_to_98 which takes a pointer to an integer as a parameter. The purpose of this function is to update the value of the integer to 98.

2 ) Function Explanation
In this task, you are required to write a function that swaps the values of two integers using their pointers.

3 ) n this task, we are writing a function in C programming language that returns the length of a given string. The function prototype is defined as int _strlen(char *s).

The function takes a string (char pointer) as an argument and returns an integer representing the length of the string. We can iterate over the string characters until we reach the null terminator character (\0) and count each character. The final count will give us the length of the string.

The standard library already provides a similar function called strlen(). However, in this task, we are writing our own function without using any standard library function.

To test our function, we have provided a test file 2-main.c which includes our header file and a test case. We have declared a string and passed it to our function to get the length of the string. Finally, we have printed the length to the console using printf.

4 ) This project is a part of the low-level programming track. The aim of the project is to implement a C function that can print a string to standard output followed by a new line character. The function uses the _puts prototype, which takes a character pointer to the string as its argument and returns nothing.

The _puts function is similar to the standard library function puts(), which also prints a string followed by a new line to the standard output.

5 ) In this project, we have implemented a function that takes a string as input and prints the string in reverse order. The function first finds the length of the string and then iterates through the string from the last character to the first character, printing each character as it goes.

6 ) Task Explanation
The task is to write a function rev_string that takes a string as an input and reverses it in place (i.e., without using additional memory space).

Solution
To reverse a string, we can swap the first and last characters of the string, then the second and second-to-last characters, and so on, until we have swapped all the characters.

For instance, if we have a string hello, we can swap h and o, e and l, and then swap l and h to get olleh.

We can implement this approach using two pointers, start and end, which initially point to the beginning and end of the string, respectively. We then swap the characters at the two pointers, move the start pointer one position to the right and the end pointer one position to the left, and repeat the process until the two pointers meet in the middle of the string.

7 ) In this task, we have to implement a function puts2 that takes a pointer to a string as an argument and prints every other character of the string, starting with the first character, followed by a new line.

8 ) In this task, we are tasked with writing a function that prints half of a string followed by a new line. The function prototype is void puts_half(char *str).

The function should print the second half of the string. If the number of characters in the string is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2.

To accomplish this, we can first find the length of the string using the _strlen function we previously implemented. If the length of the string is even, we can simply print the second half of the string starting from the middle. If the length of the string is odd, we can print the second half of the string starting from the character at index (length_of_the_string - 1) / 2 + 1.

9 ) In this task, we are required to create a function named print_array that takes an array of integers and the number of elements to print. The function should print the elements of the array, separated by a comma and a space, in the same order they are stored in the array.

The prototype of the function is void print_array(int *a, int n);. The first argument, int *a, is a pointer to the first element of the array. The second argument, int n, is the number of elements to print.

We can use a loop to iterate over the elements of the array and print them using printf function. The loop should start at index 0 and go up to index n-1, since we only want to print n elements.

10 ) Task: Implementing _strcpy function
The _strcpy function copies the string pointed to by src, including the terminating null byte \0, to the buffer pointed to by dest. The function returns the pointer to dest.
