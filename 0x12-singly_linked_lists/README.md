Singly linked lists
Learning Objectives
When and why using linked lists vs arrays
How to build and use linked lists
Tasks
Print list
Write a function that prints all the elements of a list_t list.

Prototype: size_t print_list(const list_t *h);
Return: the number of nodes
Format: see example
If str is NULL, print [0] (nil)
You are allowed to use printf
Solution: 0-print_list.c

$ amonkeyprogrammer@ubuntu:~/0x12. Singly linked lists$ cat 0-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;
    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);
    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_list.c -o a
$ amonkeyprogrammer@ubuntu:~/0x12. Singly linked lists$ ./a 
[5] Hello
[5] World
-> 2 elements
[0] (nil)
[5] World
-> 2 elements
$ amonkeyprogrammer@ubuntu:~/0x12. Singly linked lists$