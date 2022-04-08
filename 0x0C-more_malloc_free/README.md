# 0x0C. C - More malloc, free

Table 1.

| No. | Prototype | File Name |
| :-- | :-------: |   ------: |
| 1   | void *malloc_checked(unsigned int b); | 0-malloc_checked.c |
| 2   | char *string_nconcat(char *s1, char *s2, unsigned int n); | 1-string_nconcat.c |
| 3   | void *_calloc(unsigned int nmemb, unsigned int size); | 2-calloc.c |
| 4   | int *array_range(int min, int max); | 3-array_range.c |
| 5   | void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size); | 100-realloc.c |
| 6   | mul | 101-mul.c |

## 0. Trust no one
Write a function that allocates memory using malloc.

* Prototype: void *malloc_checked(unsigned int b);
* Returns a pointer to the allocated memory
* if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
