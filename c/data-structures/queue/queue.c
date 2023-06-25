#include <stdio.h>
# define SIZE 10

void Enqueue(int);
int Dequeue();
void Display();
int Peek();

int items[SIZE], front = -1, rear = -1;

//TODO refactor (the popped numbers still on memory)
int main(){
  Enqueue(1);
  Enqueue(3);
  Enqueue(23);
  Enqueue(23);
  Enqueue(233);
  Enqueue(3432);
  Enqueue(2);
  
  Display();
  

  int a = Dequeue();
  printf("%d popped!\n", a);
  int b = Dequeue();
  printf("%d popped!\n", b);
  int c = Dequeue();
  printf("%d popped!\n", c);
  int d = Dequeue();
  printf("%d popped!\n", d);
  int e = Dequeue();
  printf("%d popped!\n", e);

  Display();
}

void Enqueue(int value){
  if (rear == SIZE - 1){
    printf("Queue is full\n");
  }
  else {
    if (front == -1){
      front = 0;
      rear++;
      items[rear] = value;
      printf("%d inserted\n", value);
    }
    else {
      rear++;
      items[rear] = value;
      printf("%d inserted\n", value);}
  }
}

int Dequeue() {
  int temp;
  if (front == -1) {
    printf("Queue is empty\n");
  }
  else {
    temp = items[front];
    front++;
    if (front > rear) {
      front = rear = -1;
    }
  }
  return temp;
}

void Display () {
  if (rear == -1) {
    printf("Queue is empty\n");
  }
  else {
    printf("Queue elements are:\n");
    for (int i = front; i <= rear; i++) {
      printf("%d ", items[i]);
    }
    printf("\n");
  }
}