#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;
int n;
int i;

int enqueueR(){
    if(rear==max-1){
        printf("\nQueue is overflow");
    }
    else{
        printf("\nEnter New Element : ");
        scanf("%d",&n);
        if(front==-1 && rear==-1){
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

int dequeueF(){
    if(front==-1 && rear==-1){
        printf("\nQueue is underflow");
    }
    else{
        if(front==rear){
            front=rear=-1;
        }
        else{
            front++;
        }
        printf("\nEclement deleted...");
    }
}

int enqueueF(){
    if(front==-1){
        printf("\nQueue is overflow");
    }
    else{
        printf("\nEnter New Element : ");
        scanf("%d",&n);
        front--;
        queue[front]=n;
        printf("\nElement inserted...");
    }
}

int dequeueR(){
    if(rear==-1){
        printf("\nQueue is underflow");
    }
    else{
        if(front==rear){
            front=rear=-1;
        }
        else{
            rear--;
        }
        printf("\nEclement deleted...");
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
        printf("\n1. Enqueue with Rear");
        printf("\n2. Dequeue with Front");
        printf("\n3. Enqueue with Front");
        printf("\n4. Dequeue with Rear");
        printf("\n5. Display");
        printf("\n6. Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);
        switch(ch){
        case 1: enqueueR();
                break;
        case 2: dequeueF();
                break;
        case 3: enqueueF();
                break;
        case 4: dequeueR();
                break;
        case 5: display();
                break;
        case 6: exit(0);
                break;
        default:printf("\nInvalid Choice !!!");
                break;
        }
    }
}