#include <stdio.h>    
#include <stdlib.h>  
   

struct node
{  
    int data;  
    struct node *left;  
    struct node *right;  
};  
   
struct node *root = NULL;  
int flag = 0;  
   
struct node* createNode(int data)
{  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    
    newNode->data = data;  
    newNode->left = NULL;  
    newNode->right = NULL;  
    return newNode;  
}  
   
void searchNode(struct node *temp, int value){  
    
    if(root == NULL)
    {  
        printf("Tree is empty\n");  
    }  
    else
    {     
        if(temp->data == value)
        {  
            flag = 1;  
             return;  
        }  
        
        if(flag == 0 && temp->left != NULL)
        {  
            searchNode(temp->left, value);  
        }  
          
        if(flag == 0 && temp->right != NULL)
        {  
            searchNode(temp->right, value);  
        }  
    }  
}  
   
int main()  
{   
    int n;
   
    root = createNode(1);  
    root->left = createNode(2);  
    root->right = createNode(3);  
    root->left->left = createNode(4);  
    root->right->left = createNode(5);  
    root->right->right = createNode(6);  
          
    printf("\nEnter the element you want to saerch :");
    scanf("%d", &n);
    searchNode(root, n);  
      
    if(flag == 1)  
        printf("\nElement is present in the binary tree");  
    else  
        printf("\nElement is not present in the binary tree");  
    return 0;  
}  