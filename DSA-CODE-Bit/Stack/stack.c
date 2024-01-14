#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *sp) {
    return (sp->top == -1);
}

int isfull(struct stack *sp) {
    return (sp->top == sp->size - 1);
}

void traversestack(struct stack *sp){
    struct stack *p = sp;
    if(isempty(sp)){
        printf("Stack is empty!");
    }else{
        int top = 0;
        while(top != sp->top+1){
            printf("%d ",sp->arr[top]);
            top++;
        }
        printf("\n");
    }


}

void push(struct stack *sp, int element) {
    if (isfull(sp)) {
        puts("Stack overflow!");
    } else {
        sp->top++;
        sp->arr[sp->top] = element;
    }
}

int pop(struct stack *sp) {
    if (isempty(sp)) {
        puts("Stack Underflow!");
        return -1;
    } else {
        int val = sp->arr[sp->top];
        sp->top--;
        return val;
    }
}

int main() {
    struct stack *sp;

    // Allocate memory for the stack structure
    sp = (struct stack *)malloc(sizeof(struct stack));

    if (sp == NULL) {
        printf("Memory allocation failed for stack\n");
        return 1; // indicating failure
    }

    sp->size = 80;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    if (sp->arr == NULL) {
        printf("Memory allocation failed for stack array\n");
        free(sp); // free the previously allocated memory for the structure
        return 1; // indicating failure
    }

    push(sp, 5);
    push(sp, 6);
    push(sp, 7);
    push(sp, 8);
    push(sp, 9);
    push(sp, 10);

    // while (!isempty(sp)) {
    //     printf("%d ", pop(sp));
    // }
    traversestack(sp);

    // Free the allocated memory
    free(sp->arr);
    free(sp);

    return 0;
}
