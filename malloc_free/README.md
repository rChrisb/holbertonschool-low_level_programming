<p align="center">

<img align=center width=75% src = "https://media.geeksforgeeks.org/wp-content/cdn-uploads/Malloc-function-in-c.png" />
<img align=center width=75% src = "https://media.geeksforgeeks.org/wp-content/cdn-uploads/Free-function-in-c.png" />
</p>

# <p align=center >`C - malloc, free`</p>
## <p align=center> `Project's obejectives` </p>
Be able to explain:
- What is the difference between automatic and dynamic allocation
- What is malloc and free and how to use them
- Why and when use malloc
- How to use valgrind to check for memory leak

## <p align=center >`Resources`</p>
Read or watch:

- [0x0a - malloc & free - quick overview.pdf](https://intranet.hbtn.io/rltoken/jLHiF8lDWmdjL7HMjrsyKQ)
- [Dynamic memory allocation in C - malloc calloc realloc free ](https://intranet.hbtn.io/rltoken/q_SFo9w6mIBGMJk_1nzbVQ)

## <p align=center>`Tasks`</p>
### <p align=center>`0. Float like a butterfly, sting like a bee`</p>
Write a function that creates an array of chars, and initializes it with a specific char.

- Prototype: char *create_array(unsigned int size, char c);
- Returns NULL if size = 0
- Returns a pointer to the array, or NULL if it fails
-------------------------------------------------
### <p align=center>`1. The woman who has no imagination has no wings`</p>
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

- Prototype: char *_strdup(char *str);
- The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
- Returns NULL if str = NULL
- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
-------------------------------------------------
### <p align=center>`2. He who is not courageous enough to take risks will accomplish nothing in life`</p>
Write a function that concatenates two strings.

- Prototype: char *str_concat(char *s1, char *s2);
- The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
- if NULL is passed, treat it as an empty string
- The function should return NULL on failure
-------------------------------------------------
### <p align=center>`3. If you even dream of beating me you'd better wake up and apologize`</p>
Write a function that returns a pointer to a 2 dimensional array of integers.

- Prototype: int **alloc_grid(int width, int height);
- Each element of the grid should be initialized to 0
- The function should return NULL on failure
- If width or height is 0 or negative, return NULL
-------------------------------------------------
### <p align=center>`4. It's not bragging if you can back it up`</p>
Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

- Prototype: void free_grid(int **grid, int height);

-------------------------------------------------


## <p align=right>`Score: 100/100`</p>
