#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
}typedef N;

void print(N * head){
    N * p = head;
    while(p != NULL){
        printf("%d ",p->data);
        p = p-> next;
    }
    printf("\n");
}
N * insertathead(N * head,int d){
    N * p = (N *)malloc(sizeof(N *));

    if(head -> next == NULL){
        head -> data = d;
    }
    p->data = d;
    p->next = head;
    head = p;
}
N * insertattail(N * head,int d){
    N * p = head;
    N * ptr = (N *)malloc(sizeof(N *));
    ptr->data = d;
    while(p->next!=NULL){
        p = p ->  next;
    }
    p->next = ptr;
    ptr -> next = NULL;
    return head;
}

int main()
{
    N * head;
    N * second;
    N * third;
    N * fourth;
    N * fifth;

    // Allocate memory for nodes in linked list in Heap
    head = (N *)malloc(sizeof(N));
    second = (N *)malloc(sizeof(N));
    third = (N *)malloc(sizeof(N));
    fourth = (N *)malloc(sizeof(N));
    fifth = (N *)malloc(sizeof(N));

    head -> data = 15;
    head -> next = second;

    second -> data = 10;
    second -> next = third;

    third -> data = 5;
    third -> next = fourth;

    fourth -> data = 1;
    fourth -> next = fifth;

    fifth -> data = 55;
    fifth -> next = NULL;

    printf("Before: \n");
    print(head);
    head = insertattail(head,5);
    head = insertattail(head,7);
    head = insertattail(head,8);
    head = insertattail(head,4);
    head = insertattail(head,2);
    head = insertattail(head,1);
    printf("After: \n");
    print(head);

    return 0;
}