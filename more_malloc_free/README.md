<p align="center">

<img align=center width=75% src = "https://media.geeksforgeeks.org/wp-content/cdn-uploads/Malloc-function-in-c.png" />
<img align=center width=75% src = "https://media.geeksforgeeks.org/wp-content/cdn-uploads/Free-function-in-c.png" />
</p>

# <p align=center >`C - More malloc, free`</p>
## <p align=center> `Project's obejectives` </p>
Be able to explain:
- How to use the exit function
- What are the functions calloc and realloc from the standard library and how to use them

## <p align=center >`Resources`</p>
Read:
- [Do I cast the result of malloc?](https://intranet.hbtn.io/rltoken/OxKPD8wrcqqWw-FfmoHM0g)

## <p align=center>`Tasks`</p>
### <p align=center>`0. Trust no one`</p>
Write a function that allocates memory using malloc.

- Prototype: void *malloc_checked(unsigned int b);
- Returns a pointer to the allocated memory
- if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
--------------------------------------------------------------------
### <p align=center>`1. string_nconcat`</p>
Write a function that concatenates two strings.

- Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
- The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
- If the function fails, it should return NULL
- If n is greater or equal to the length of s2 then use the entire string s2
- if NULL is passed, treat it as an empty string
--------------------------------------------------------------------
### <p align=center>`2. _calloc`</p>
Write a function that allocates memory for an array, using malloc.

- Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
- The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
- The memory is set to zero
- If nmemb or size is 0, then _calloc returns NULL
- If malloc fails, then _calloc returns NULL
--------------------------------------------------------------------
### <p align=center>`3. array_range`</p>
Write a function that creates an array of integers.

- Prototype: int *array_range(int min, int max);
- The array created should contain all the values from min (included) to max (included), ordered from min to max
- Return: the pointer to the newly created array
- If min > max, return NULL
- If malloc fails, return NULL
--------------------------------------------------------------------


## <p align=right>`Score: 100/100`</p>
