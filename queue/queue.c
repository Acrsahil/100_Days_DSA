#include <stdio.h>
#include <stdlib.h>

struct q{
  int *queue;
  int front;
  int rear;
  int size;


}typedef queue;

void enqueue(queue * q,int data){
  if(q->rear == q->size){ // this is full case
    printf("Queue is full!");
  }else if(q->rear == -1 && q->front == -1){ // this is empty case
    q->rear = q->front = 0;
    q->queue[q->rear] = data;
  } else{
    q->rear++;
    q->queue[q->rear] = data;
  }
}


void dequeue(queue * q){
  if(q->rear == -1 && q->front == -1){
    printf("Queue is already empty!");
  }else if(q->rear == q->front){ // there is only one element in queue
    q->rear = q->front = -1;
  }else{
    q->front++;
  }
}


void display(queue * q){
  if(q->front == -1 && q->rear == -1){
    printf("queue is empty! ");
  }else{
    for(int i = q->front; i<=q->rear; i++){
      printf("%d ",q->queue[i]);
    }
    printf("\n");
  }
}
void peek(queue * q){
  if(q->front == -1 && q->rear == -1){
    printf("queue is empty! ");
  }else{
    printf("%d\n",q->queue[q->front]);
  }
}
int main(){

  queue q1;
  q1.front = -1;
  q1.rear = -1;
  q1.size = 19; // this can be dynamic

  q1.queue = (int * ) (malloc(q1.size*sizeof(int)));


  enqueue(&q1,5);
  enqueue(&q1,4);
  enqueue(&q1,55);
  enqueue(&q1,2);
  dequeue(&q1);
  dequeue(&q1);

  peek(&q1);
  display(&q1);


  return 0;
}
