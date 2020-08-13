#include<stdio.h>
#include<string.h>

typedef struct stud
{
	char name[30];
	int roll_no;
}stud;

typedef struct Queue
{
	struct stud s[4];
	int rear,front;

}Queue;
void init(Queue* q)
{
	q->rear=0;
	q->front=0;

}
void print(Queue *q)
{
	if(q->rear==0)
	{
		printf("Queue is empty\n");
		}
	else
	{
		int i;

		for(i=q->front;i<q->rear;i++)
		puts(q->s[i].name);
		}
}
void enqueue( Queue* q, stud a)
{
	q->s[q->rear++]=a;
}

int main()
{
	 stud s[4];
	 Queue* que = ( Queue*)malloc(sizeof( Queue));
	init(que);
	int count=0;
	int i,j;
	for (i=0;i<4;i++)
	{

		printf("Enter details of %d student\n",i+1);
		printf("Enter roll no of %d student\n",i+1);
		scanf("%d",&s[i].roll_no);
		fflush(stdin);
		printf("Enter name  of student %d\n",i+1);
		gets(s[i].name);

	}
	for(j=0;j<4;j++)
	if(s[j].roll_no%2 ==0)
	{
		 enqueue(que,s[j]);

	}
	printf("Names of Student entered in Queue\n");
	print(que);



}
