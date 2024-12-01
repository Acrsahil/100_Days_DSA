#include <stdio.h>


#define N 6

int queue[N];
int front = -1;
int rear = -1;


void push(int data){
  if(front == -1 && rear == -1){
    front = rear = 0;
    queue[rear] = data;
  }else if((rear+1)%N == front){
    printf("Queue is full !");
  }else{
    rear = (rear+1)%N;
    queue[rear] = data;
  }
}

void pop(){
  if(front == -1 && rear == -1){
    printf("Queue is empty !");
  }else if(front == rear){
    front = rear = -1;
  }else{
    front = (front+1)%N;
  }
}

void peek(){
  if(front == -1 && rear == -1){
    printf("No elements are there to display!");
  }else{
    printf("%d \n",queue[front]);
  }
}


void display(){
  int i = front;

  printf("%d ", queue[i]);
  i = (i + 1) % N;

  while(i!=(rear+1)%N){
    printf("%d ",queue[i]);
    i = (i+1)%N;
  }
  printf("\n");
}




int main(){

  push(5);
  push(6);
  push(7);
  push(8);
  push(9);
  display();
  push(10);

  display();
  return 0;

}

