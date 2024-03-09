#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>  
#include<stdlib.h>  

typedef struct node
{
    struct node* prev;
    int data;
    struct node* next;
} node;

void create(node* p, int a, int i)
{
    node* newp = (node*)malloc(sizeof(node));
    if (newp == NULL) 
    {
        printf("Memory allocation failed\n");
        return;
    }
    newp->prev = p;
    newp->data = i + a;
    newp->next = p->next;
    p->next = newp;
    if (newp->next != NULL) 
    {
        newp->next->prev = newp;
        printf("yy");
    }
}

int main()
{
    node* init, * p;
    int a, b, i;
    init = (node*)malloc(sizeof(node));
    if (init == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    init->prev = NULL;
    init->next = NULL;
    p = init;
    int n = scanf("%d%d", &a, &b);
    for (i = 0; i < b - a; i++)
    {
        if (p != NULL)
        {
            p = p->next;
            create(p, a, i);
        }
        
    }
    // No change in the following code, but ensure you handle memory freeing correctly. Start from the head and always check if a node is not NULL before trying to access it.  
    // ... [rest of the code] ...   
    free(init); // Remember to free the memory!   
    return 0;
}