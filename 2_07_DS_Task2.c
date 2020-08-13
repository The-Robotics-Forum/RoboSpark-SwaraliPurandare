#include<stdio.h>
#include<string.h>
# define MAX 99

struct stack
{
	char stack[MAX];
	int top;
};

struct stack s;
void push (char a)
{
	if(s.top==MAX-1)
	{
		printf("Stack is full\n");
	}
	else
	{
	s.top +=1;
	s.stack[s.top]=a;
	}
}
void pop()
{
	if (s.top==-1)
	{
		printf("More no  of closing Brackets\n");
		printf("UNBALANCED EXPRESSION\n");
		exit(0);

	}
	else
	{
		s.top-=1;

	}
}
int main()
{
	char Exp[MAX];
	s.top=-1;
	printf("Enter a Expression\n");
	gets(Exp);
	int i;
	for(i=0;i<strlen(Exp);i++)
	{
		if(Exp[i]=='(')
		push(Exp[i]);
		else if(Exp[i]==')')
		pop();
	}
	if(s.top==-1)
	{
		printf("BALANCED EXPRESSION \n");
	}
	else
	printf("UNBALANCED EXPRESSION \n");
}
