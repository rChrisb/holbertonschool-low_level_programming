![image](https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/216/IMG_2410.JPG)

# <p align=center>`C - Pointers, arrays and strings`</p>
## <p align=center> `Project's obejectives` </p>
Be able to explain:
- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

## <p align=center>`Tasks`</p>
### <p align=center>`0. 98 Battery st.`</p>
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

Prototype: void reset_to_98(int *n);

----------------------------------------
### <p align=center>` 1. Don't swap horses in crossing a stream`</p>
Write a function that swaps the values of two integers.

Prototype: void swap_int(int *a, int *b);
----------------------------------------
### <p align=center>`2. This report, by its very length, defends itself against the risk of being read `</p>
Write a function that returns the length of a string.

Prototype: int _strlen(char *s);
----------------------------------------
### <p align=center>`3. I do not fear computers. I fear the lack of them `</p>
Write a function that prints a string, followed by a new line, to stdout.

Prototype: void _puts(char *str);
----------------------------------------
### <p align=center>`4. I can only go one way. I've not got a reverse gear `</p>
Write a function that prints a string, in reverse, followed by a new line.

Prototype: void print_rev(char *s);
----------------------------------------
### <p align=center>`5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes `</p>
Write a function that reverses a string.

Prototype: void rev_string(char *s);
----------------------------------------
### <p align=center>`6. Half the lies they tell about me aren't true
mandatory
`</p>
Write a function that prints every other character of a string, starting with the first character, followed by a new line.

Prototype: void puts2(char *str);
----------------------------------------
### <p align=center>`7. Winning is only half of it. Having fun is the other half `</p>
Write a function that prints half of a string, followed by a new line.

Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
----------------------------------------
### <p align=center>`8. Arrays are not pointers `</p>
Write a function that prints n elements of an array of integers, followed by a new line.

Prototype: void print_array(int *a, int n);
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf
----------------------------------------
### <p align=center>` 9. strcpy`</p>
Prototype: char *_strcpy(char *dest, char *src);
Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

Return value: the pointer to `dest`
----------------------------------------
