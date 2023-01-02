![image](https://i0.wp.com/techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/07/Typedef-in-c.jpg?fit=1200%2C628&ssl=1)

# <p align=center>`C - C - argc, argv`</p>
## <p align=center> `Project's obejectives` </p>
Be able to explain:
- What are structures, when, why and how to use them
- How to use typedef
## <p align=center>`Tasks`</p>

### <p align=center>`0. Poppy`</p>
Define a new type struct dog with the following elements:

- name, type = char *
- age, type = float
- owner, type = char *
----------------------------------------------------------------------
### <p align=center>`1. A dog is the only thing on earth that loves you more than you love yourself`</p>
Write a function that initialize a variable of type struct dog

- Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
----------------------------------------------------------------------
### <p align=center>`2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad`</p>
Write a function that prints a struct dog

- Prototype: void print_dog(struct dog *d);
- Format: see example bellow
- You are allowed to use the standard library
- If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
- If d is NULL print nothing.
----------------------------------------------------------------------
### <p align=center>`3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read`</p>
Define a new type dog_t as a new name for the type struct dog.

----------------------------------------------------------------------
### <p align=center>`4. A door is what a dog is perpetually on the wrong side of`</p>
Write a function that creates a new dog.

- Prototype: dog_t *new_dog(char *name, float age, char *owner);
- You have to store a copy of name and owner
- Return NULL if the function fails
----------------------------------------------------------------------
### <p align=center>`5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg`</p>
Write a function that frees dogs.

- Prototype: void free_dog(dog_t *d);
----------------------------------------------------------------------

## <p align=right>`Score: 100/100`</p>
