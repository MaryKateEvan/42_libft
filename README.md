# <p align="center">**libft**</p>
# <p align="center"> <sup>My own  </sup> [![My Skills](https://skillicons.dev/icons?i=c)](https://skillicons.dev)<sup>  library</sup> </p>

## About
> This project was about coding a C library. It contained a lot of **general purpose functions**, both existing ones (in libc) and additional ones (either not in the libc or were but in a different form). 

## Functions included in the project: 

### A. Functions from `libc`

#### Functions from `<ctype.h>`:
- `ft_isalpha` - checks if character is alphabetic.
- `ft_isdigit` - checks if character is a digit.
- `ft_isalnum` - checks if character is alphabetic or digit.
- `ft_isascii` - checks if character is ASCII.
- `ft_isprint` - checks if character is printable.
- `ft_toupper` - converts character to uppercase.
- `ft_tolower` - converts character to lowercase.

#### Functions from `<string(s).h>`:
- `ft_strlen` - calculates the length of a string.
- `ft_strchr` - locates the first occurrence of a character in a string.
- `ft_strrchr` - locates the last occurrence of a character in a string.
- `ft_strncmp` - compares two strings up to a specified number of characters.
- `ft_strnstr` - locates a substring in a string.
- `ft_strlcpy` - copies a string with a specified size limit.
- `ft_strlcat` - concatenates strings with a specified size limit.
- `ft_memset`-  sets a block of memory to a specified value.
- `ft_memcpy` - copies a block of memory from one location to another.
- `ft_memmove` - copies a block of memory from one location to another, handling overlaps correctly.
- `ft_memcmp` - compares two blocks of memory.
- `ft_memchr` - searches a block of memory for a specified byte.
- `ft_bzero` - writes zeroes to a byte string.

#### Functions from `<stdlib.h>`:
- `ft_atoi` - converts string to integer.
- `ft_calloc` - allocates and zero-initialize memory.
- `ft_strdup` - duplicates a string.<br>

### B. Additional functions (**not** included in `libc`)

#### Non-standard functions:
- `ft_substr` - extracts substring from string.
- `ft_strjoin` - concatenates two strings into a new string (with malloc).
- `ft_strtrim` - trims beginning and end of string with the specified characters.
- `ft_split` - splits string, with specified character as delimiter, into an array of strings.
- `ft_itoa` - converts integer to ASCII string.
- `ft_strmapi` - creates new string from modifying string with specified function.
- `ft_striteri` - applies a function to every character of a string.
- `ft_putchar_fd` - writes a character to a file descriptor.
- `ft_putstr_fd` - writes a string to a file descriptor.
- `ft_putendl_fd` - writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` - writes an integer to a file descriptor.

#### Linked list functions (_bonus part_):
- `ft_lstnew` - creates new list.
- `ft_lstsize` - counts elements of a list.
- `ft_lstlast` - finds last element of list.
- `ft_lstadd_back` - adds new element at end of list.
- `ft_lstadd_front` - adds new element at beginning of list.
- `ft_lstdelone` - deletes element from list.
- `ft_lstclear` - deletes sequence of elements of list from a starting point.
- `ft_lstiter` - applies function to content of all list's elements.
- `ft_lstmap` - applies function to content of all list's elements into new list.

