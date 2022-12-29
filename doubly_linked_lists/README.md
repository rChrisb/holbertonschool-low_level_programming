![image](https://www.thecrazyprogrammer.com/wp-content/uploads/2015/09/Doubly-Linked-List-in-C-and-C-.gif)

# <p align=center>`C - Doubly linked lists`</p>
## <p align=center> `Project's obejectives` </p>
Be able to explain:
- What is a doubly linked list
- How to use doubly linked lists
- Start to look for the right source of information without too much help

## <p align=center>`Tasks`</p>

### <p align=center>`0. Print list`</p>
Write a function that prints all the elements of a dlistint_t list.

Prototype: size_t print_dlistint(const dlistint_t *h);
Return: the number of nodes
Format: see example
----------------------------------------
### <p align=center>`1. List length`</p>
Write a function that returns the number of elements in a linked dlistint_t list.

Prototype: size_t dlistint_len(const dlistint_t *h);
----------------------------------------
### <p align=center>`2. Add node`</p>
Write a function that adds a new node at the beginning of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
----------------------------------------
### <p align=center>`3. Add node at the end`</p>
Write a function that adds a new node at the end of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
----------------------------------------
### <p align=center>`4. Free list`</p>
Write a function that frees a dlistint_t list.

Prototype: void free_dlistint(dlistint_t *head);
----------------------------------------
### <p align=center>`5. Get node at index`</p>
Write a function that returns the nth node of a dlistint_t linked list.

Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
where index is the index of the node, starting from 0
if the node does not exist, return NULL
----------------------------------------
### <p align=center>`6. Sum list`</p>
Write a function that returns the sum of all the data (n) of a dlistint_t linked list.

Prototype: int sum_dlistint(dlistint_t *head);
if the list is empty, return 0
----------------------------------------
### <p align=center>`7. Insert at index`</p>
Write a function that inserts a new node at a given position.

Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL
----------------------------------------
### <p align=center>`8. Delete at index`</p>
Write a function that deletes the node at index index of a dlistint_t linked list.

Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed
----------------------------------------


## <p align=right>`Score: 100/100`</p>
