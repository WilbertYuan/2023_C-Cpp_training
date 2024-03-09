#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>  
#include <stdlib.h>  

typedef struct node {
    struct node* prev;
    int data;
    struct node* next;
} node;

void create(node** p, int a) {
    node* newp = (node*)malloc(sizeof(node));
    newp->prev = *p;
    newp->data = a;
    newp->next = (*p)->next;
    (*p)->next = newp;
    if (newp->prev) newp->prev->next = newp;
    else *p = newp;
}

int main() {
    node* init = NULL;
    int a, b;
    scanf("%d%d",&a,&b);
    init = (node*)malloc(sizeof(node));
    init->prev = NULL;
    init->next = NULL;
    node* p = init;
    for (int i = 0; i < b - a; i++) {
        create(&p, i + 1);
    }
    while (p) {
        printf("%d ", p->data);
        p = p->prev;
    }
    node* q = init;
    while (q) {
        node* next = q->next;
        free(q);
        q = next;
    }
    return 0;
}