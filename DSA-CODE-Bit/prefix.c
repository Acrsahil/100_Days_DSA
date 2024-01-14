#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack {
    int size;
    int top;
    char *arr;
};

char stackTop(struct stack *sp) {
    return sp->arr[sp->top];
}

int isEmpty(struct stack *ptr) {
    return (ptr->top == -1);
}

int isFull(struct stack *ptr) {
    return (ptr->top == ptr->size - 1);
}

void push(struct stack *ptr, char val) {
    if (isFull(ptr)) {
        printf("Stack Overflow! Cannot push %c to the stack\n", val);
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return '\0';
    } else {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int precedence(char ch) {
    if (ch == '*' || ch == '/')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else if (ch == '(' || ch == ')')
        return 1;
    else
        return 0;
}

int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}
void reverseString(char *str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap characters at start and end positions
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the center of the string
        start++;
        end--;
    }
}

char *infixToprefix(char *infix) {
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    char *prefix = (char *)malloc((strlen(infix) * 2 + 1) * sizeof(char));  // Increased buffer size for parentheses
    int i = 0;
    int j = 0;

    while (infix[i] != '\0') {
        if (!isOperator(infix[i]) && infix[i] != '(' && infix[i] != ')') {
            prefix[j] = infix[i];
            j++;
            i++;
        } else {
            if (infix[i] == '(' || isEmpty(sp) || precedence(infix[i]) > precedence(stackTop(sp))) {
                push(sp, infix[i]);
                i++;
            } else if (infix[i] == ')') {
                while (!isEmpty(sp) && stackTop(sp) != '(') {
                    prefix[j] = pop(sp);
                    j++;
                }
                pop(sp);  // Pop the '(' from the stack
                i++;
            } else {
                prefix[j] = pop(sp);
                j++;
            }
        }
    }

    while (!isEmpty(sp)) {
        prefix[j] = pop(sp);
        j++;
    }

    prefix[j] = '\0';

    // Free allocated memory for the stack
    free(sp->arr);
    free(sp);

    reverseString(prefix);
    return prefix;
}

int main() {
    int size;
    printf("Enter the size of the expression: ");
    scanf("%d",&size);
    char infix[size];  // Allocate an array to store infix expression
    printf("Enter the expression: ");
    scanf("%s", infix);

    reverseString(infix);

    char *prefix = infixToprefix(infix);
    printf("Prefix is %s\n", prefix);

    // Free allocated memory for the postfix string
    free(prefix);

    return 0;
}

