*This project has been created as part of the 42 curriculum by atahlawi.*

# Libft

## Description

Libft is a custom C library created as part of the 42 curriculum.
The goal is to recreate useful functions from the C standard library and implement additional functions for strings, memory management, conversions, file descriptors, and linked lists.

## Functions

### Character Functions

* ft_isalpha — Checks if a character is alphabetic.
* ft_isdigit — Checks if a character is a digit.
* ft_isalnum — Checks if a character is alphanumeric.
* ft_isascii — Checks if a character belongs to the ASCII character set.
* ft_isprint — Checks if a character is printable.
* ft_toupper — Converts a lowercase character to uppercase.
* ft_tolower — Converts an uppercase character to lowercase.

### String Functions

* ft_strlen — Returns the length of a string.
* ft_strchr — Finds the first occurrence of a character in a string.
* ft_strrchr — Finds the last occurrence of a character in a string.
* ft_strncmp — Compares two strings up to a specified number of characters.
* ft_strnstr — Finds a substring within a string, limited by a length.
* ft_strdup — Creates a duplicate of a string.
* ft_strlcpy — Copies a string safely with a size limit.
* ft_strlcat — Appends a string safely with a size limit.

### Memory Functions

* ft_memset — Fills a memory area with a specified byte.
* ft_bzero — Sets a memory area to zero.
* ft_memcpy — Copies a block of memory.
* ft_memmove — Copies memory safely when source and destination overlap.
* ft_memchr — Searches for a byte in a memory area.
* ft_memcmp — Compares two memory areas.
* ft_calloc — Allocates and initializes memory to zero.

### Conversion Functions

* ft_atoi — Converts a string to an integer.
* ft_itoa — Converts an integer to a string.

### Additional String Functions

* ft_substr — Creates a substring from a string.
* ft_strjoin — Joins two strings together.
* ft_strtrim — Removes specified characters from the beginning and end of a string.
* ft_split — Splits a string into an array of strings using a delimiter.
* ft_strmapi — Applies a function to each character and creates a new string.
* ft_striteri — Applies a function to each character of a string.

### File Descriptor Functions

* ft_putchar_fd — Writes a character to a file descriptor.
* ft_putstr_fd — Writes a string to a file descriptor.
* ft_putendl_fd — Writes a string followed by a newline to a file descriptor.
* ft_putnbr_fd — Writes an integer to a file descriptor.

### Linked List Functions

* ft_lstnew — Creates a new linked-list node.
* ft_lstadd_front — Adds a node to the beginning of a list.
* ft_lstsize — Counts the number of nodes in a list.
* ft_lstlast — Returns the last node of a list.
* ft_lstadd_back — Adds a node to the end of a list.
* ft_lstdelone — Deletes one node and frees its content.
* ft_lstclear — Deletes and frees all nodes in a list.
* ft_lstiter — Applies a function to the content of every node.
* ft_lstmap — Creates a new list by applying a function to every node.

## Instructions

Compile the library:

make

Compile a test program:

cc -Wall -Wextra -Werror main.c libft.a -o test

Run:

./test

Clean object files:

make clean

Remove all generated files:

make fclean


Recompile:

make re

## Resources

* GeeksforGeeks — C programming concepts and examples.
* Stack Overflow — Debugging and understanding C-related errors.
* W3Schools — C programming tutorials and references.

## AI Usage

AI was used as a learning and debugging tool to review implementations, identify memory-management issues, explain compiler errors, and create test cases.

