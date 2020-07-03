#include<stdio.h>

int main()

{

char exp[100],str[100];
printf("enter expression");
scanf("%s",exp);
int top=-1,i,n=strlen(exp);
char temp;
for(i=0;i<n;i++)
{
if((exp[i]==']')&top==-1)
{ 
break;
}
if((exp[i]=='[')&top==-1)
{ top++;
str[top]=exp[i];
}
else
{temp=str[top];
top--;
if(temp=='['&&exp[i]==']')
{continue;
}
else
{break;
}
}
if (i==n&&top==-1);
{
printf("balanced brackets");
}
else
printf("Unbalanced brackets");
return 0;