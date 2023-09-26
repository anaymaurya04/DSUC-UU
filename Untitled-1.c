#include<stdio.h>
#include<stdlib.h>

struct node{
        int data;
        struct node *prev;
        struct node *next;
    };
struct node *head;   

void atbeg(int item)
{
    struct node *ptr;
    ptr= (struct node*)malloc(sizeof(struct node));  

    if(head==NULL)
    {
        ptr->data=item; 
        ptr->next=NULL;
        ptr->prev=NULL;
        head=ptr; 
    }
    else
    {
        ptr->data=item; 
        ptr->next=head;
        ptr->prev=NULL;
        head->prev=ptr;
        head=ptr;        
    }
}

void atend(int item)
{
    struct node *ptr;
    ptr= (struct node*)malloc(sizeof(struct node)); 

    struct node *temp;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next; 
    }
    temp->next=ptr; 
    ptr->prev=temp;
    ptr->next=NULL;
    ptr->data=item;
}

void traversal()
{
    struct node *temp;
    temp=head;
    printf("\nElements in the Linked list: "); 
    while(temp!=NULL)
    {
        printf("%d ", temp->data); 
        temp=temp->next; 
    }
}

void main()
{
    atbeg(10); traversal(); 
    atbeg(40); traversal(); 
    atend(13); traversal(); 
    atbeg(19); traversal(); 
}