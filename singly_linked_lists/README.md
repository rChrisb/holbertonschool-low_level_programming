![image](https://www.sanfoundry.com/wp-content/uploads/2022/08/singly-linked-list-example.png)
# <p align=center>`C - Singly linked lists`</p>
## <p align=center> `Project's obejectives` </p>
Be able to explain:
- When and why using linked lists vs arrays
- How to build and use linked lists

## <p align=center>`Tasks`</p>
## <p align=center>`0. Print list`</p>
Write a function that prints all the elements of a list_t list.

- Prototype: size_t print_list(const list_t *h);
- Return: the number of nodes
- Format: see example
- If str is NULL, print [0] (nil)
- You are allowed to use printf
-------------------------------------------------
## <p align=center>`1. List length`</p>
Write a function that returns the number of elements in a linked list_t list.

- Prototype: size_t list_len(const list_t *h);
-------------------------------------------------
## <p align=center>`2. Add node`</p>
Write a function that adds a new node at the beginning of a list_t list.

- Prototype: list_t *add_node(list_t **head, const char *str);
- Return: the address of the new element, or NULL if it failed
- str needs to be duplicated
- You are allowed to use strdup
-------------------------------------------------
## <p align=center>`3. Add node at the end`</p>
Write a function that adds a new node at the end of a list_t list.

- Prototype: list_t *add_node_end(list_t **head, const char *str);
- Return: the address of the new element, or NULL if it failed
- str needs to be duplicated
- You are allowed to use strdup
-------------------------------------------------
## <p align=center>`4. Free list`</p>
Write a function that frees a list_t list.

- Prototype: void free_list(list_t *head);
-------------------------------------------------

## <p align=right>`Score: 100/100`</p>
