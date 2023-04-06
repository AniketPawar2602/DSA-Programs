#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max];
int top=-1;
int i;
int n;

int push(){
    if(top==max-1){
        printf("\nStack is overflow");
    }
    else{
        printf("\nEnter New Element : ");
        scanf("%d",&n);
        top++;
        stack[top]=n;
        printf("\nElement inserted...");
    }
}

int pop(){
    if(top==-1){
        printf("\nStack is underflow");
    }
    else{
        top--;
        printf("\nElement deleted...");
    }
}

int display(){
    if(top==-1){
        printf("\nStack is underflow");
    }
    else{
        for(i=0;i<=top;i++){
            printf("%d ",stack[i]);
        }
    }
}

int main(){
    int ch;
    while(1){
        printf("\n*****Stack Menu*****");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);
        switch (ch){
        case 1: push();
                break;

        case 2: pop();
                break;

        case 3: display();
                break;
        
        case 4: exit(0);
        
        default:printf("\nInvlalid Choice !!!");
                break;
        }
    }
}