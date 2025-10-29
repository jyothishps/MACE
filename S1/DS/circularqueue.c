#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int cqueue[MAX];
int front = -1,rear = -1;

void enqueue(int value) {
    if((rear+1) % MAX == front) {
        printf("Queue is full\n");
        return;
    }
    if(rear == -1)
        rear = front = 0;
    else
        rear = (rear+1) % MAX;
    cqueue[rear] = value;
    printf("%d is inserted\n",value);
}

void dequeue() {
    int value;
    if(front == -1) {
        printf("Queue is empty\n");
        return;
    }
    value = cqueue[front];
    printf("%d is deleted\n",value);
    if( rear == front)
        rear = front = -1;
    else
        front = (front+1) % MAX;
}

void display() {
    if( front == -1 ) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    if(rear >= front) {
        for(int i=front;i<=rear;i++)
            printf("%d ",cqueue[i]);
    }
    else {
        for(int i=front;i<=MAX;i++)
            printf("%d ",cqueue[i]);
        for(int i=0;i<=rear;i++)
            printf("%d ",cqueue[i]);
    }
}

void count() {
    int c=0;
    if(front == -1)
        c=0;
    else if(rear >= front)
        c = rear-front+1;
    else
        (MAX-front) + (rear+1);
    printf("No. of elements:%d",c);
}

int main() {
    int ch,value;
    while(1) {
        printf("\n---Circular Queue---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Count\n4. Display\n5. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch) {
            case 1:
                printf("Enter value:");
                scanf("%d",&value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                count();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting.....\n");
                exit(0);
        }
    }
    return 0;
}