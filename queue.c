#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;
int n;
int i;

int enqueue(){
    if(rear==max-1){
        printf("\nQueue is overflow");
    }
    else{
        printf("\nEnter Your Choice : ");
        scanf("%d",&n);
        if(front==-1){
            front=rear=0;
            queue[rear]=n;
        }
        else{
            rear++;
            queue[rear]=n;
        }
        printf("\nElement inserted...");
    }
}

int dequeue(){
    if(front==-1 && rear==-1){
        printf("\nQueue is underflow");
    }
    else{
        front++;
        printf("\nElement deleted...");
    }
}

int display(){
    if(front==-1 && rear==-1){
        printf("\nQueue is underflow");
    }
    else{
        for(i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
    }
}

int main(){
    int ch;
    while(1){
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);
        switch(ch){
        case 1: enqueue();
                break;
        case 2: dequeue();
                break;
        case 3: display();
                break;
        case 4: exit(0);
                break;
        default:printf("\nInvalid Choice !!!");
                break;
        }
    }
}