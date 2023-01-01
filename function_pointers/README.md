![image](https://electricalworkbook.com/wp-content/uploads/2018/08/c_pointer_function.png)

# <p align=center>`C - Function pointers`</p>
## <p align=center> `Project's obejectives` </p>
Be able to explain:
- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory


## <p align=center>`Tasks`</p>
### <p align=center>`0. What's my name`</p>
Write a function that prints a name.

- Prototype: void print_name(char *name, void (*f)(char *));
----------------------------------------------------
### <p align=center>`1. If you spend too much time thinking about a thing, you'll never get it done`</p>
Write a function that executes a function given as a parameter on each element of an array.

- Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
- where size is the size of the array
- and action is a pointer to the function you need to use
----------------------------------------------------
### <p align=center>``</p>

----------------------------------------------------
### <p align=center>``</p>

----------------------------------------------------

## <p align=right>`Score: 100/100`</p>
