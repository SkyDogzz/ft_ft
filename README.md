# Libft

## Description
Libft is a custom C library that provides a comprehensive collection of utility functions commonly used in system programming and algorithmic tasks. It offers functions for memory manipulation, string operations, character checking, conversion routines, handling of both singly and doubly linked lists, binary tree operations, hash map management, and other mathematical utilities.

## Academic Integrity Notice
**Important:** Students of 42 who have not developed and submitted their own version of Libft are strongly discouraged from cloning or using these files. Unauthorized use of this repository may be considered cheating by 42 and could lead to serious academic consequences. Please ensure you complete your own work before referencing this code.

## Installation
To compile and generate the static library `libft.a`, run:
```sh
make
```

To remove object files:
```sh
make clean  # Removes object files
```

To remove object files and the compiled archive:
```sh
make fclean  # Removes object files and the archive
```

To recompile the library:
```sh
make re
```

For static code analysis using cppcheck:
```sh
make lint
```
The lint results are saved in `log/lint_errors.log`.

## Library Contents

### Memory Functions
- **ft_memset**: Fills a block of memory with a specified value.
- **ft_bzero**: Sets a block of memory to zero.
- **ft_memcpy**: Copies a block of memory.
- **ft_memccpy**: Copies memory until a specific character is encountered.
- **ft_memmove**: Copies a block of memory, handling overlapping areas.
- **ft_memchr**: Searches for a value in a block of memory.
- **ft_memcmp**: Compares two blocks of memory.
- **ft_calloc**: Allocates and initializes a block of memory.

### String Functions
- **ft_strlen**: Calculates the length of a string.
- **ft_strdup**: Duplicates a string.
- **ft_strlcat**: Concatenates two strings, appending up to `dstsize - 1` characters.
- **ft_strlcpy**: Copies a string, copying up to `dstsize - 1` characters.
- **ft_strchr**: Locates the first occurrence of a character in a string.
- **ft_strrchr**: Locates the last occurrence of a character in a string.
- **ft_strnstr**: Locates a substring in a string (up to a given length).
- **ft_strcmp**: Compares two strings.
- **ft_strncmp**: Compares two strings up to a specified number of characters.
- **ft_strndup**: Duplicates up to *n* characters of a string.
- **ft_strreplace**: Replaces occurrences of a substring with another substring.
- **ft_freetab**: Frees a dynamically allocated array of strings.
- **ft_substr**: Extracts a substring from a string.
- **ft_strjoin**: Concatenates two strings into a new string.
- **ft_strtrim**: Trims specified characters from the beginning and end of a string.
- **ft_split**: Splits a string into an array of substrings based on a delimiter.
- **ft_strmapi**: Applies a function to each character of a string, producing a new string.
- **ft_isin_charset**: Checks if a character is within a given set.
- **ft_isin_stringset**: Checks if any character in a string belongs to a given set, based on a delimiter.

### Character Check Functions
- **ft_isalpha**: Checks if a character is alphabetic.
- **ft_isdigit**: Checks if a character is a digit.
- **ft_isalnum**: Checks if a character is alphanumeric.
- **ft_isascii**: Checks if a character is part of the ASCII set.
- **ft_isprint**: Checks if a character is printable.
- **ft_isspace**: Checks if a character is a whitespace.
- **ft_islower**: Checks if a character is lowercase.
- **ft_isupper**: Checks if a character is uppercase.
- **ft_toupper**: Converts a character to uppercase.
- **ft_tolower**: Converts a character to lowercase.

### Conversion Functions
- **ft_atoi**: Converts a string to an integer.
- **ft_itoa**: Converts an integer to a string.

### File Descriptor Output Functions
- **ft_putchar_fd**: Writes a character to a file descriptor.
- **ft_putstr_fd**: Writes a string to a file descriptor.
- **ft_putendl_fd**: Writes a string followed by a newline to a file descriptor.
- **ft_putnbr_fd**: Writes an integer to a file descriptor.

### Linked List Functions (Singly Linked List)
- **ft_lstnew**: Creates a new list element.
- **ft_lstadd_front**: Adds an element at the beginning of the list.
- **ft_lstsize**: Returns the number of elements in the list.
- **ft_lstsize_full**: Returns the full size of the list (detailed version).
- **ft_lstfirst**: Returns the first element of the list.
- **ft_lstlast**: Returns the last element of the list.
- **ft_lstadd_back**: Adds an element at the end of the list.
- **ft_lstdelone**: Deletes a single element from the list.
- **ft_lstclear**: Deletes and frees all elements of the list.
- **ft_lstiter**: Applies a function to each element of the list.
- **ft_lstmap**: Applies a function to each element and creates a new list.

### Doubly Linked List Functions
- **ft_dlstnew**: Creates a new doubly linked list element.
- **ft_dlstadd_front**: Adds an element at the beginning of the doubly linked list.
- **ft_dlstadd_back**: Adds an element at the end of the doubly linked list.
- **ft_dlstsize**: Returns the number of elements in the doubly linked list.
- **ft_dlstsize_full**: Returns the full size of the doubly linked list.
- **ft_dlstfirst**: Returns the first element of the doubly linked list.
- **ft_dlstlast**: Returns the last element of the doubly linked list.
- **ft_dlstiter**: Applies a function to each element of the doubly linked list.
- **ft_dlstmap**: Applies a function to each element and creates a new doubly linked list.
- **ft_dlstdelone**: Deletes a single element from the doubly linked list.
- **ft_dlstclear**: Deletes and frees all elements of the doubly linked list.

### Binary Tree Functions
- **ft_btree_new**: Creates a new binary tree node.
- **ft_btree_insert**: Inserts a node into the binary tree using a comparison function.
- **ft_btree_inorder**: Traverses the binary tree in-order, applying a function to each node.
- **ft_btree_preorder**: Traverses the binary tree pre-order.
- **ft_btree_postorder**: Traverses the binary tree post-order.
- **ft_btree_size**: Returns the total number of nodes in the binary tree.
- **ft_btree_height**: Returns the height of the binary tree.
- **ft_btree_clear**: Deletes and frees all nodes of the binary tree.

### Hash Map Functions
- **ft_hashmap_new**: Creates a new hash map with a predefined number of buckets.
  - *(Additional hash map functions such as setting, getting, deleting, and clearing items are indicated as comments in the header.)*

### Utility Functions
- **ft_abs**: Returns the absolute value of an integer.
- **ft_max**: Returns the maximum of two integers.
- **ft_min**: Returns the minimum of two integers.
- **ft_swap**: Swaps the values of two integers.
- **ft_power**: Computes the power of a number.
- **ft_factorial**: Computes the factorial of a number.
- **ft_sqrt**: Computes the square root of an integer.

## Contact
Developed by `skydogzz` and `tstephan`.

If you have suggestions or improvements, feel free to open an issue or submit a pull request!
