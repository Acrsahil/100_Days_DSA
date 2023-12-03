#include <stdio.h>
#include <stdlib.h>

struct st
{
    int size;
    int top;
    int *arr;


}typedef stack;

int isempty(stack * p){
    if(p->top == -1){
        return 1;
    }else{
        return 0;
    }
}
int isfull(stack * p){
    if(p->top == p->size-1){
        return 1;
    }else{
        return 0;
    }
}

void push(stack *s,int value){
    if(isfull(s)){
        printf("Stack Overflow!\n");
    }else{
        s->top++;
        s->arr[s->top] = value;
    }
}
int pop(stack *s){
    stack *p = s;
    if(isempty(p)){
        printf("Stack Underflow!\n");
        return -1;
    }else{
        int temp = p->arr[p->top];
        p->top--;
        return temp;
    }
}
void printstack(stack *s){
    stack *p = s;
    if(isempty(p)){
        printf("Empty Stack!");
    }else{
    int top = p->top;
    while(top !=-1){
        printf("%d ",p->arr[top]);
        top--;
    }printf("\n");
    }
}
int peek(stack *s){
    if(isempty(s)){
        return -1;
    }else{
        return s->arr[s->top];
    }
}

int main()
{
    stack * s;
    printf("Enter the size of the stack: ");
    scanf("%d",&s->size);
    s->top = -1;
    s->arr = (int *)malloc(s->size*sizeof(int));

    push(s,5);
    push(s,7);
    push(s,8);
    push(s,9);
    push(s,10);

    printf("%d\n",peek(s));
    push(s,11);
    printf("%d\n",peek(s));

    // printf("top element of the stack is %d\n",peek(s));

    return 0;
}