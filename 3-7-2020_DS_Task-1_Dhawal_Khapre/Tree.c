#include<stdio.h>
#include<stdlib.h>

struct  node
{
    int data;
    struct  node *left,*right;
};

struct node* newNode(int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    
}

struct queue{
    struct node* arr[20];
    int front,rear;
};

void initialize(struct queue* q){
    q->front=0;
    q->rear=0;
}

void enqueue(struct queue* q,struct node* n){
    q->arr[q->rear++]=n;
}

struct node* dequeue(struct queue* q){
    return q->arr[q->front++];
}

struct node* frontElement(struct queue* q){
    return q->arr[q->front];
}

int isEmpty(struct queue* q){
    return q->front==q->rear;
    
}

// Code for postorder traversal (Task2)

void postorder(struct node *root)
{
    if(root == NULL)
        return ;
    postorder(root->left);
    postorder(root->right);
    printf(root->data);
}




//Code for Inorder traversal
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

//Code for Preorder traversal
void preoder(struct node* root){
    if(root==NULL){
        return;
    }
    printf("%d ",root->data);
    preoder(root->left);
    preoder(root->right);

}

void levelOrder(struct node* root){
    printf("Level Order--->");
    if(root==NULL){
        return;
    }
    struct node* curr=root;
    struct queue* q=(struct queue*)malloc(sizeof(struct queue));
    initialize(q);
    enqueue(q,curr);
    while(!isEmpty(q)){
        struct node* curr=frontElement(q);
        printf("%d ",curr->data);
        if(curr->left!=NULL){
            enqueue(q,curr->left);
        }
        if(curr->right!=NULL){
            enqueue(q,curr->right);
        }
        dequeue(q);
    }
}








int main(){
    struct node* n1=(struct node*)malloc(sizeof(struct node));
    n1->data=1;
    struct node* n3=(struct node*)malloc(sizeof(struct node));
    n3->data=3;
    struct node* n4=(struct node*)malloc(sizeof(struct node));
    n4->data=4;
    struct node* n5=(struct node*)malloc(sizeof(struct node));
    n5->data=5;
    struct node* n6=(struct node*)malloc(sizeof(struct node));
    n6->data=6;
    struct node* n7=(struct node*)malloc(sizeof(struct node));
    n7->data=7;
    struct node* n10=newNode(10);
    struct node* n11=newNode(11);
    struct node* n12=newNode(12);


    n10->left=n6;
    n10->right=n12;
    n6->right=n7;
    n6->left=n3;
    n3->left=n1;
    n3->right=n4;
    n4->right=n5;

    struct node* newnode1=newNode(10);
    

    printf("Inorder- ");
    inorder(n10);
    printf("\nPreorder- ");
    preoder(n10);
    printf("\n");
    levelOrder(n10);
    printf("\n");
    printf("Postorder- ");
    postorder(n10);
}
