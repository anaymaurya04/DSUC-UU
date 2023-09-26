#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head = NULL; // Initialize head to NULL

void Traversal(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void InsertAtFirst()
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    int ndata;
    printf("Enter data= ");
    scanf("%d", &ndata);
    ptr->data = ndata;
    
    if (head == NULL) {
        ptr->next = NULL;
        ptr->prev = NULL;
        head = ptr; // Update head only if the list was empty
    } else {
        ptr->next = head;
        ptr->prev = NULL;
        head->prev = ptr;
        head = ptr; // Update head to the new first node
    }
}

int main()
{
    int x;
    printf("Enter The Number of Nodes to be inserted: ");
    scanf("%d", &x);
    
    for (int i = 0; i < x; i++)
    {
        InsertAtFirst();
    }
    
    printf("Linked List Contents: ");
    Traversal(head);
    
    return 0;
}