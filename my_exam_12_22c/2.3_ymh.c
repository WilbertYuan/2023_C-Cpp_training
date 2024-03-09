#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    struct node* prev;
    int data;
    struct node* next;
} node;

node* init;

node* create_next(node* p, int num)
{
    node* newp = (node*)malloc(sizeof(node));
    if (newp == NULL)
    {
        printf("creating failed");
        exit(1);
    }
    newp->data = num;
    newp->prev = p;
    newp->next = p->next;
  /*  if (p->next != NULL)
    {
        p->next->prev = newp;
    }*/
    p->next = newp;
    //printf("%d ", newp->data);
    return newp;
}

node* create_prev(node* p, int num)
{
    node* newp = (node*)malloc(sizeof(node));
    if (newp == NULL)
    {
        printf("creating failed");
        exit(1);
    }
    newp->data = num;
    newp->next = p;
    newp->prev = p->prev;
    //if (p->prev != NULL)
    //{
    //    p->prev->next = newp;
    //}
    p->prev = newp;
    //printf("%d ", newp->data);
    return newp;
}

int main()
{
    int i;
    init = (node*)malloc(sizeof(node));
    if (init == NULL)
    {
        printf("initialization failed");
        exit(1);
    }
    init->next = NULL;
    init->prev = NULL;
    node* p = init, * q = init;
    for (i = 0; i < 20; i += 2)
    {
        p = create_prev(p, i);
        q = create_next(q, i + 1);
    }
    node* q_init = q;
    while (q != p)
    {
        if (q != init)
        {
            printf("%d ", q->data);
        }
        q = q->prev;
    }
    printf("%d ", q->data);
    while (p->next != q_init)
    {
        p = p->next;
        free(p->prev);
    }
    free(p);
    return 0;
}