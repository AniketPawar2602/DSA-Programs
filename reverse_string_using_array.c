#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int stack[15];
int top=-1;

int push(char ch){
    if(top==15){
        printf("\nStack is overflow...");
    }
    else{
        top++;
        stack[top]=ch;
    }
}

int pop(){
    printf("%c",stack[top]);
    top--;
}

int main(){
    int i;
    char str[]="Aniket Pawar";
    int len = strlen(str);
    for(i=0;i<len;i++){
        push(str[i]);
    }

    printf("\nReverse String is : \n");

    for(i=0;i<len;i++){
        pop();
    }

    return 0;
}