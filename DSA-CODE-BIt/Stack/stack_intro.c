#include <stdio.h>
#include <stdlib.h>

struct st
{
    int size;
    int top;
    int *arr;
} typedef stack;

int isempty(stack *p)
{
    return (p->top == -1) ? 1 : 0;
}

int isfull(stack *p)
{
    return (p->top == p->size - 1) ? 1 : 0;
}

void push(stack *s, int value)
{
    if (isfull(s))
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = value;
    }
}

int pop(stack *s)
{
    if (isempty(s))
    {
        printf("Stack Underflow!\n");
        return -1;
    }
    else
    {
        int temp = s->arr[s->top];
        s->top--;
        return temp;
    }
}

void printstack(stack *s)
{
    if (isempty(s))
    {
        printf("Empty Stack!");
    }
    else
    {
        int top = s->top;
        while (top != -1)
        {
            printf("%d ", s->arr[top]);
            top--;
        }
        printf("\n");
    }
}

int peek(stack *s)
{
    return (isempty(s)) ? -1 : s->arr[s->top];
}

int main()
{
    stack *s = (stack *)malloc(sizeof(stack));
    printf("Enter the size of the stack: ");
    scanf("%d", &s->size);
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s, 5);
    push(s, 7);
    push(s, 8);
    push(s, 9);
    push(s, 10);

    printf("%d\n", peek(s));
    push(s, 11);
    printf("%d\n", peek(s));

    free(s->arr);
    free(s);

    return 0;
}
