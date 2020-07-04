#include<stdio.h>

int push(int *stack, int top)
{
    ++top;
    return top;
}

int pop(int *stack, int top)
{
    --top;
    return top;
}

int main()
{
    int stack[100];
    int top = -1;
    char x;

    x = 'a';

    while (x != 'z')
    {
        scanf("%c", &x);

        if (x == '(')
        {
            top = push(stack , top);
        }
        else if (x == ')')
        {
            top = pop(stack, top);
        }
    }

    if (top == -1)
    {
        printf("\nBrackets are equal!");
    }
    else
    {
        printf("\nBrackets are unequal");
    }
    
    return 0;
}
