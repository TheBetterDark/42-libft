# 42-Libft

## Description

This project is a library of functions that we will be using in the future projects. The functions are categorized into different sections, such as string manipulation, memory manipulation, linked list manipulation, etc.

## Usage

To use this library, you need to compile the library using the Makefile. The Makefile will compile the library and create a static library called libft.a. You can then include this library in your future projects.

## Makefile

The Makefile has the following rules:

- all: This rule will compile the library.
- clean: This rule will remove all object files.
- fclean: This rule will remove all object files and the library.
- re: This rule will remove all object files, the library, and recompile the library.
- bonus: This rule will compile the library with the bonus functions.

## Functions

The library includes:

- String manipulation: `ft_atoi`, `ft_itoa`, `ft_split`, `ft_strchr`, `ft_strdup`, `ft_strjoin`, `ft_strlcat`, `ft_strlcpy`, `ft_strlen`, `ft_strmapi`, `ft_strncmp`, `ft_strnstr`, `ft_strrchr`, `ft_strtrim`, `ft_substr`
- Character checks: `ft_isalnum`, `ft_isalpha`, `ft_isascii`, `ft_isdigit`, `ft_isprint`
- Conversion: `ft_tolower`, `ft_toupper`, `ft_tobase`
- Memory manipulation: `ft_bzero`, `ft_calloc`, `ft_realloc`, `ft_memccpy`, `ft_memchr`, `ft_memcmp`, `ft_memcpy`, `ft_memmove`, `ft_memset`
- File descriptor output: `ft_putchar_fd`, `ft_putendl_fd`, `ft_putnbr_fd`, `ft_putstr_fd`
- list functions: `ft_lstadd_back`, `ft_lstadd_front`, `ft_lstclear`, `ft_lstdelone`, `ft_lstiter`, `ft_lstlast`, `ft_lstmap`, `ft_lstnew`, `ft_lstsize`

## Disclaimer

This project is part of the curriculum at 42. The code is written according to the school's norms and guidelines. The code is not meant to be used for production code. It is meant to be used for learning and educational purposes only. (Do not copy-paste the code!)