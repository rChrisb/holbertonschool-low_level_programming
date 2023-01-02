

<img width=55% src = "https://media.geeksforgeeks.org/wp-content/cdn-uploads/Linear-Search.png" />
<img width=50% src ="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221121132716/BinarySearch.png" />

# <p align=center> `C - Search Algorithms` </p>

## <p align=center> `Project's obejectives` </p>
Be able to explain:
- What is a search algorithm
- What is a linear search
- What is a binary search
- What is the best search algorithm to use depending on your needs

## <p align=center>`Tasks`</p>
### <p align=center>`0. Linear search`</p>
Write a function that searches for a value in an array of integers using the Linear search algorithm

- Prototype : int linear_search(int *array, size_t size, int value);
- Where array is a pointer to the first element of the array to search in
- size is the number of elements in array
- And value is the value to search for
- Your function must return the first index where value is located
- If value is not present in array or if array is NULL, your function must return -1
- Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)
```c
wilfried@search_algorithms$ cat 0-main.c 
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
wilfried@search_algorithms$ ./0-linear 
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
```
-------------------------------------------------------
### <p align=center>`1. Binary search`</p>

-------------------------------------------------------
### <p align=center>`2. Big O #0`</p>

-------------------------------------------------------
### <p align=center>`3. Big O #1`</p>

-------------------------------------------------------
### <p align=center>`4. Big O #2`</p>

-------------------------------------------------------
### <p align=center>`5. Big O #3`</p>

-------------------------------------------------------
### <p align=center>`6. Big O #4`</p>

-------------------------------------------------------

## <p align=right>`Score: 100/100`</p>
