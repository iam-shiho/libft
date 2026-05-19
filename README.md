*This project has been created as part of the 42 curriculum by swaragay.*

## Description
**Libft** is the foundational project of the 42 curriculum. Its primary goal is to recreate a wide range of standard C library functions, providing a deep understanding of memory management, pointer arithmetic, and data structures.
---

## Technical Details (Library Description)
The library is compiled into a single static library file `libft.a`. It consists of the following functional categories, all strictly adhering to the 42 Norm:

### 1. Libc Functions
Recreations of standard functions from `<ctype.h>`, `<string.h>`, and `<stdlib.h>`:
*   `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
*   `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`
*   `ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`, `ft_atoi`
*   `ft_calloc`, `ft_strdup`

### 2. Additional Functions
Non-standard utility functions for advanced string manipulation and memory allocation:
*   `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
*   `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3. Linked List
A complete set of functions to manage singly linked lists. This is a core part of the library designed to handle dynamic collections of data.
*   **Structure Definition:**
    ```c
    typedef struct s_list
    {
        void            *content;
        struct s_list   *next;
    }   t_list;

Implemented Functions: ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap.

## Instructions

### Compilation
The library is compiled using `cc` with `-Wall -Wextra -Werror` flags.

To compile the entire library (including linked list functions) and generate libft.a:
```bash
make : Compiles mandatory functions.

Cleaning Up
make clean: Removes all generated object files (.o).

make fclean: Removes all object files and the compiled libft.a library.

make re: Forces a complete recompilation from scratch (equivalent to make fclean && make).

```
## Resources
*   **一週間で身につくC言語の基本 - 構造体:** (https://c-lang.sevendays-study.com/ex-day5.html) `ft_lst%`.
*   **Qiita - Makefile入門:** (https://qiita.com/mizcii/items/cfbd2aa17f6b7517c37f) `Makefile`.
*   **Github - francinette:** (https://github.com/xicodomingues/francinette) `libft tests`.

### AI Usage
AI (Gemini) was utilized in the following aspects of this project:
Documentation: Assisted in structuring, formatting, and generating this README.md to perfectly align with the curriculum guidelines.
