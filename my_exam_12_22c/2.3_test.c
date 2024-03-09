#include <stdio.h>
#include <stdlib.h>

// 定义链表节点结构体
typedef struct ListNode 
{
    int val;
    struct ListNode* next;
}node;



// 插入节点
void insert(struct ListNode** head, int val) 
{
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    if (newNode != NULL)
    {
        newNode->val = val;
        newNode->next = *head;
        *head = newNode;
    }
    
}

// 删除节点
void removeNode(struct ListNode** head, int val) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = *head;
    while (curr != NULL) {
        if (curr->val == val)
        {
            if (prev == NULL) 
            {
                *head = curr->next;
            }
            else
            {
                prev->next = curr->next;
            }
            free(curr);
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}

// 查找节点
int search(struct ListNode* head, int val) {
    struct ListNode* curr = head;
    while (curr != NULL) 
    {
        if (curr->val == val) 
        {
            return 1;
        }
        curr = curr->next;
    }
    return 0;
}

void print(struct ListNode* head) 
{
    struct ListNode* curr = head;
    while (curr != NULL) 
    {
        printf("%d ", curr->val);
        curr = curr->next;
    }
    printf("\n");
}

int main() 
{
    struct ListNode* head = NULL;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    print(head);
    removeNode(&head, 3);
    print(head); // 输出：4 2 1
    printf("%d\n", search(head, 2)); // 输出：1
    printf("%d\n", search(head, 5)); // 输出：0

    return 0;
}
