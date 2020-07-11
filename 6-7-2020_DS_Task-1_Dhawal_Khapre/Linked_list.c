#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *nxt;
};

void insertStart(struct node** head, int n_data)
{
    struct node* n_node = (struct node*)malloc(sizeof(struct node));

    n_node -> data = n_data;
    n_node -> nxt = *head;
    *head = n_node;
}

void insertMiddle(struct node* prev_node, int n_data)
{
    if (prev_node == NULL)
    {
        printf("Previous node cannot be Null\n");
        return;
    }
    
    struct node* n_node = (struct node*)malloc(sizeof(struct node));

    n_node -> data = n_data;
    n_node->nxt = prev_node->nxt;
    prev_node->nxt = n_node;
}

void insertEnd(struct node** head, int n_data)
{
    struct node* n_node = (struct node*)malloc(sizeof(struct node));
    struct node *last = *head;

    n_node->data = n_data;
    n_node->nxt = NULL;

    if (*head == NULL)
    {
        *head = n_node;
        return;
    }

    while (last->nxt != NULL)
    {
        last = last->nxt;
    }

    last->nxt = n_node;
    return;
}

void deleteNode(struct node *head, struct node *n) 
{ 
    if(head == n) 
    { 
        if(head->nxt == NULL) 
        { 
            printf("There is only one node. The list can't be empty "); 
            return; 
        } 
  
        head->data = head->nxt->data; 
  
        n = head->nxt; 
  
        head->nxt = head->nxt->nxt; 
  
        free(n); 
  
        return; 
    } 
  
    struct node *prev = head; 
    while(prev->nxt != NULL && prev->nxt != n) 
        prev = prev->nxt; 
  
    if(prev->nxt == NULL) 
    { 
        printf("\n Given node is not present in Linked List"); 
        return; 
    } 
  
    prev->nxt = prev->nxt->nxt;
  
    free(n); 
  
    return;  
} 

void printList(struct node *head) 
{ 
    while(head!=NULL) 
    { 
        printf("%d ",head->data); 
        head=head->nxt; 
    } 
    printf("\n"); 
} 

int main()
{
    struct node *head = NULL;

    insertEnd(&head, 10);
    insertStart(&head, 29);
    insertStart(&head, 36);
    insertEnd(&head, 50);
    insertMiddle(head, 03);

    printList(head);

    //Deleting 3
    deleteNode(head, head->nxt);

    printList(head);
}