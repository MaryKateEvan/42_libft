# <p align="center">**libft**</p>
# <p align="center"> <sup>My own  </sup> [![My Skills](https://skillicons.dev/icons?i=c)](https://skillicons.dev)<sup>  library</sup> </p>

## About
> This project was about coding a C library. It contained a lot of **general purpose functions**, both existing ones (in libc) and additional ones (either not in the libc or were but in a different form). 

## Functions included in the project: 

### A. Functions from `libc`

#### Functions from `<ctype.h>`:
- [`ft_isalpha`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_isalpha.c) - checks if character is alphabetic.
- [`ft_isdigit`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_isdigit.c) - checks if character is a digit.
- [`ft_isalnum`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_isalnum.c) - checks if character is alphabetic or digit.
- [`ft_isascii`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_isascii.c) - checks if character is ASCII.
- [`ft_isprint`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_isprint.c) - checks if character is printable.
- [`ft_toupper`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_toupper.c) - converts character to uppercase.
- [`ft_tolower`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_tolower.c) - converts character to lowercase.

#### Functions from `<string(s).h>`:
- [`ft_strlen`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_strlen.c) - calculates the length of a string.
- [`ft_strchr`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_strchr.c) - locates the first occurrence of a character in a string.
- [`ft_strrchr`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_strrchr.c) - locates the last occurrence of a character in a string.
- [`ft_strncmp`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_strncmp.c) - compares two strings up to a specified number of characters.
- [`ft_strnstr`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_strnstr.c) - locates a substring in a string.
- [`ft_strlcpy`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_strlcpy.c) - copies a string with a specified size limit.
- [`ft_strlcat`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_strlcat.c) - concatenates strings with a specified size limit.
- [`ft_memset`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_memset.c) -  sets a block of memory to a specified value.
- [`ft_memcpy`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_memcpy.c) - copies a block of memory from one location to another.
- [`ft_memmove`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_memmove.c) - copies a block of memory from one location to another, handling overlaps correctly.
- [`ft_memcmp`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_memcmp.c) - compares two blocks of memory.
- [`ft_memchr`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_memchr.c) - searches a block of memory for a specified byte.
- [`ft_bzero`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_bzero.c) - writes zeroes to a byte string.

#### Functions from `<stdlib.h>`:
- [`ft_atoi`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_atoi.c) - converts string to integer.
- [`ft_calloc`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_calloc.c) - allocates and zero-initialize memory.
- [`ft_strdup`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_strdup.c) - duplicates a string.<br>

### B. Additional functions (**not** included in `libc`)

#### Non-standard functions:
- [`ft_substr`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_substr.c) - extracts substring from string.
- [`ft_strjoin`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_strjoin.c) - concatenates two strings into a new string (with malloc).
- [`ft_strtrim`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_strtrim.c) - trims beginning and end of string with the specified characters.
- [`ft_split`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_split.c) - splits string, with specified character as delimiter, into an array of strings.
- [`ft_itoa`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_itoa.c) - converts integer to ASCII string.
- [`ft_strmapi`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_strmapi.c) - creates new string from modifying string with specified function.
- [`ft_striteri`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_striteri.c) - applies a function to every character of a string.
- [`ft_putchar_fd`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_putchar_fd.c) - writes a character to a file descriptor.
- [`ft_putstr_fd`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_putstr_fd.c) - writes a string to a file descriptor.
- [`ft_putendl_fd`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_putendl_fd.c) - writes a string followed by a newline to a file descriptor.
- [`ft_putnbr_fd`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_putnbr_fd.c) - writes an integer to a file descriptor.

#### Linked list functions (_bonus part_):
- [`ft_lstnew`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_lstnew.c) - creates new list.
- [`ft_lstsize`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_lstsize.c) - counts elements of a list.
- [`ft_lstlast`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_lstlast.c) - finds last element of list.
- [`ft_lstadd_back`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_lstadd_back.c) - adds new element at end of list.
- [`ft_lstadd_front`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_lstadd_front.c) - adds new element at beginning of list.
- [`ft_lstdelone`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_lstdelone.c) - deletes element from list.
- [`ft_lstclear`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_lstclear.c) - deletes sequence of elements of list from a starting point.
- [`ft_lstiter`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_lstiter.c) - applies function to content of all list's elements.
- [`ft_lstmap`](https://github.com/MaryKateEvan/42_libft/blob/master/ft_lstmap.c) - applies function to content of all list's elements into new list.

