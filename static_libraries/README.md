![image](https://media-exp1.licdn.com/dms/image/C4E12AQGQo_mcLkMHNQ/article-cover_image-shrink_720_1280/0/1615080464521?e=2147483647&v=beta&t=ND_OfvFzjdjngD8GdMnHY8xRccVZ57TJdjgDyOui9IM)


# <p align=center>`C - Static libraries`</p>
## <p align=center> `Project's obejectives` </p>
Be able to explain:
- What is a static library, how does it work, how to create one, and how to use it
- Basic usage of ar, ranlib, nm

## <p align=center>`Tasks`</p>
### <p align=center>`0. A library is not a luxury but one of the necessities of life`</p>
Create the static library libmy.a containing all the functions listed below:
```c
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```
---------------------------------------------------------------------
### <p align=center>`1. Without libraries what have we? We have no past and no future`</p>
Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
---------------------------------------------------------------------


## <p align=right>`Score: 100/100`</p>
