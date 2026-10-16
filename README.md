*This project has been created as part of the 42 curriculum by didias-d*

# Libft

## Description

Libft is a project from the 42 curriculum whose goal is to create a personal
library in C.

The library contains reimplementations of standard C library functions, as well
as additional utility functions for strings, memory management, conversions,
file descriptor output, and linked lists.

The purpose of this project is to better understand how common C functions work
internally and to create a reusable library for future 42 projects.

## Instructions

To compile the library, run:

make

This creates the static library:

libft.a

Other available commands:

make clean
make fclean
make re

To use the library in another C program, include the header:

#include "libft.h"

and compile your program with libft.a.

Example:

cc main.c libft.a -o program

## Library contents

### Character functions

Functions used to test or convert characters:

- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_toupper
- ft_tolower

### String functions

Functions used to manipulate strings:

- ft_strlen
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_strlcpy
- ft_strlcat
- ft_strnstr
- ft_strdup
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_strmapi
- ft_striteri

### Memory functions

Functions used to manipulate memory:

- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_calloc

### Conversion functions

- ft_atoi
- ft_itoa

### File descriptor functions

- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

### Linked list functions

Functions used to create and manipulate linked lists:

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

## Resources

Resources used to understand the C standard library functions and their
behavior:

- C manual pages (`man`)
- 42 Libft subject
- C documentation

AI tools were used to help explain concepts, review code, and clarify the
requirements of the project. The implementation and testing of the functions
were done as part of the learning process.