#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int stack[15];
int top=-1;
int len;

int push(char x){
    if(top==len-1){
        printf("\nStack is overflow");
    }
    else{
        top++;
        stack[top]=x;
    }
}

int pop(){
    int x;
    if(top==-1){
        printf("\nStack is underflow");
    }
    else{
        x=stack[top];
        top--;
    }
    return x;
}

int main(){
    int count=0;
    char str[20];
    int i;
    printf("\nEnter String : ");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++){
        push(str[i]);
    }
    for(i=0;i<len;i++){
        if(str[i]==pop()){
            count++;
        }
    }
    if(len==count){
        printf("\nString is palindrome");
    }
    else{
        printf("\nString is not palindrome");
    }
}