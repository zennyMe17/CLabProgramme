#include<stdio.h>

#include<stdlib.h>

#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue() {
  if (front == -1 && rear == -1) {
    int x;
    printf("Enter the number = ");
    scanf("%d", & x);
    front = rear = 0;
    queue[rear] = x;
    printf("Element is inserted\n");
  } else if ((rear + 1) % N == front) {
    printf("Queue is Full\n");
  } else {
    int x;
    printf("Enter the number = ");
    scanf("%d", & x);
    rear = (rear + 1) % N;
    queue[rear] = x;
    printf("Element is inserted\n");
  }
}

void dequeue() {
  if (front == -1 && rear == -1) {
    printf("Queue is Empty\n");
  } else if (front == rear) {
    front = rear = -1;
    printf("Element is removed\n");
  } else {
    front = (front + 1) % N;
    printf("Element is removed\n");
  }
}

void display() {
  if (front == -1 && rear == -1) {
    printf("Queue is Empty\n");
  } else {
    printf("Elements present in Queue are =\n");
    int i = front;
    while (i != rear) {
      printf("%d\t", queue[i]);
      i = (i + 1) % N;
    }
    printf("%d", queue[i]);
    printf("\n");
  }
}

void peep() {
  printf("Element present at front is = %d\n", queue[front]);
}
void main() {
  int ch;
  while (1) {
    printf("Enter the choice\n1. Insertion\n2. Deletion\n3. Display\n 4. peep\n5. Exit\n");
    scanf("%d", & ch);
    switch (ch) {
    case 1: {
      enqueue();
      break;
    }
    case 2: {
      dequeue();
      break;
    }
    case 3: {
      display();
      break;
    }
    case 4: {
      peep();
      break;
    }
    case 5: {
      exit(0);
      break;
    }
    }
  }
}
