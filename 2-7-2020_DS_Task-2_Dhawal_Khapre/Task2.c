#include<stdio.h>

int push(int *stack, int top)
{
    top++;
    return top;
}

int pop(int *stack, int top)
{
    top--;
    return top;
}

int main()
{
    int stack[100];
    int top = -1;
    char x;
    int count;
    int count2;

    x = '(';

    while (x == '(' || x == ')')
    {
        scanf("%s", &x);

        if (x == '(')
        {
           count = push(stack, top);
        }
        else
        {
            count2 = pop(stack, top);
        }
    }

    if (count == count2)
    {
        printf("\nBrackets are equal!");
    }
    else
    {
        printf("\nBrackets are unequal");
    }
    
    return 0;
}